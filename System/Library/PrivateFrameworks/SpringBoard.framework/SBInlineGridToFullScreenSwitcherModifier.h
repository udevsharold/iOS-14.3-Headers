/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBInlineGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fullScreenAppLayout;
	SBSwitcherModifier* _multitaskingModifier;
	UIRectCornerRadii _fullScreenCornerRadii;
	BOOL _dimInactiveCards;

}

@property (nonatomic,readonly) SBAppLayout * fullScreenAppLayout;                      //@synthesize fullScreenAppLayout=_fullScreenAppLayout - In the implementation block
@property (nonatomic,readonly) SBSwitcherModifier * multitaskingModifier;              //@synthesize multitaskingModifier=_multitaskingModifier - In the implementation block
-(long long)plusButtonStyle;
-(id)visibleAppLayouts;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)topMostLayoutElements;
-(id)appLayoutToScrollToBeforeTransitioning;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(double)reopenClosedWindowsButtonScale;
-(double)homeScreenDimmingAlpha;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(double)reopenClosedWindowsButtonAlpha;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(double)plusButtonAlpha;
-(double)homeScreenBackdropBlurProgress;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(BOOL)isContainerStatusBarVisible;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(SBSwitcherModifier *)multitaskingModifier;
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(SBAppLayout *)fullScreenAppLayout;
-(id)initWithTransitionID:(id)arg1 fullScreenAppLayout:(id)arg2 multitaskingModifier:(id)arg3 fullscreenCornerRadii:(UIRectCornerRadii)arg4 dimInactiveCards:(BOOL)arg5 ;
@end

