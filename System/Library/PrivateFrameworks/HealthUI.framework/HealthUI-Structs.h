/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_HK1;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned type : 1;
} SCD_Struct_He3;

typedef struct CGColor* CGColorRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	SCD_Struct_HK1 field1;
	long long field2;
} SCD_Struct_HK7;

typedef struct {
	SCD_Struct_HK7 field1;
	SCD_Struct_HK7 field2;
} SCD_Struct_HK8;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	CGRect field1;
	double field2;
	long long field3;
} SCD_Struct_HK11;

typedef struct {
	long long index;
	long long zoom;
} SCD_Struct_HK12;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct {
	CGRect transformedRect;
	double labelValue;
	long long options;
} SCD_Struct_HK15;

typedef struct {
	unsigned timestamp : 1;
	unsigned categoryID : 1;
	unsigned type : 1;
} SCD_Struct_He16;

typedef struct {
	CGPoint field1;
	CGPoint field2;
} SCD_Struct_Gr17;

typedef struct {
	SCD_Struct_HK12 blockPath;
	long long index;
} SCD_Struct_HK18;

typedef struct {
	SCD_Struct_HK18 min;
	SCD_Struct_HK18 max;
} SCD_Struct_HK19;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct HKLinearTransform {
	double offset;
	double scale;
} HKLinearTransform;

