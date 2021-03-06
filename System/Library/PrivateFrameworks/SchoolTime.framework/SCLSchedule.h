/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SCLSchedule : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (nonatomic,readonly) NSArray * uniformTimeIntervals; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) long long scheduledDays; 
@property (nonatomic,readonly) NSArray * recurrences; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)recurrences;
-(void)encodeWithCoder:(id)arg1 ;
-(id)recurrencesForDay:(long long)arg1 ;
-(BOOL)isScheduledForDay:(long long)arg1 ;
-(id)timeIntervalsForDay:(long long)arg1 ;
-(long long)scheduledDays;
-(id)startTimeForDay:(long long)arg1 ;
-(id)endTimeForDay:(long long)arg1 ;
-(NSArray *)uniformTimeIntervals;
@end

