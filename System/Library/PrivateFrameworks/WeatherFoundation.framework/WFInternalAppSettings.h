/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFSettings.h>

@class NSString, NSSet, WFWeatherEventsConfig, NSDictionary, NSURL;

@interface WFInternalAppSettings : NSObject <WFSettings>

@property (nonatomic,readonly) NSString * apiVersion; 
@property (nonatomic,readonly) NSSet * aqiEnabledCountryCodes; 
@property (nonatomic,readonly) NSString * apiVersionFallback; 
@property (nonatomic,readonly) unsigned long long networkFailedAttemptsLimit; 
@property (nonatomic,readonly) unsigned long long networkSwitchExpirationTimeInSeconds; 
@property (nonatomic,readonly) unsigned long long locationNumDecimalsOfPrecision; 
@property (nonatomic,readonly) WFWeatherEventsConfig * weatherEventsConfig; 
@property (nonatomic,readonly) NSDictionary * widgetRefreshPolicy; 
@property (nonatomic,readonly) NSURL * appAnalyticsEndpointUrl; 
@property (nonatomic,readonly) float dataSamplingRate; 
@property (nonatomic,readonly) float telemetrySamplingRate; 
@property (nonatomic,readonly) float locationGeocodingSamplingRate; 
@property (nonatomic,readonly) double userIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double privateUserIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double cachedGeocodeLocationExpirationTimeInterval; 
@property (nonatomic,readonly) double locationUpdateMinTimeInterval; 
@property (nonatomic,readonly) double locationUpdateMinDistance; 
@property (nonatomic,readonly) BOOL disableForecastRequestCancelation; 
@property (nonatomic,readonly) BOOL disablePriorityForecastRequestQueue; 
@property (nonatomic,readonly) BOOL loadSavedCitiesFromKVSOnly; 
@property (nonatomic,readonly) BOOL disableLimitReverseGeocoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)privateUserIdentifierResetTimeInterval;
-(BOOL)loadSavedCitiesFromKVSOnly;
-(double)cachedGeocodeLocationExpirationTimeInterval;
-(NSURL *)appAnalyticsEndpointUrl;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)userIdentifierResetTimeInterval;
-(NSString *)apiVersion;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(WFWeatherEventsConfig *)weatherEventsConfig;
-(NSString *)description;
-(float)telemetrySamplingRate;
-(BOOL)disableForecastRequestCancelation;
-(unsigned long long)networkFailedAttemptsLimit;
-(double)locationUpdateMinTimeInterval;
-(BOOL)disablePriorityForecastRequestQueue;
-(double)locationUpdateMinDistance;
-(NSSet *)aqiEnabledCountryCodes;
-(float)dataSamplingRate;
-(BOOL)disableLimitReverseGeocoding;
-(float)locationGeocodingSamplingRate;
-(NSString *)apiVersionFallback;
-(unsigned long long)locationNumDecimalsOfPrecision;
@end
