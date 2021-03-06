/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSError;

@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding> {

	NSData* _cardData;
	NSURL* _brokerURL;
	NSURL* _paymentServicesURL;
	NSError* _error;

}

@property (retain) NSData * cardData;                       //@synthesize cardData=_cardData - In the implementation block
@property (retain) NSURL * brokerURL;                       //@synthesize brokerURL=_brokerURL - In the implementation block
@property (retain) NSURL * paymentServicesURL;              //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (retain) NSError * error;                         //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)cardData;
-(id)description;
-(NSURL *)brokerURL;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithCardData:(id)arg1 brokerURL:(id)arg2 paymentServicesURL:(id)arg3 error:(id)arg4 ;
-(void)setCardData:(NSData *)arg1 ;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(NSURL *)paymentServicesURL;
-(void)encodeWithCoder:(id)arg1 ;
@end

