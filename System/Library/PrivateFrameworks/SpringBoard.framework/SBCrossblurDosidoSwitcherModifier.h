/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	unsigned long long _direction;

}
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(id)visibleAppLayouts;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(id)topMostLayoutElements;
-(long long)homeScreenBackdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(id)appLayoutsToCacheSnapshots;
-(long long)wallpaperStyle;
-(id)transitionDidEnd;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)transitionWillUpdate;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)_layoutSettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(BOOL)_isToAppLayoutAtIndex:(unsigned long long)arg1 ;
-(id)_opacitySettings;
-(BOOL)_isFromAppLayoutAtIndex:(unsigned long long)arg1 ;
@end
