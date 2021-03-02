/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSNumber, NSString, NSDate;

@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;
	unsigned long long _segment;

}

@property (copy,readonly) NSNumber * appAdamID; 
@property (copy,readonly) NSNumber * appVersion; 
@property (readonly) BOOL autoRenewEnabled; 
@property (copy,readonly) NSString * chargeCountryCode; 
@property (copy,readonly) NSString * chargeCurrencyCode; 
@property (copy,readonly) NSNumber * chargeStoreFrontID; 
@property (copy,readonly) NSNumber * entitlementSourceAdamID; 
@property (copy,readonly) NSDate * expiryDate; 
@property (copy,readonly) NSNumber * familyID; 
@property (copy,readonly) NSNumber * featureAccessTypeID; 
@property (copy,readonly) NSNumber * freeTrialPeriodID; 
@property (copy,readonly) NSNumber * inAppAdamID; 
@property (copy,readonly) NSString * inAppVersion; 
@property (copy,readonly) NSNumber * initialPurchaseTimestamp; 
@property (readonly) BOOL isTrialPeriod; 
@property (readonly) BOOL isOfferPeriod; 
@property (readonly) BOOL isPurchaser; 
@property (getter=isNewsAppPurchase,readonly) BOOL newsAppPurchase; 
@property (readonly) BOOL isInGracePeriod; 
@property (copy,readonly) NSString * offerID; 
@property (copy,readonly) NSNumber * originalPurchaseDownloadID; 
@property (copy,readonly) NSString * poolType; 
@property (copy,readonly) NSNumber * promoScenarioID; 
@property (copy,readonly) NSNumber * purchasabilityType; 
@property (copy,readonly) NSNumber * purchaseDownloadID; 
@property (readonly) unsigned long long segment; 
@property (copy,readonly) NSNumber * serviceBeginsTimestamp; 
@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSNumber * subscriptionBundleID; 
@property (copy,readonly) NSNumber * quantity; 
@property (copy,readonly) NSString * vendorAdHocOfferID; 
@property (copy,readonly) NSString * vendorID; 
+(BOOL)supportsSecureCoding;
-(id)servicesBundlePurchaseID;
-(id)description;
-(NSString *)vendorID;
-(NSDate *)expiryDate;
-(NSNumber *)appVersion;
-(BOOL)isPurchaser;
-(NSNumber *)familyID;
-(NSNumber *)quantity;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)poolType;
-(id)_valueForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)_dateFromDateString:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3 ;
-(NSNumber *)chargeStoreFrontID;
-(NSNumber *)originalPurchaseDownloadID;
-(NSNumber *)purchaseDownloadID;
-(NSString *)chargeCountryCode;
-(NSNumber *)purchasabilityType;
-(NSDate *)startDate;
-(NSString *)offerID;
-(NSNumber *)appAdamID;
-(NSString *)inAppVersion;
-(BOOL)autoRenewEnabled;
-(NSNumber *)initialPurchaseTimestamp;
-(NSNumber *)serviceBeginsTimestamp;
-(NSNumber *)promoScenarioID;
-(BOOL)isOfferPeriod;
-(NSNumber *)entitlementSourceAdamID;
-(NSNumber *)featureAccessTypeID;
-(BOOL)isTrialPeriod;
-(NSNumber *)freeTrialPeriodID;
-(NSNumber *)subscriptionBundleID;
-(NSString *)vendorAdHocOfferID;
-(BOOL)isInGracePeriod;
-(unsigned long long)segment;
-(BOOL)isNewsAppPurchase;
-(NSNumber *)inAppAdamID;
-(NSString *)chargeCurrencyCode;
-(void)encodeWithCoder:(id)arg1 ;
@end
