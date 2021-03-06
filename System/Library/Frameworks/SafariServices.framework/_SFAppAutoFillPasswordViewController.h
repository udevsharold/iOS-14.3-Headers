/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordPickerServiceViewControllerProtocol;
@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {

	SFPasswordRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordPickerServiceViewControllerProtocol> _serviceProxy;

}
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setWebViewURL:(id)arg1 ;
-(void)setRemoteAppID:(id)arg1 ;
-(void)setRemoteLocalizedAppName:(id)arg1 ;
-(void)setRemoteUnlocalizedAppName:(id)arg1 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1 ;
-(void)authenticateToPresentInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthenticationGracePeriod:(double)arg1 ;
-(id)_remoteViewController;
-(void)_setUpServiceProxyIfNeeded;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)remoteViewController:(id)arg1 selectedCredential:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
@end

