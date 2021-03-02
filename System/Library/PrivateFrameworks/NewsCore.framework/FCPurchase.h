/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, FCIntroductoryOffer, SKMutablePayment;

@interface FCPurchase : NSObject {

	NSNumber* _appAdamID;
	NSString* _purchaseID;
	NSString* _subscriptionPriceFormatted;
	NSString* _subscriptionPeriodInISO_8601;
	NSString* _offerName;
	NSNumber* _storeExternalVersion;
	NSString* _bundleID;
	NSNumber* _price;
	FCIntroductoryOffer* _introductoryOffer;
	SKMutablePayment* _payment;

}

@property (nonatomic,readonly) NSNumber * appAdamID;                                           //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,readonly) NSString * purchaseID;                                          //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,readonly) NSString * subscriptionPriceFormatted;                          //@synthesize subscriptionPriceFormatted=_subscriptionPriceFormatted - In the implementation block
@property (nonatomic,readonly) NSString * subscriptionPeriodInISO_8601;                        //@synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601 - In the implementation block
@property (nonatomic,readonly) NSString * offerName;                                           //@synthesize offerName=_offerName - In the implementation block
@property (nonatomic,readonly) NSNumber * storeExternalVersion;                                //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSNumber * price;                                               //@synthesize price=_price - In the implementation block
@property (getter=isFreeTrialEligible,nonatomic,readonly) BOOL freeTrialEligible; 
@property (nonatomic,readonly) FCIntroductoryOffer * introductoryOffer;                        //@synthesize introductoryOffer=_introductoryOffer - In the implementation block
@property (nonatomic,readonly) SKMutablePayment * payment;                                     //@synthesize payment=_payment - In the implementation block
-(NSNumber *)price;
-(NSString *)subscriptionPeriodInISO_8601;
-(NSString *)purchaseID;
-(NSString *)bundleID;
-(NSString *)subscriptionPriceFormatted;
-(NSNumber *)appAdamID;
-(id)initWithPurchaseID:(id)arg1 appAdamID:(id)arg2 subscriptionPriceFormatted:(id)arg3 subscriptionPeriodInISO_8601:(id)arg4 offerName:(id)arg5 storeExternalVersion:(id)arg6 bundleID:(id)arg7 price:(id)arg8 introOffer:(id)arg9 payment:(id)arg10 ;
-(NSString *)offerName;
-(SKMutablePayment *)payment;
-(BOOL)isFreeTrialEligible;
-(NSNumber *)storeExternalVersion;
-(FCIntroductoryOffer *)introductoryOffer;
@end
