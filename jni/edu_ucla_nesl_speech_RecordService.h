/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_ucla_nesl_speech_RecordService */

#ifndef _Included_edu_ucla_nesl_speech_RecordService
#define _Included_edu_ucla_nesl_speech_RecordService
#ifdef __cplusplus
extern "C" {
#endif
#undef edu_ucla_nesl_speech_RecordService_RECORDER_SAMPLERATE
#define edu_ucla_nesl_speech_RecordService_RECORDER_SAMPLERATE 8000L
#undef edu_ucla_nesl_speech_RecordService_SAMPLE_SIZE
#define edu_ucla_nesl_speech_RecordService_SAMPLE_SIZE 3L
#undef edu_ucla_nesl_speech_RecordService_RECORDER_CHANNELS
#define edu_ucla_nesl_speech_RecordService_RECORDER_CHANNELS 16L
#undef edu_ucla_nesl_speech_RecordService_RECORDER_AUDIO_ENCODING
#define edu_ucla_nesl_speech_RecordService_RECORDER_AUDIO_ENCODING 2L
/*
 * Class:     edu_ucla_nesl_speech_RecordService
 * Method:    getSpeaker
 * Signature: ([SII)I
 */
JNIEXPORT jint JNICALL Java_edu_ucla_nesl_speech_RecordService_getSpeaker
  (JNIEnv *, jobject, jshortArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
