#pragma once

#include "face_common.h"
#include <stdint.h>
#include <stdlib.h>

#define FACE_API

#ifdef __cplusplus
extern "C" {
#endif
/**
* initialize sdk with models
* @param[in]  FaceModels
* @return     error code
*/

FACE_API FaceRetCode init(FaceModels models);

/**
* release sdk
* @return     error code
*/

FACE_API FaceRetCode release();

/**
* release all FaceHandle
* @param[in]  handle			FaceHandle array
* @param[in]  size				number of FaceHandle
* @return     error code
*/

FACE_API FaceRetCode releaseAllFace(FaceHandle *handle, int size);

/**
* detect faces from image
* @param[in]  image
* @param[in]  width      image width
* @param[in]  height     image height
* @param[in]  type       image type, ONLY NV21 IS SUPPORTED!!!
* @param[out] handle     pointers of detected faces
* @param[out] count      number of detected faces
* @return     error code
*/

FACE_API FaceRetCode detect(const char *image, int width, int height, FaceImageType type, FaceHandle **handle, int *length);

/**
* get track  set detect config
* @param[in]  detect_threshold         detect threshold
* @param[in]  postfilter_threshold     postfilter threshold
* @return     error code
*/
FACE_API FaceRetCode set_detect_config(float detect_threshold, float postfilter_threshold);

/**
* get track  face
* @param[in]  handle         Face handles
* @param[in]  length    	number of faces
* @param[out] track_id      track_id list
* @return     error code
*/

FACE_API FaceRetCode track(FaceHandle *handle, int length, int *track_id);


/**
* ir filter
* @param[in]  handle        	Normal Face handles
* @param[in]  length    		number of Normal faces
* @param[in] ir_handle     		ir Face handles
* @param[in] ir_length     		number of ir faces
* @param[out] filter_result     pointer to the result , 1 pass if_filter, 0 failed if_filter
* @return     error code
*/

FACE_API FaceRetCode ir_filter(FaceHandle *handle, int length, FaceHandle *ir_handle, int ir_length, char *filter_result);

/**
* set if_filter parameter
* @param[in]  x_k
* @param[in]  x_b
* @param[in]  y_k
* @param[in]  y_b
* @return     error code
*/

FACE_API FaceRetCode set_ir_config(double x_k, double x_b, double y_k, double y_b);
/**
* get pose of detected face
* @param[in]  handle         Face handle
* @param[out] pose_result    pose of face
* @return     error code
*/

FACE_API FaceRetCode getPoseBlurAttribute(FaceHandle handle, FacePoseBlur *poseblur_result);

/**
* get age and gender
* @param[in]  handle                 Face handle
* @param[out] age_gender_result      age and gender of face
* @return     error code
*/

// FACE_API FaceRetCode getAgeGenderAttribute(FaceHandle handle, FaceAgeGender *age_gender_result);

/**
* extract feature from detected face
* @param[in]  handle                 Face handle
* @param[out] feature_result         feature of detected face
* @param[out] feature_length         the length of feature
* @return     error code
*/

FACE_API FaceRetCode extract(FaceHandle handle, float** feature_result, int *size);


/**
* set feature parameter
* @param[in]  x_k
* @param[in]  x_b
* @param[in]  y_k
* @param[in]  y_b
* @return     error code
*/
FACE_API FaceRetCode set_feature_config(double x_k, double x_b, double y_k, double y_b);
/**
* release feature
* @param[in]  feature                feature
* @return     error code
*/

FACE_API FaceRetCode releaseFeature(float* feature);

/**
* get livness of detected face
* @param[in]  handle			 Face handles
* @param[out] result             liveness of face
* @return     error code
*/

FACE_API FaceRetCode getLiveness(FaceHandle handle, float *liveness_result);

/**
* for multiple targets: bgr targets match ir targets;
* @param[in]  handle			 bgr handles
* @param[in]  handle			 ir handles
* @param[out] pair             pair init with pair[length]=ir_length, match:i->pair[i],if pair[i] == ir_length is attack;
* @return     error code
*/

FACE_API FaceRetCode BGR_IR_match(FaceHandle *handle, int length, FaceHandle *ir_handle, int ir_length, int *pair);

/**
* get livness_ir of detected face
* @param[in]  handle			 bgr handles
* @param[in]  handle			 ir handles
* @param[out] result             liveness of face
* @return     error code
*/

FACE_API FaceRetCode getLiveness_ir(FaceHandle bgr_handle, FaceHandle ir_handle, float *liveness_result);

/**
* get similarity of two features
* @param[in]  first_feature
* @param[in]  second_feature
* @param[in]  feature_length     the length of feature
* @param[out] result             the similarity of two features [0-100]
* @return     error code
*/

FACE_API FaceRetCode compare(const float *first_feature, const float *second_feature, int feature_length, float *result);

/**
* get most similar face id and similarity from a face group
* @param[in]  handle			face group handle
* @param[in]  target			target feature
* @param[in]  feature_length    target feature length
* @param[out] result			similarity
* @param[out] idx				id of the most similar face
* @return     error code
*/


FACE_API FaceRetCode identifyFromFaceGroup(FaceGroupHandle handle, const float *target, int feature_length, float *result, uint64_t *idx);

/**
* create a face group
* @param[in]  handle			face group handle
* @return     error code
*/

FACE_API FaceRetCode createFaceGroup(FaceGroupHandle *handle);

/**
* insert a face into face group
* @param[in]  handle				face group handle
* @param[in]  feature				feature
* @param[in]  feature_length		feature length
* @param[in]  face_id				face id
* @return     error code
*/

FACE_API FaceRetCode insertFaceGroup(FaceGroupHandle handle, const float *feature, int feature_length, uint64_t face_id);

/**
* remove a face from face group
* @param[in]  handle			Face Group Handle
* @param[in]  face_id			face id of the face to be remove
* @return     error code
*/

FACE_API FaceRetCode removeFaceGroup(FaceGroupHandle handle, uint64_t face_id);

/**
* get the number of faces in group
* @param[in]	handle				face group handle
* @param[out]	total_sum			number of faces
* @return		error code
*/

FACE_API FaceRetCode getFaceGroupCount(FaceGroupHandle handle, size_t *total_sum);

/**
* clear all faces in the group
* @param[in]	handle				face group handle
* @return		error code
*/

FACE_API FaceRetCode resetFaceGroup(FaceGroupHandle handle);

/**
* release a group
* @param[in]	handle				face group handle
* @return		error code
*/

FACE_API FaceRetCode releaseFaceGroup(FaceGroupHandle handle);


/**
* get FaceRect with Facehandle
* @param[in]  handle
* @param[out] result      pointer of result
* @return     error code
*/

FACE_API FaceRetCode getFaceRect(FaceHandle handle, FaceRect *result);

/**
* get FaceRect with Facehandle
* @param[in]  handle
* @param[out] result      pointer of result
* @return     error code
*/

FACE_API FaceRetCode getFaceLandmark(FaceHandle handle, Landmark *result);
#ifdef __cplusplus
}
#endif
