/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKServiceProviderPurchaseData.h>

@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData {

	BOOL _requiresInteraction;
	unsigned long long _status;

}

@property (assign,nonatomic) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL requiresInteraction;               //@synthesize requiresInteraction=_requiresInteraction - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)status;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)requiresInteraction;
-(void)setStatus:(unsigned long long)arg1 ;
-(BOOL)isEqualToPKPeerPaymentPurchaseData:(id)arg1 ;
-(void)setRequiresInteraction:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

