/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKIssuerProvisioningExtensionAuthorizationRemoteViewController.h>

@protocol PKIssuerProvisioningExtensionAuthorizationRemoteViewController
@required
-(void)serviceViewControllerDidCompleteWithResult:(long long)arg1;

@end


@interface PKIssuerProvisioningExtensionAuthorizationRemoteViewController : _UIRemoteViewController <PKIssuerProvisioningExtensionAuthorizationRemoteViewController> {

	/*^block*/id _completionHandler;
	long long _result;
	BOOL _finished;

}
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)pkui_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)pkui_finish;
-(BOOL)_isPresentationContextByDefault;
-(void)serviceViewControllerDidCompleteWithResult:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
