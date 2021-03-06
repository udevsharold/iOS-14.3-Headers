/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPSleepScheduleDayOccurrence.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSDateComponents, HKSPAlarmConfiguration, NSDate, NSSet, NSString;

@interface HKSPMutableSleepScheduleDayOccurrence : HKSPSleepScheduleDayOccurrence <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (nonatomic,copy) NSDateComponents * bedtimeComponents; 
@property (nonatomic,copy) NSDateComponents * wakeUpComponents; 
@property (nonatomic,retain) HKSPAlarmConfiguration * alarmConfiguration; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(id)mutableCopy;
-(id)initWithCoder:(id)arg1 ;
-(NSDateComponents *)bedtimeComponents;
-(HKSPAlarmConfiguration *)alarmConfiguration;
-(void)setBedtimeComponents:(NSDateComponents *)arg1 ;
-(void)setWakeUpComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)wakeUpComponents;
-(void)setAlarmConfiguration:(HKSPAlarmConfiguration *)arg1 ;
-(id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1 ;
-(BOOL)hasChangeAffectingScheduling;
-(void)testTurnOnAlarm;
-(void)testTurnOffAlarm;
-(void)encodeWithCoder:(id)arg1 ;
@end

