/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class SCLScheduleIntervalFormatter, NSListFormatter, NSLocale;

@interface SCLTimeIntervalsFormatter : NSFormatter {

	BOOL _prefersHoursOnly;
	SCLScheduleIntervalFormatter* _intervalFormatter;
	NSListFormatter* _listFormatter;

}

@property (nonatomic,readonly) SCLScheduleIntervalFormatter * intervalFormatter;              //@synthesize intervalFormatter=_intervalFormatter - In the implementation block
@property (nonatomic,readonly) NSListFormatter * listFormatter;                               //@synthesize listFormatter=_listFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL prefersHoursOnly;                                           //@synthesize prefersHoursOnly=_prefersHoursOnly - In the implementation block
@property (assign,nonatomic) unsigned long long intervalFormattingStyle; 
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setPrefersHoursOnly:(BOOL)arg1 ;
-(id)stringFromTimeIntervals:(id)arg1 ;
-(NSListFormatter *)listFormatter;
-(SCLScheduleIntervalFormatter *)intervalFormatter;
-(BOOL)prefersHoursOnly;
-(unsigned long long)intervalFormattingStyle;
-(void)setIntervalFormattingStyle:(unsigned long long)arg1 ;
@end
