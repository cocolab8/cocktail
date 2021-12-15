package minilax;

import de.cocolab.reuse.*;
import minilax.Tree;
import minilax.Tree.*;

public class Types {

   public static Type Reduce (Type t) { return (Type) t.reduce (); }

   public static Type ReduceToRef (Type t) { return (Type) t.reduceToRef (); }

   public static Type Reduce1 (Type t) { return (Type) t.reduce1 (); }

   public static int RefLevel (Type t) { return t.refLevel (); }

   public static boolean IsSimpleType (Type t) { return t.isSimpleType (); }

/*
PREDICATE IsCompatible (Type, Type)
   Integer	, Integer	:- .
   Real		, Real		:- .
   Boolean	, Boolean	:- .
   Array (t1, Lwb, Upb, _), Array (t2, Lwb, Upb, _) ;
   Ref (t1)	, t2		;
   t1		, Ref (t2)	:- IsCompatible (t1, t2); .
   NoType	, _		:- .
   _		, NoType	:- .
   ErrorType	, _		:- .
   _		, ErrorType	:- .

*/
   public static boolean IsCompatible (Type t1, Type t2) {
      if (t1.isType (Tree.kInt) && t2.isType (Tree.kInt)) return true;
      if (t1.isType (Tree.kReal) && t2.isType (Tree.kReal)) return true;
      if (t1.isType (Tree.kBool) && t2.isType (Tree.kBool)) return true;
      if (t1.isType (Tree.kArray) && t2.isType (Tree.kArray))
         return IsCompatible (((Array)t1).Type, ((Array)t2).Type);
      if (t1.isType (Tree.kRef))
         return IsCompatible (((Ref)t1).Type, t2);
      if (t2.isType (Tree.kRef))
         return IsCompatible (t1, ((Ref)t2).Type);
      if (t1.isType (Tree.kNoType))
         return true;
      if (t2.isType (Tree.kNoType))
         return true;
      if (t1.isType (Tree.kErrorType))
         return true;
      if (t2.isType (Tree.kErrorType))
         return true;
      return false;
   }

/*
PREDICATE IsAssignmentCompatible (Type, Type)
   Integer	, Integer	:- .
   Real		, Real		:- .
   Real		, Integer	:- .
   Boolean	, Boolean	:- .
   Ref (t1)	, t2		;
   t1		, Ref (t2)	:- IsAssignmentCompatible (t1, t2); .
   NoType	, _		:- .
   _		, NoType	:- .
   ErrorType	, _		:- .
   _		, ErrorType	:- .

*/
   public static boolean IsAssignmentCompatible (Type t1, Type t2) {
      if (t1.isType (Tree.kInt) && t2.isType (Tree.kInt)) return true;
      if (t1.isType (Tree.kReal) && t2.isType (Tree.kReal)) return true;
      if (t1.isType (Tree.kReal) && t2.isType (Tree.kInt)) return true;
      if (t1.isType (Tree.kBool) && t2.isType (Tree.kBool)) return true;
      if (t1.isType (Tree.kRef))
         return IsAssignmentCompatible (((Ref)t1).Type, t2);
      if (t2.isType (Tree.kRef))
         return IsAssignmentCompatible (t1, ((Ref)t2).Type);
      if (t1.isType (Tree.kNoType))
         return true;
      if (t2.isType (Tree.kNoType))
         return true;
      if (t1.isType (Tree.kErrorType))
         return true;
      if (t2.isType (Tree.kErrorType))
         return true;
      return false;
   }

/*
FUNCTION ResultType (Type, Type, int) Type	EXTERN Plus Times Less Not nBoolean;
   t:Integer	, Integer	, (Plus)	RETURN t	:- .
   t:Real	, Real		, (Plus)	RETURN t	:- .
   t:Integer	, Integer	, (Times)	RETURN t	:- .
   t:Real	, Real		, (Times)	RETURN t	:- .
   Integer	, Integer	, (Less)	RETURN nBoolean	:- .
   Real		, Real		, (Less)	RETURN nBoolean	:- .
   t:Boolean	, Boolean	, (Less)	RETURN t	:- .
   t:Boolean	, _		, (Not)		RETURN t	:- .
   Ref (t1)	, t2		, o		;
   t1		, Ref (t2)	, o		RETURN ResultType (t1, t2, o) :- .
   t:NoType	, _		, _		RETURN t	:- .
   _		, t:NoType	, _		RETURN t	:- .
   ErrorType	, _		, _		RETURN NoType	:- .
   _		, ErrorType	, _		RETURN NoType	:- .
   ..						RETURN ErrorType:- .
*/
   public static Type ResultType (Type t1, Type t2, int o) {
      if (t1.isType (Tree.kInt) && t2.isType (Tree.kInt))
         if (o == Tree.Plus || o == Tree.Times) return t1;
      if (t1.isType (Tree.kReal) && t2.isType (Tree.kReal))
         if (o == Tree.Plus || o == Tree.Times) return t1;
      if (t1.isType (Tree.kInt) && t2.isType (Tree.kInt))
         if (o == Tree.Less) return nBoolean;
      if (t1.isType (Tree.kReal) && t2.isType (Tree.kReal))
         if (o == Tree.Less) return nBoolean;
      if (t1.isType (Tree.kBool) && t2.isType (Tree.kBool))
         if (o == Tree.Less) return t1;
      if (t1.isType (Tree.kBool))
         if (o == Tree.Not) return t1;
      if (t1.isType (Tree.kRef)) return ResultType (((Ref)t1).Type, t2, o);
      if (t2.isType (Tree.kRef)) return ResultType (t1, ((Ref)t2).Type, o);
      if (t1.isType (Tree.kNoType)) return t1;
      if (t2.isType (Tree.kNoType)) return t2;
      if (t1.isType (Tree.kErrorType)) return new NoType ();
      if (t2.isType (Tree.kErrorType)) return new NoType ();
      return new ErrorType ();
   }

/*
PROCEDURE CheckParams (Actuals, Formals)
   NoActual	, NoFormal	:- .
   NoActual (Pos), _		:-
      Error ("too few actual parameters"	, Pos); .
   Actual (_, Expr (Pos, ..)), NoFormal :-
      Error ("too many actual parameters"	, Pos); .

///* alternative 1

   Actual (NextA, Expr (Pos, TypeA, ..)), Formal (_, _, NextF, _, _, TypeF) :-
      {
	 if (! IsCompatible (TypeA, TypeF))
	    Error ("parameter type incompatible", Pos);
	 if (! (RefLevel (TypeF) - 1 <= RefLevel (TypeA)))
	    Error ("variable required"		, Pos);
      };
      CheckParams (NextA, NextF); .
*/
   public static void CheckParams (Actuals a, Formals d) {
      if (a.isType (Tree.kNoActual) && d.isType (Tree.kNoFormal)) return;
      if (a.isType (Tree.kNoActual)) Error ("too few actual parameters"	, ((NoActual)a).Pos);
      if (a.isType (Tree.kActual) && d.isType (Tree.kNoFormal)) 
         Error ("too many actual parameters"	, ((Actual)a).Expr.Pos);

///* alternative 1 */

      if (a.isType (Tree.kActual) && d.isType (Tree.kFormal)) {
         if (! IsCompatible (((Actual)a).Expr.Type, ((Formal)d).Type))
            Error ("parameter type incompatible", ((Actual)a).Expr.Pos);
         if (! (RefLevel (((Formal)d).Type) - 1 <= RefLevel (((Actual)a).Expr.Type)))
            Error ("variable required"		, ((Actual)a).Expr.Pos);
         CheckParams (((Actual)a).Next, ((Formal)d).Next);
      }

///* alternative 2 & 3 unreachable ! */
   }

