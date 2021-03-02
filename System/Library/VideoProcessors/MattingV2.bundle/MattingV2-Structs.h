/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned field1;
	unsigned field2;
	float field3;
	float field4;
	unsigned field5;
} SCD_Struct_Co0;

typedef struct {
	float left;
	float top;
	float width;
	float height;
	float zeroShiftPercentile;
} SCD_Struct_Fo1;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	unsigned field11;
	float field12;
} SCD_Struct_Fo2;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	float zeroShiftPercentile;
	float preprocessingAlphaThreshold;
	float preprocessingAmplitude;
	float preprocessingExponent;
	float preprocessingGamma;
	float preprocessingMinFactor;
	float preprocessingMaxFactor;
	float radius;
	float subsampling;
	float epsilon;
	unsigned iterations;
	float rgbWeight;
} SCD_Struct_Fi4;

typedef struct {
	unsigned inputImageWidth;
	unsigned inputImageHeight;
	unsigned inputDisparityWidth;
	unsigned inputDisparityHeight;
	unsigned segmentationWidth;
	unsigned segmentationHeight;
	unsigned enabledOutputs;
	int tuningConfiguration;
} SCD_Struct_Fi5;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;
