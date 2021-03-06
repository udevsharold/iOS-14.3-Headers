/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;
#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@class ARUICountdownTimeline, ARUICountdownView;

@interface ARUICountdownAnimator : NSObject {

	struct {
		BOOL willBeginAnimating;
		BOOL willBeginAnimation;
		BOOL performingAnimation;
		BOOL completedAnimation;
		BOOL didFinishAnimating;
	}  _delegateFlags;
	BOOL _animating;
	BOOL _canceled;
	id<ARUICountdownAnimation> _currentAnimation;
	ARUICountdownTimeline* _timeline;
	ARUICountdownView* _countdownView;
	id<ARUICountdownAnimatorDelegate> _delegate;

}

@property (nonatomic,retain) ARUICountdownTimeline * timeline;                               //@synthesize timeline=_timeline - In the implementation block
@property (assign,nonatomic,__weak) ARUICountdownView * countdownView;                       //@synthesize countdownView=_countdownView - In the implementation block
@property (assign,nonatomic,__weak) id<ARUICountdownAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)canceled;
-(void)cancelAnimations;
-(BOOL)isAnimating;
-(ARUICountdownTimeline *)timeline;
-(void)setDelegate:(id<ARUICountdownAnimatorDelegate>)arg1 ;
-(void)setTimeline:(ARUICountdownTimeline *)arg1 ;
-(id<ARUICountdownAnimatorDelegate>)delegate;
-(void)prepareToAnimate;
-(id)initWithTimeline:(id)arg1 ;
-(void)_delegate_willBeginAnimating;
-(void)_applyAnimationAtIndex:(unsigned long long)arg1 ;
-(void)_delegate_didFinishAnimating;
-(void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2 ;
-(void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2 ;
-(void)_delegate_completedAnimation:(id)arg1 ;
-(void)_applyCancelAnimationAtIndex:(unsigned long long)arg1 ;
-(void)beginAnimations;
-(ARUICountdownView *)countdownView;
-(void)setCountdownView:(ARUICountdownView *)arg1 ;
@end