   public static Type GetElementType (Type t) { return t.getElementType (); }

   public static int TypeSize (Type t) { return t.typeSize (); }

/*
FUNCTION Coerce (t1: Type, t2: Type) Coercions
   Ref (T1)	, Ref (T2)	RETURN Coerce (T1, T2) :- .
   Integer	, Real		RETURN IntToReal (NoCoercion ()) :- .
   Ref (T1)	, T2		RETURN Content (Coerce (T1, T2)) :- .
   ..				RETURN NoCoercion () :- .
*/

   public static Coercions Coerce (Type t1, Type t2) {
      if (t1.isType (Tree.kRef) && t2.isType (Tree.kRef)) return Coerce (((Ref)t1).Type, ((Ref)t2).Type);
      if (t1.isType (Tree.kInt) && t2.isType (Tree.kReal)) return new IntToReal (new NoCoercion ());
      if (t1.isType (Tree.kRef)) return new Content (Coerce (((Ref)t1).Type, t2));
      return new NoCoercion ();
   }

   public static void Error (String msg, Position pos) {
      try {
         Global.errors.message (msg, Errors.Error, pos);
      } catch (java.io.IOException e) {
         throw new MaskedException (e);
      }
   }

   static Type nBoolean = new Bool ();
   static Type nNoType = new NoType ();
   static Coercions nNoCoercion = new NoCoercion ();
}





