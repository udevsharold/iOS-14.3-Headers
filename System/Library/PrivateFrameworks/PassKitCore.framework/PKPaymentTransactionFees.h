/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	NSSet* _fees;

}

@property (nonatomic,retain) NSSet * fees;              //@synthesize fees=_fees - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)_feesSetFromJsonString:(id)arg1 ;
-(NSSet *)fees;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)jsonString;
-(unsigned long long)itemType;
-(id)description;
-(void)setFees:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)primaryIdentifier;
-(id)_feeItemsFromRecord:(id)arg1 ;
-(id)initWithFeeItems:(id)arg1 ;
-(BOOL)isEqualToFees:(id)arg1 ;
-(id)jsonArrayRepresentation;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
