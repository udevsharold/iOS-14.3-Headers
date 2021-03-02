/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDDynamicOverrideProvider.h>

@class TSDFreehandDrawingInfo, TSDFreehandDrawingAnimationPlaybackTiming, NSString;

@interface TSDFreehandDrawingAnimationPlaybackSession : NSObject <TSDDynamicOverrideProvider> {

	TSDFreehandDrawingInfo* _drawingInfo;
	TSDFreehandDrawingAnimationPlaybackTiming* _timing;
	BOOL _shouldParameterizeStrokes;
	double _progress;
	double _framesPerSecond;
	double _duration;

}

@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double progress;                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL shouldParameterizeStrokes;              //@synthesize shouldParameterizeStrokes=_shouldParameterizeStrokes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(double)duration;
-(id)dynamicOverrideForLayout:(id)arg1 ;
-(id)dynamicOverrideForRep:(id)arg1 ;
-(BOOL)shouldParameterizeStrokes;
-(double)visibilityOfChild:(id)arg1 ;
-(void)p_updateShouldParameterizeStrokes;
-(id)initWithFreehandDrawingInfo:(id)arg1 duration:(double)arg2 framesPerSecond:(double)arg3 ;
@end
