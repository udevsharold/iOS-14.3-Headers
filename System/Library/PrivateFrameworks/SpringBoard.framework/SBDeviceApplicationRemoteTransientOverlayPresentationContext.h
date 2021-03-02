/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBRemoteTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject {

	SBRemoteTransientOverlayViewController* _remoteViewController;
	SBSRemoteAlertPresentationTarget* _presentationTarget;

}

@property (nonatomic,retain) SBRemoteTransientOverlayViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertPresentationTarget * presentationTarget;                      //@synthesize presentationTarget=_presentationTarget - In the implementation block
-(SBRemoteTransientOverlayViewController *)remoteViewController;
-(SBSRemoteAlertPresentationTarget *)presentationTarget;
-(void)setPresentationTarget:(SBSRemoteAlertPresentationTarget *)arg1 ;
-(void)setRemoteViewController:(SBRemoteTransientOverlayViewController *)arg1 ;
@end
