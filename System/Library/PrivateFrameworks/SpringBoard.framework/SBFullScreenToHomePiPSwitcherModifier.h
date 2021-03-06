/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier, SBFullScreenToHomeIconZoomSwitcherModifier;

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _appLayout;
	CGPoint _finalCenter;
	double _finalScale;
	double _sourceAlpha;
	SBCoplanarSwitcherModifier* _coplanarModifier;
	SBFullScreenToHomeIconZoomSwitcherModifier* _zoomModifier;

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
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(BOOL)completesWhenChildrenComplete;
-(id)initWithTransitionID:(id)arg1 zoomModifier:(id)arg2 appLayout:(id)arg3 ;
-(BOOL)_shouldApplyMorphToPipToIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexSelectedAppLayout:(unsigned long long)arg1 ;
@end

