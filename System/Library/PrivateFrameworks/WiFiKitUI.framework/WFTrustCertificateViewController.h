/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TrustCertificateViewControllerDelegate.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFCertificateProviderContext;
@class TrustCertificateViewController, NSString;

@interface WFTrustCertificateViewController : UIViewController <TrustCertificateViewControllerDelegate, WFNetworkView> {

	BOOL _wantsModalPresentation;
	TrustCertificateViewController* _certViewController;
	id<WFCertificateProviderContext> _credentialsContext;

}

@property (nonatomic,retain) TrustCertificateViewController * certViewController;              //@synthesize certViewController=_certViewController - In the implementation block
@property (nonatomic,retain) id<WFCertificateProviderContext> credentialsContext;              //@synthesize credentialsContext=_credentialsContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsModalPresentation;                                    //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
-(BOOL)wantsModalPresentation;
-(void)loadView;
-(id<WFCertificateProviderContext>)credentialsContext;
-(void)setCredentialsContext:(id<WFCertificateProviderContext>)arg1 ;
-(id)initWithCertificateProviderContext:(id)arg1 ;
-(void)trustCertificateViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
-(TrustCertificateViewController *)certViewController;
-(void)setCertViewController:(TrustCertificateViewController *)arg1 ;
@end

