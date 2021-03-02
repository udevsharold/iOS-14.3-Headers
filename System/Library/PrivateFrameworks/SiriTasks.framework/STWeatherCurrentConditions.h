/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {

	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _highTemperature;
	NSNumber* _lowTemperature;

}
+(BOOL)supportsSecureCoding;
-(long long)conditionCode;
-(id)temperature;
-(id)initWithCoder:(id)arg1 ;
-(id)highTemperature;
-(id)lowTemperature;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 ;
@end
