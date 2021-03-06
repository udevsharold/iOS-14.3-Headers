/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBGridLayoutSwitcherModifier, _SBGridFloorSwitcherModifier, SBAppLayout;

@interface SBGridSwitcherModifier : SBSwitcherModifier {

	SBGridLayoutSwitcherModifier* _gridLayoutModifier;
	_SBGridFloorSwitcherModifier* _floorModifier;
	unsigned long long _ongoingAppLayoutRemovals;
	SBAppLayout* _activeAppLayoutInSwitcher;

}
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(unsigned long long)numberOfRows;
-(void)didMoveToParentModifier:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)gridLayoutModifier;
@end

