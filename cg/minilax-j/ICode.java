package minilax;

public class ICode {

   public static void Code (Tree t) {
      t.Code ();
   }

   public static native void Emit (int oc, int Param1, int Param2);
   public static native void EmitReal (int oc, int Param1, float Param2);
   public static native void WriteCode ();
   public static native void Interpret ();

   static {
      System.loadLibrary("icode");
   }
}

