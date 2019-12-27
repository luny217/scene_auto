#pragma once

typedef void* FaceHandle;
typedef void* FaceGroupHandle;

typedef enum FaceRetCode {
    RET_OK = 0,
    RET_ERROR,
    RET_NO_FACE
} FaceRetCode;

typedef enum FaceImageType {
    NV21 = 0,
    BGR = 1,
    GRAY = 2,
} FaceImageType;

typedef struct FaceModels {
    const char *detect_model;
    const char *postfilter_model;
    const char *refine_model;
    const char *pose_blur_model;
    const char *feature_model;
    const char *liveness_model_0;
    const char *liveness_model_1;
    const char *anchor_path;
    const char *group_model_path;
    // const char *liveness_model_2;
    // const char *age_gender_model;
} FaceModels;


typedef struct Point {
    float x;
    float y;
} Point;

typedef struct Landmark {
    float score;
    Point points[81];
} Landmark;

typedef struct FaceRect {
    int left;
    int top;
    int right;
    int bottom;
} FaceRect;

typedef struct FacePose {
    float roll;
    float pitch;
    float yaw;
    float blur;
} FacePoseBlur;

// typedef struct FaceAgeGender {
//     int age;
//     int gender;
// } FaceAgeGender;
