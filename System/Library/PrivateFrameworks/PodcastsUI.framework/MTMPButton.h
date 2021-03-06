/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface MTMPButton : UIButton {

	unsigned _holding : 1;
	UIView* _hitTestDebugView;
	BOOL _hitTestDebugEnabled;
	double _holdDelayInterval;
	UIEdgeInsets _alignmentRectInsets;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) double holdDelayInterval;                      //@synthesize holdDelayInterval=_holdDelayInterval - In the implementation block
@property (getter=isHolding,nonatomic,readonly) BOOL holding; 
@property (assign,nonatomic) BOOL hitTestDebugEnabled;                      //@synthesize hitTestDebugEnabled=_hitTestDebugEnabled - In the implementation block
+(UIEdgeInsets)easyTouchDefaultHitRectInsets;
+(id)easyTouchButtonWithType:(long long)arg1 ;
+(double)easyTouchDefaultCharge;
-(BOOL)hitTestDebugEnabled;
-(BOOL)_supportsMacIdiom;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleTouchUp;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)dealloc;
-(double)holdDelayInterval;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)_delayedTriggerHold;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(void)_handleTouchDown;
-(BOOL)isHolding;
-(void)layoutSubviews;
-(UIEdgeInsets)hitRectInsets;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setHitTestDebugEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHoldDelayInterval:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleTouchCancel;
@end

