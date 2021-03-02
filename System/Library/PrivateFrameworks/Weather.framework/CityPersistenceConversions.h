/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CityPersistenceConversions : NSObject
+(id)weatherDetailsDictionaryFromCity:(id)arg1 ;
+(BOOL)cityDictionaryHasValidCoordinates:(id)arg1 ;
+(void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2 ;
+(void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2 ;
+(id)cityFromDictionary:(id)arg1 ;
+(id)cityFromCloudDictionary:(id)arg1 ;
+(id)scaleCategoryFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryRepresentationOfScaleCategory:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfALCity:(id)arg1 ;
+(id)hourlyForecastDictionariesFromCity:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfCity:(id)arg1 ;
+(id)dayForecastDictionariesFromCity:(id)arg1 ;
+(BOOL)isCityValid:(id)arg1 ;
+(id)dictionaryRepresentationOfTemperature:(id)arg1 ;
+(id)dictionaryRepresentationOfCity:(id)arg1 ;
+(id)temperatureFromDictionaryRepresentation:(id)arg1 ;
+(id)cityFromALCity:(id)arg1 ;
@end
