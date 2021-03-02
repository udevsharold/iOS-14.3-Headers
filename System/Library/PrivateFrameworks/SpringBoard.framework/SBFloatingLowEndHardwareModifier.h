/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier {

	unsigned long long _options;
	BOOL _floatingSwitcherVisible;
	BOOL _floatingAppVisibleOverSplitView;
	BOOL _floatingAppVisibleOverExclusiveForegroundApp;
	BOOL _shouldDimAndBlockTouches;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)switcherDimmingViewBlocksTouches;
-(BOOL)wantsSwitcherDimmingView;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(double)switcherDimmingAlpha;
-(BOOL)_shouldDimAndBlockTouchesToAppsUnderFloating;
@end
