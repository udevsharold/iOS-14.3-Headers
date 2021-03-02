/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@protocol SBLockScreenEnvironment;
@class SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	id<SBLockScreenEnvironment> _lockScreenEnvironment;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;

}
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(void)dealloc;
-(id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2 ;
-(void)_begin;
-(void)_lockScreenDidActivate;
-(void)_didComplete;
-(void)_setupAndActivate;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(void)_activateLockScreen;
@end
