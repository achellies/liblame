/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sourceforge_lame_Lame */

#define LAME_PRESET_DEFAULT 0
#define LAME_PRESET_MEDIUM 1
#define LAME_PRESET_STANDARD 2
#define LAME_PRESET_EXTREME 3

#ifndef _Included_net_sourceforge_lame_Lame
#define _Included_net_sourceforge_lame_Lame
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    initializeLame
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_initializeLame
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    setLamePreset
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_lame_Lame_setLamePreset
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    encodeShortBuffer
 * Signature: ([S[SI[BI)I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_encodeShortBuffer
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray, jint);

/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    encodeFlushBuffers
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_encodeFlushBuffers
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    closeLame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_closeLame
  (JNIEnv *, jclass);

/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    initDecoder
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_initDecoder
  (JNIEnv *, jclass);

/*
 * Class:     com_intervigil_lame_Lame
 * Method:    decodeMp3
 * Signature: ([BI[S[S)I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_decodeMp3
  (JNIEnv *, jclass, jbyteArray, jint, jshortArray, jshortArray);

/*
 * Class:     net_sourceforge_lame_Lame
 * Method:    closeDecoder
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_lame_Lame_closeDecoder
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
