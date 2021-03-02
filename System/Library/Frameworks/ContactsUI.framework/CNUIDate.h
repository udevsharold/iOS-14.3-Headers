/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDate : NSObject
+(void)initialize;
+(id)currentCalendarGMT;
+(id)gregorianCalendarGMT;
+(id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2 ;
+(id)dateByNormalizingToGMT:(id)arg1 ;
+(id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3 ;
+(BOOL)isYearlessComponents:(id)arg1 ;
+(id)yearlessGregorianComponentsFromGMTDate:(id)arg1 ;
+(id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
+(void)localeDidChange:(id)arg1 ;
@end
