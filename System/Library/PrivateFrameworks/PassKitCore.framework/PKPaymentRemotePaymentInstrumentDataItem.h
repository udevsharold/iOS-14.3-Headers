/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKRemoteDevice, PKRemotePaymentInstrument, PKPaymentApplication, CNContact;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKRemoteDevice * remoteDevice; 
@property (nonatomic,readonly) PKRemotePaymentInstrument * remotePaymentInstrument; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
+(long long)dataType;
-(CNContact *)billingAddress;
-(BOOL)isValidWithError:(id*)arg1 ;
-(unsigned long long)peerPaymentAccountState;
-(PKPaymentApplication *)paymentApplication;
-(PKRemoteDevice *)remoteDevice;
-(id)paymentContactFormatErrors;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(BOOL)requiresBillingAddress;
-(id)peerPaymentAccountBalance;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(id)errors;
@end

