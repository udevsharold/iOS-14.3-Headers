/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding> {

	NSData* _paymentInformation;

}

@property (nonatomic,copy) NSData * paymentInformation;              //@synthesize paymentInformation=_paymentInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)paymentInformation;
-(id)initWithPaymentInformation:(id)arg1 ;
-(void)setPaymentInformation:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

