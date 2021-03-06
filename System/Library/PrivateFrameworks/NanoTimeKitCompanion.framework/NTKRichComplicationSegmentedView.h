/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:30:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCurveView.h>

@class NSMutableArray;

@interface NTKRichComplicationSegmentedView : NTKRichComplicationCurveView {

	NSMutableArray* _segments;

}

@property (nonatomic,retain) NSMutableArray * segments;              //@synthesize segments=_segments - In the implementation block
+(BOOL)isXL;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setGradientColors:(id)arg1 ;
-(void)_updateSegmentsWithColors:(id)arg1 ;
-(void)_addSegmentsToLayer:(id)arg1 ;
-(double)_arcAngleWithOuterRadius:(double)arg1 segmentGapAngle:(double)arg2 numberOfSegments:(unsigned long long)arg3 ;
-(long long)_segmentShapeStyleForIndex:(unsigned long long)arg1 angle:(double)arg2 ;
-(id)_colorForSegment:(id)arg1 ;
-(void)_setupShapeLayer:(id)arg1 ;
-(id)_shapeStrokeColor;
@end

