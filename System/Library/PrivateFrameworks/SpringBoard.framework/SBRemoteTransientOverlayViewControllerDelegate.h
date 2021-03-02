/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRemoteTransientOverlayViewControllerDelegate <NSObject>
@optional
-(void)remoteTransientOverlayViewController:(id)arg1 didAppearAnimated:(BOOL)arg2;
-(void)remoteTransientOverlayViewController:(id)arg1 didDisappearAnimated:(BOOL)arg2;
-(void)remoteTransientOverlayViewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
-(void)remoteTransientOverlayViewController:(id)arg1 willDisappearAnimated:(BOOL)arg2;

@required
-(void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg1;
-(void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg1;
-(void)remoteTransientOverlayViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(id)remoteTransientOverlayViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
-(BOOL)remoteTransientOverlayViewController:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
-(void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1;

@end
