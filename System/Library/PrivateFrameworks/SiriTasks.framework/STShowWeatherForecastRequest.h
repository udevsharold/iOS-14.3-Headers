/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherCurrentConditions, NSArray, STCity, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest {

	STWeatherCurrentConditions* _currentConditions;
	NSArray* _hourlyForecasts;
	STCity* _city;
	STWeatherUnits* _units;
	long long _forecastType;

}
+(BOOL)supportsSecureCoding;
-(id)units;
-(id)city;
-(id)currentConditions;
-(long long)forecastType;
-(id)initWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)hourlyForecasts;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(long long)arg5 ;
@end
