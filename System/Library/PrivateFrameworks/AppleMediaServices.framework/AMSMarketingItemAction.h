/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, AMSBuyParams, NSString, NSNumber, NSArray, NSURL;

@interface AMSMarketingItemAction : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,retain) NSDictionary * rawValues;                      //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) AMSBuyParams * buyParams; 
@property (nonatomic,readonly) NSString * callToActionLabel; 
@property (nonatomic,readonly) NSString * disclaimerText; 
@property (nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,readonly) BOOL isFamily; 
@property (nonatomic,readonly) BOOL isRecommended; 
@property (nonatomic,readonly) NSString * offerID; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * priceForDisplay; 
@property (nonatomic,readonly) NSNumber * priceDiff; 
@property (nonatomic,readonly) NSString * priceDiffForDisplay; 
@property (nonatomic,readonly) NSString * valuePropDetail; 
@property (nonatomic,readonly) NSString * valuePropInfo; 
@property (nonatomic,readonly) NSArray * serviceComponents; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSURL * url; 
-(NSString *)valuePropDetail;
-(id)freeTrialPeriod;
-(NSNumber *)price;
-(id)priceFormatted;
-(id)_servicesData;
-(NSString *)callToActionLabel;
-(id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2 ;
-(id)introOfferPriceForDisplay;
-(NSDictionary *)rawValues;
-(BOOL)isRecommended;
-(AMSBuyParams *)buyParams;
-(NSString *)valuePropInfo;
-(NSString *)priceDiffForDisplay;
-(id)_serviceNames;
-(id)introOfferPeriod;
-(NSString *)priceForDisplay;
-(BOOL)isYearly;
-(id)dismissLabel;
-(NSNumber *)priceDiff;
-(id)description;
-(NSString *)type;
-(id)priceString;
-(NSArray *)serviceComponents;
-(NSString *)offerID;
-(BOOL)isFamily;
-(BOOL)isDefault;
-(id)introOfferPrice;
-(NSString *)disclaimerText;
-(id)name;
-(id)initWithDictionary:(id)arg1 ;
-(id)recurringSubscriptionPeriod;
-(void)setRawValues:(NSDictionary *)arg1 ;
-(id)inAppID;
-(NSURL *)url;
@end
