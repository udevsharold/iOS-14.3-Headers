/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSDate, NSDateComponents, NSData, NSLocale, NSString;

@interface WFForecastRequest : WFTask {

	BOOL _attachRawAPIData;
	WFLocation* _location;
	NSDate* _onDate;
	/*^block*/id _completionHandler;
	NSDateComponents* _date;
	unsigned long long _forecastType;
	NSData* _rawAPIData;
	NSLocale* _locale;
	NSString* _trackingParameter;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDateComponents * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) WFLocation * location;                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long forecastType;              //@synthesize forecastType=_forecastType - In the implementation block
@property (assign,nonatomic) BOOL attachRawAPIData;                        //@synthesize attachRawAPIData=_attachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * trackingParameter;                 //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (nonatomic,readonly) NSDate * onDate;                            //@synthesize onDate=_onDate - In the implementation block
+(id)forecastRequestForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)forecastRequestForLocation:(id)arg1 onDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 ;
-(NSData *)rawAPIData;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(NSLocale *)locale;
-(void)setForecastType:(unsigned long long)arg1 ;
-(NSDateComponents *)date;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSDate *)onDate;
-(void)setLocale:(NSLocale *)arg1 ;
-(unsigned long long)forecastType;
-(void)cleanup;
-(WFLocation *)location;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
-(id)description;
-(id)initWithLocation:(id)arg1 onDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)trackingParameter;
-(void)setDate:(NSDateComponents *)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)attachRawAPIData;
-(void)handleError:(id)arg1 forResponseIdentifier:(id)arg2 ;
-(void)setRawAPIData:(NSData *)arg1 ;
-(void)handleCancellation;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

