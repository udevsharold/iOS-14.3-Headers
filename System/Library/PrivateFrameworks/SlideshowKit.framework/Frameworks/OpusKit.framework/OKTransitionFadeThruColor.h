/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKTransition.h>

@class OFUIView, UIColor;

@interface OKTransitionFadeThruColor : OKTransition {

	OFUIView* _colorView;
	UIColor* _color;

}

@property (retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)supportedSettings;
-(void)setColor:(UIColor *)arg1 ;
-(UIColor *)color;
-(void)dealloc;
-(void)setSettingColor:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
@end
