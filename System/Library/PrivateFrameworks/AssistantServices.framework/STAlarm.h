/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying> {

	BOOL _enabled;
	long long _daysOfWeek;
	long long _hourOfDay;
	long long _minuteOfHour;
	NSString* _label;
	BOOL _sleepAlarm;
	BOOL _overrideAlarm;
	long long _bedtimeHour;
	long long _bedtimeMinute;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long daysOfWeek;                                   //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) long long hourOfDay;                                    //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) long long minuteOfHour;                                 //@synthesize minuteOfHour=_minuteOfHour - In the implementation block
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSleepAlarm,nonatomic) BOOL sleepAlarm;                    //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,getter=isOverrideAlarm,nonatomic) BOOL overrideAlarm;              //@synthesize overrideAlarm=_overrideAlarm - In the implementation block
@property (assign,nonatomic) long long bedtimeHour;                                  //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) long long bedtimeMinute;                                //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHourOfDay:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(long long)minuteOfHour;
-(long long)hourOfDay;
-(long long)bedtimeMinute;
-(void)setMinuteOfHour:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBedtimeMinute:(long long)arg1 ;
-(long long)bedtimeHour;
-(void)setSleepAlarm:(BOOL)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(long long)daysOfWeek;
-(void)setDaysOfWeek:(long long)arg1 ;
-(BOOL)isOverrideAlarm;
-(void)setOverrideAlarm:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)label;
-(BOOL)isSleepAlarm;
-(void)setBedtimeHour:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

