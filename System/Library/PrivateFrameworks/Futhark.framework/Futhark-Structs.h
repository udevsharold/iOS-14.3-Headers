/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef union {
	int seqInd;
	int ccInd;
} SCD_Union_FK0;

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

typedef struct {
	CGPoint field1;
	CGSize field2;
	int field3;
} SCD_Struct_FK4;

typedef struct {
	unsigned long long scaleBuffer;
	unsigned long long binarizer;
	unsigned long long linesegs;
	unsigned long long concomps;
	unsigned long long sequences;
	unsigned long long total;
} SCD_Struct_FK5;

typedef struct __CVBuffer* CVBufferRef;
