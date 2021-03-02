/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBEntityRemovalCommitFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;
	long long _floatingConfiguration;

}
-(id)visibleAppLayouts;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)topMostLayoutElements;
-(CGRect)containerViewBounds;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(id)_layoutSettings;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)transitionWillBegin;
-(BOOL)_isIndexFromAppLayout:(unsigned long long)arg1 ;
-(BOOL)_isIndexToAppLayout:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 ;
-(double)_toBeRemovedFinalScale;
-(BOOL)isContentStatusBarVisible;
@end
