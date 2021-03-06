/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSProgress, CAShapeLayer;

@interface ICLoadingPieLayer : CALayer {

	BOOL _removeOnCompletion;
	double _progress;
	NSProgress* _observedProgress;
	CAShapeLayer* _pieLayer;
	CAShapeLayer* _backgroundLayer;

}

@property (nonatomic,retain) CAShapeLayer * pieLayer;                     //@synthesize pieLayer=_pieLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backgroundLayer;              //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,readonly) double progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSProgress * observedProgress;               //@synthesize observedProgress=_observedProgress - In the implementation block
@property (assign,nonatomic) BOOL removeOnCompletion;                     //@synthesize removeOnCompletion=_removeOnCompletion - In the implementation block
-(id)init;
-(void)dealloc;
-(NSProgress *)observedProgress;
-(void)setObservedProgress:(NSProgress *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(double)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGPathRef)newPathForProgress:(double)arg1 ;
-(BOOL)removeOnCompletion;
-(CAShapeLayer *)pieLayer;
-(void)setRemoveOnCompletion:(BOOL)arg1 ;
-(void)setPieLayer:(CAShapeLayer *)arg1 ;
@end

