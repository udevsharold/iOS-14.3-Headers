/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	long long field1;
	CGPoint field2;
	CGPoint field3;
} SCD_Struct_SB0;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct _NSZone* NSZoneRef;

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

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	double value;
	BOOL inclusive;
} SCD_Struct_SB7;

typedef struct {
	SCD_Struct_SB7 start;
	SCD_Struct_SB7 end;
} SCD_Struct_SB8;

typedef struct SBIconImageInfo {
	CGSize size;
	double scale;
	double continuousCornerRadius;
} SBIconImageInfo;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct os_activity_scope_state_s {
	unsigned long long opaque[2];
} os_activity_scope_state_s;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct SBHClockApplicationIconImageMetrics {
	double secondsHandWidth;
	double secondsHandLength;
	double secondsHandleLength;
	double secondsHandRingDiameter;
	double secondsHandRingKnockoutDiameter;
	CGSize secondsHandBounds;
	double minutesHandWidth;
	double minutesHandLength;
	double minutesHandRingDiameter;
	double minutesHandRingKnockoutDiameter;
	CGSize minutesHandBounds;
	double shadowRadius;
	double shadowInset;
	double hoursHandWidth;
	double hoursHandLength;
	CGSize hoursHandBounds;
	double separatorWidth;
	double separatorLength;
	double separatorExtraLength;
	double faceRadius;
	double contentsScale;
	SBIconImageInfo iconImageInfo;
} SBHClockApplicationIconImageMetrics;

typedef struct NSDirectionalEdgeInsets {
	double top;
	double leading;
	double bottom;
	double trailing;
} NSDirectionalEdgeInsets;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_SB16;

typedef struct SBRootFolderViewPageManagementLayoutMetrics {
	CGSize cellSpacing;
	double bottomMargin;
} SBRootFolderViewPageManagementLayoutMetrics;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct SBPageManagementCellMetrics {
	CGSize fullListViewSize;
	CGSize scaledListViewSize;
	UIEdgeInsets foregroundInsets;
	UIEdgeInsets backgroundInsets;
	double listViewHeightAdjustment;
	double listViewVerticalPositionAdjustment;
	double toggleButtonDiameter;
	double toggleButtonVerticalMargin;
} SBPageManagementCellMetrics;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct SBVisibleColumnRange {
	unsigned long long iconListIndex;
	NSRange columnRange;
} SBVisibleColumnRange;

typedef struct SBIconListPredictedVisibleColumn {
	unsigned long long column;
	double confidence;
} SBIconListPredictedVisibleColumn;

typedef struct SBFolderPredictedVisibleColumn {
	unsigned long long iconListIndex;
	SBIconListPredictedVisibleColumn predictedVisibleColumn;
} SBFolderPredictedVisibleColumn;

typedef struct SBHIconGridSize {
	unsigned short columns;
	unsigned short rows;
} SBHIconGridSize;

typedef struct SBHIconGridSizeClassSizes {
	SBHIconGridSize small;
	SBHIconGridSize medium;
	SBHIconGridSize large;
	SBHIconGridSize extraLarge;
} SBHIconGridSizeClassSizes;

typedef struct SBHIconGridSizeClassIconImageInfos {
	SBIconImageInfo icon;
	SBIconImageInfo small;
	SBIconImageInfo medium;
	SBIconImageInfo large;
	SBIconImageInfo extraLarge;
} SBHIconGridSizeClassIconImageInfos;

typedef struct {
	CGRect field1;
	CGRect field2;
	CGRect field3;
	CGRect field4;
	CGRect field5;
} SCD_Struct_SB27;

typedef struct SBIconCoordinate {
	long long row;
	long long col;
} SBIconCoordinate;

typedef struct {
	UIEdgeInsets field1;
	CGRect field2;
	CGRect field3;
	CGRect field4;
	CGRect field5;
	double field6;
	double field7;
} SCD_Struct_SB29;

