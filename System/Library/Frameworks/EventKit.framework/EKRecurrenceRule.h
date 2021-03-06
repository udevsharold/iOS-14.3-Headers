/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKRecurrenceHelper, NSDateComponents, NSString, NSDate, EKRecurrenceEnd, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	EKRecurrenceHelper* _recurrenceHelper;
	BOOL _shouldPinMonthDays;
	BOOL _usesEndDate;

}

@property (nonatomic,readonly) BOOL shouldPinMonthDays;                             //@synthesize shouldPinMonthDays=_shouldPinMonthDays - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dateComponents; 
@property (readonly) BOOL usesEndDate;                                              //@synthesize usesEndDate=_usesEndDate - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,readonly) BOOL dirtyStateMayAffectExceptionDates; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd; 
@property (nonatomic,readonly) long long frequency; 
@property (nonatomic,readonly) long long interval; 
@property (nonatomic,readonly) long long firstDayOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,readonly) NSArray * setPositions; 
+(id)knownIdentityKeysForComparison;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3 ;
+(long long)_ekWeekdayFromCalDayOfWeek:(int)arg1 ;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
+(long long)daysTypeForDayArray:(id)arg1 ;
+(Class)frozenClass;
+(id)iCalendarValueFromRecurrenceType:(long long)arg1 ;
+(id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3 ;
+(id)knownSingleValueKeysForComparison;
+(int)_calDayOfWeekFromEKWeekday:(long long)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setSpecifier:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 ;
-(NSArray *)setPositions;
-(id)endDate;
-(void)rollback;
-(NSArray *)daysOfTheYear;
-(NSDateComponents *)dateComponents;
-(NSArray *)daysOfTheMonth;
-(long long)frequency;
-(BOOL)isEqualToRecurrenceRule:(id)arg1 ;
-(void)setFirstDayOfTheWeekRaw:(int)arg1 ;
-(BOOL)isWeekendRule;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(id)specifier;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSArray *)weeksOfTheYear;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(NSString *)UUID;
-(NSArray *)daysOfTheWeek;
-(void)reset;
-(BOOL)isSimpleRule;
-(void)setSetPositions:(NSArray *)arg1 ;
-(BOOL)isAnyDayRule;
-(BOOL)isWeekdayRule;
-(id)_recurrenceHelper;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(NSDate *)cachedEndDate;
-(id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(void)setFrequency:(long long)arg1 ;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(BOOL)usesEndDate;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 isConcise:(BOOL)arg2 ;
-(EKRecurrenceEnd *)recurrenceEnd;
-(id)description;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(NSString *)calendarIdentifier;
-(BOOL)shouldPinMonthDays;
-(unsigned long long)count;
-(void)_updateSpecifierIfNeeded;
-(BOOL)dirtyStateMayAffectExceptionDates;
-(long long)firstDayOfTheWeek;
-(int)firstDayOfTheWeekRaw;
-(BOOL)mayOccurAfterDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3 ;
@end

