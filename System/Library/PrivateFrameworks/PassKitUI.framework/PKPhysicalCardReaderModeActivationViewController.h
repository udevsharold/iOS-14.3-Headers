/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKNFCTagReaderSessionDelegate.h>

@class PKAccountService, PKAccount, PKPhysicalCard, PKPaymentPass, PKPhysicalCardActivationAnimationView, PKPaymentSessionHandle, PKNFCTagReaderSession, PKBusinessChatController, NSString;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {

	PKAccountService* _accountService;
	PKAccount* _account;
	PKPhysicalCard* _physicalCard;
	PKPaymentPass* _paymentPass;
	unsigned long long _feature;
	PKPhysicalCardActivationAnimationView* _animationView;
	BOOL _invalidated;
	BOOL _deviceSupportsReaderMode;
	PKPaymentSessionHandle* _sessionHandle;
	PKNFCTagReaderSession* _readerSession;
	PKBusinessChatController* _businessChatController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1 ;
-(void)_invalidate;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_dismiss;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_startTagReaderSession;
-(void)_stopTagReaderSession;
-(void)_presentActivationWithActivationCode:(id)arg1 ;
-(void)viewDidLoad;
@end
