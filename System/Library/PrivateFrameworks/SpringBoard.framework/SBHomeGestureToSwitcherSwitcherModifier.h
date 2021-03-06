/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	SBSwitcherModifier* _multitaskingModifier;
	long long _startingEnvironmentMode;
	CGPoint _liftOffVelocity;
	CGPoint _liftOffTranslation;

}
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(id)visibleAppLayouts;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)appLayoutsToCacheSnapshots;
-(long long)wallpaperStyle;
-(double)containerStatusBarAnimationDuration;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)_appLayoutToScrollToDuringTransition;
-(id)handleTimerEvent:(id)arg1 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(id)_dismissForEmptySwitcherResponseName;
-(id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOfVelocity:(CGPoint)arg5 liftOffTranslation:(CGPoint)arg6 ;
@end

