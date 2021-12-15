(* $Id: DynArray.md,v 1.3 1997/05/27 11:57:56 grosch rel $ *)

(*
 * $Log: DynArray.md,v $
 * Revision 1.3  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.2  1993/08/18 15:06:51  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.1  1991/11/21  14:33:17  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.0  88/10/04  11:46:52  grosch
 * Initial revision
 * 
 *)

(* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 *)

DEFINITION MODULE DynArray;

FROM SYSTEM	IMPORT ADDRESS;

PROCEDURE MakeArray    (VAR ArrayPtr	: ADDRESS	;
			VAR ElmtCount	: LONGINT	;
			    ElmtSize	: LONGINT)	;

PROCEDURE ResizeArray  (VAR ArrayPtr	: ADDRESS	;
			VAR OldElmtCount: LONGINT	;
			    NewElmtCount: LONGINT	;
			    ElmtSize	: LONGINT)	;

PROCEDURE ExtendArray  (VAR ArrayPtr	: ADDRESS	;
			VAR ElmtCount	: LONGINT	;
			    ElmtSize	: LONGINT)	;

PROCEDURE ReleaseArray (VAR ArrayPtr	: ADDRESS	;
			VAR ElmtCount	: LONGINT	;
			    ElmtSize	: LONGINT)	;

END DynArray.
