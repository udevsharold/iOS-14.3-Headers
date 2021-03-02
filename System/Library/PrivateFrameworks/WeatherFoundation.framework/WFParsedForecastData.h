/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, WFAirQualityConditions, WFWeatherConditions, NSArray, WFNextHourPrecipitation;

@interface WFParsedForecastData : NSObject {

	NSData* _rawData;
	WFAirQualityConditions* _airQualityObservations;
	WFWeatherConditions* _currentConditions;
	NSArray* _lastTwentyFourHoursOfObservations;
	NSArray* _dailyForecasts;
	NSArray* _hourlyForecasts;
	NSArray* _pollenForecasts;
	NSArray* _changeForecasts;
	NSArray* _severeWeatherEvents;
	WFNextHourPrecipitation* _nextHourPrecipitation;

}

@property (nonatomic,retain) NSData * rawData;                                             //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityObservations;              //@synthesize airQualityObservations=_airQualityObservations - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * currentConditions;                      //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) NSArray * lastTwentyFourHoursOfObservations;                  //@synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecasts;                                     //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * pollenForecasts;                                    //@synthesize pollenForecasts=_pollenForecasts - In the implementation block
@property (nonatomic,retain) NSArray * changeForecasts;                                    //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,retain) NSArray * severeWeatherEvents;                                //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,retain) WFNextHourPrecipitation * nextHourPrecipitation;              //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
-(NSArray *)changeForecasts;
-(NSData *)rawData;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(NSArray *)severeWeatherEvents;
-(NSArray *)pollenForecasts;
-(NSArray *)lastTwentyFourHoursOfObservations;
-(void)setPollenForecasts:(NSArray *)arg1 ;
-(WFWeatherConditions *)currentConditions;
-(void)setAirQualityObservations:(WFAirQualityConditions *)arg1 ;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
-(id)objectForForecastType:(unsigned long long)arg1 ;
-(void)setLastTwentyFourHoursOfObservations:(NSArray *)arg1 ;
-(void)setCurrentConditions:(WFWeatherConditions *)arg1 ;
-(NSArray *)hourlyForecasts;
-(WFAirQualityConditions *)airQualityObservations;
-(NSArray *)dailyForecasts;
@end
