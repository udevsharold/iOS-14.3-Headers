/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCIntroductoryOffer : NSObject {

	int _offerType;
	unsigned long long _numOfPeriods;
	NSString* _priceFormatted;
	NSString* _subscriptionPeriodInISO_8601;

}

@property (nonatomic,copy) NSString * priceFormatted;                            //@synthesize priceFormatted=_priceFormatted - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPeriodInISO_8601;              //@synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601 - In the implementation block
@property (assign,nonatomic) int offerType;                                      //@synthesize offerType=_offerType - In the implementation block
@property (assign,nonatomic) unsigned long long numOfPeriods;                    //@synthesize numOfPeriods=_numOfPeriods - In the implementation block
-(unsigned long long)numOfPeriods;
-(int)offerType;
-(void)setNumOfPeriods:(unsigned long long)arg1 ;
-(NSString *)priceFormatted;
-(NSString *)subscriptionPeriodInISO_8601;
-(void)setSubscriptionPeriodInISO_8601:(NSString *)arg1 ;
-(void)setPriceFormatted:(NSString *)arg1 ;
-(void)setOfferType:(int)arg1 ;
-(id)initWithOfferType:(int)arg1 priceFormatted:(id)arg2 recurringSubscriptionPeriod:(id)arg3 numOfPeriods:(unsigned long long)arg4 ;
@end

