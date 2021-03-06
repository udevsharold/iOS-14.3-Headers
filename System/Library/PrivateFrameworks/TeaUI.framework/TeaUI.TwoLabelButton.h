/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@interface TeaUI.TwoLabelButton : UIControl <CAAnimationDelegate> {

	 highlightMask;
	 animationState;
	 buttonState;
	 animationTrigger;
	 titleLabelNormal;
	 titleLabelHighlighted;
	 labelNormal;
	 labelHighlighted;
	 borderColor;
	 backgroundColorNormal;
	 backgroundColorHighlighted;
	 onTap;
	 currentBorderColor;
	 currentBackgroundColorNormal;
	 currentBackgroundColorHighlighted;

}
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

