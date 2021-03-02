/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKExtensionBaseContext.h>
#import <libobjc.A.dylib/PKExtensionHostContextProtocol.h>

@protocol PKPaymentAuthorizationHostProtocol, OS_dispatch_group;
@class NSObject, NSString;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol> {

	id<PKPaymentAuthorizationHostProtocol> _delegate;
	NSObject*<OS_dispatch_group> _delayCallbacksGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> delayCallbacksGroup;                    //@synthesize delayCallbacksGroup=_delayCallbacksGroup - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)endDelayingCallbacks;
-(NSObject*<OS_dispatch_group>)delayCallbacksGroup;
-(void)setDelayCallbacksGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(id)vendorContext;
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1 ;
-(void)authorizationDidAuthorizeContext;
-(void)beginDelayingCallbacks;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1 ;
@end
