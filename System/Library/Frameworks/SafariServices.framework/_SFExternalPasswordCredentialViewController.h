/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFPasswordViewController.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialRemoteViewControllerDelegate.h>

@protocol SFExternalPasswordCredentialServiceViewControllerProtocol;
@class SFExternalPasswordCredentialRemoteViewController, SFQueueingServiceViewControllerProxy, NSString;

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate> {

	SFExternalPasswordCredentialRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFExternalPasswordCredentialServiceViewControllerProtocol> _serviceProxy;

}

@property (assign,nonatomic,__weak) id<_SFExternalPasswordCredentialViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)autoFillWithExternalCredential:(id)arg1 ;
-(id)_remoteViewController;
-(void)_setUpServiceProxyIfNeeded;
-(void)presentExternalPasswordCredentialRemoteViewController:(id)arg1 ;
-(void)getCredentialForExternalCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
@end

