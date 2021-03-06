/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDFreehandDrawingInfo, NSArray;

@interface TSDFreehandDrawingAnimationPlaybackTiming : NSObject {

	TSDFreehandDrawingInfo* _freehandDrawingInfo;
	NSArray* _fillShapes;
	NSArray* _strokeShapes;

}
-(id)initWithFreehandDrawingInfo:(id)arg1 ;
-(double)visibilityOfChild:(id)arg1 atPercent:(double)arg2 ;
-(BOOL)shouldParameterizeStrokesWithDuration:(double)arg1 framesPerSecond:(double)arg2 ;
-(id)p_fillTimingCurve;
@end

