/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier : SBTransitionSwitcherModifier {

	long long _direction;
	NSArray* _activeAppLayouts;
	SBSwitcherModifier* _gridModifier;
	BOOL _wantsMinificationFilter;

}
-(double)homeScreenAlpha;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(id)visibleAppLayouts;
-(double)homeScreenScale;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)topMostLayoutElements;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)appLayoutsToCacheSnapshots;
-(long long)wallpaperStyle;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(id)_layoutSettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)wallpaperScale;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(double)_unselectedCardScale;
-(BOOL)_isEffectivelyFullScreen;
-(BOOL)_isIndexActive:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 direction:(long long)arg2 activeAppLayouts:(id)arg3 gridModifier:(id)arg4 ;
@end

