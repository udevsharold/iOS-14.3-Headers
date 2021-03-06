/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKKeyboardScrollableInternal;
#import <WebKit/WebKit-Structs.h>
@interface WKKeyboardScrollingAnimator : NSObject {

	id<WKKeyboardScrollableInternal> _scrollable;
	RetainPtr<CADisplayLink>* _displayLink;
	Optional<WebKit::KeyboardScroll> _currentScroll;
	BOOL _scrollTriggeringKeyIsPressed;
	FloatSize _velocity;
	FloatPoint _idealPosition;
	FloatPoint _currentPosition;
	FloatPoint _idealPositionForMinimumTravel;

}
-(void)handleKeyEvent:(id)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(const KeyboardScrollParameters*)parameters;
-(BOOL)beginWithEvent:(id)arg1 ;
-(id)init;
-(Optional<WebKit::KeyboardScroll>)keyboardScrollForEvent:(id)arg1 ;
-(void)stopAnimatedScroll;
-(void)willStartInteractiveScroll;
-(id)initWithScrollable:(id)arg1 ;
-(void)stopDisplayLink;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)startDisplayLinkIfNeeded;
-(void)invalidate;
@end

