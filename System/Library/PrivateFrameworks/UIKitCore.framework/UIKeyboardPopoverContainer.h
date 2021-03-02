/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIKeyboardPopover, UIKBVisualEffectView, _UIPopoverView, _UIKeyboardPopoverAffordance, NSLayoutConstraint, UIView;

@interface UIKeyboardPopoverContainer : NSObject {

	_UIKeyboardPopover* _popoverContainerView;
	UIKBVisualEffectView* _backdrop;
	_UIPopoverView* _popover;
	_UIKeyboardPopoverAffordance* _affordance;
	CGRect _targetFull;
	double _arrowOffset;
	unsigned long long _direction;
	NSLayoutConstraint* _keyboardAreaHeight;

}

@property (retain,readonly) UIView * affordance; 
@property (readonly) CGRect frame; 
+(id)shadowColor;
+(UIEdgeInsets)contentInsets;
+(id)pillColor;
+(double)shadowOpacity;
+(double)cornerRadius;
+(CGSize)pillSize;
+(double)shadowRadius;
+(CGSize)shadowOffset;
+(double)extraWidth;
+(double)borderWidth;
+(double)edgeOffset;
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
+(double)arrowHeight;
+(double)dragAreaHeight;
+(id)borderColor;
+(double)pillCornerRadius;
+(double)pillDistanceToEdge;
+(id)propertiesForTargetRect:(CGRect)arg1 withHeight:(double)arg2 onScreenSize:(CGSize)arg3 ;
+(id)propertiesForSpecificKeyboardFrame:(CGRect)arg1 onScreenSize:(CGSize)arg2 ;
-(CGRect)frame;
-(UIView *)affordance;
-(id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2 ;
-(void)applyProperties:(id)arg1 ;
-(void)updateBackdropStyle:(long long)arg1 ;
-(void)invalidate;
@end
