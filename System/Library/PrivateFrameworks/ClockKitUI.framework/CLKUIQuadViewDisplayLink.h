/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKUIQuadView, CADisplayLink, CLKClockTimerToken;

@interface CLKUIQuadViewDisplayLink : NSObject {

	CLKUIQuadView* _quadView;
	CADisplayLink* _displayLink;
	BOOL _synchronizeWithClockTimer;
	CLKClockTimerToken* _timerToken;
	long long _preferredFramesPerSecond;
	BOOL _paused;

}
-(void)_displayLinkFired:(id)arg1 ;
-(double)timestamp;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_updatePausedState;
-(unsigned long long)preferredFramesPerSecond;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 synchronizeWithClockTimer:(BOOL)arg2 ;
@end

