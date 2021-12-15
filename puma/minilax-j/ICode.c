/* Implementation for class ICode */

#include "ICodeInt.h"
#include "ICode.h"

/*
 * Class:     ICode
 * Method:    Emit
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_ICode_Emit
  (JNIEnv *jenv, jclass jcls, jint oc, jint Param1, jint Param2) {
    Emit ((OpCode)oc, Param1, Param2);
  }

/*
 * Class:     ICode
 * Method:    EmitReal
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_ICode_EmitReal
  (JNIEnv *jenv, jclass jcls, jint oc, jint Param1, jfloat Param2) {
    EmitReal ((OpCode)oc, Param1, Param2);
  }

/*
 * Class:     ICode
 * Method:    Interpret
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ICode_Interpret
  (JNIEnv *jenv, jclass jcls) {
    Interpret ();
  }

/*
 * Class:     ICode
 * Method:    WriteCode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ICode_WriteCode
  (JNIEnv *jenv, jclass jcls) {
    WriteCode ();
  }


