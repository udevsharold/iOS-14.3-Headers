/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountFeatureDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKOSVersionRequirementRange, NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {

	PKOSVersionRequirementRange* _osVersionRange;
	NSDecimalNumber* _feePercentage;
	NSDecimalNumber* _minimumFee;
	NSDecimalNumber* _maximumFee;

}

@property (nonatomic,retain) PKOSVersionRequirementRange * osVersionRange;              //@synthesize osVersionRange=_osVersionRange - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * feePercentage;                             //@synthesize feePercentage=_feePercentage - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumFee;                                //@synthesize minimumFee=_minimumFee - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumFee;                                //@synthesize maximumFee=_maximumFee - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDecimalNumber *)maximumFee;
-(NSDecimalNumber *)feePercentage;
-(void)setFeePercentage:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1 ;
-(void)setMinimumFee:(NSDecimalNumber *)arg1 ;
-(void)setMaximumFee:(NSDecimalNumber *)arg1 ;
-(PKOSVersionRequirementRange *)osVersionRange;
-(void)setOsVersionRange:(PKOSVersionRequirementRange *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)minimumFee;
-(void)encodeWithCoder:(id)arg1 ;
@end

