/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface UIInputSetHostView : UIView
+(BOOL)_notifyOnExplicitLayout;
+(BOOL)_shouldHitTestInputViewFirst;
+(BOOL)requiresConstraintBasedLayout;
-(void)layoutIfNeeded;
-(void)_updateSafeAreaInsets;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(int)textEffectsVisibilityLevel;
@end
