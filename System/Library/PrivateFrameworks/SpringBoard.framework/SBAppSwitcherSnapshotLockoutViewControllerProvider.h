/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBAppSwitcherSnapshotLockoutViewControllerProvider : NSObject {

	NSMutableArray* _availableControllers;

}
-(id)init;
-(void)dealloc;
-(void)_receivedMemoryWarning:(id)arg1 ;
-(id)blockingViewControllerForBundleIdentifier:(id)arg1 screenTimePolicy:(long long)arg2 ;
-(void)recycleBlockingViewController:(id)arg1 ;
@end
