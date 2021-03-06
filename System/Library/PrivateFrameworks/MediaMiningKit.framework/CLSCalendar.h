/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@interface CLSCalendar : NSObject
+(void)initialize;
+(long long)dayOfWeekFromDate:(id)arg1 ;
+(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
+(id)componentsFromDate:(id)arg1 inTimeZone:(id)arg2 ;
+(BOOL)isLastWeekOfMonthForLocalDate:(id)arg1 ;
+(BOOL)currentLocaleSupportsSeasons;
+(id)dateFromComponents:(id)arg1 inTimeZone:(id)arg2 ;
+(long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(unsigned long long)arg3 ;
+(id)localDateFromUniversalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)s_seasonCountryCodesDictionary;
+(BOOL)isFirstMonthOfSeasonForLocalDate:(id)arg1 ;
+(BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1 ;
+(id)dateByAddingYears:(long long)arg1 toDate:(id)arg2 ;
+(id)currentLocalDate;
+(id)northernMeteorologicalSeasonNameForDateComponents:(id)arg1 ;
+(id)dateByAddingHours:(long long)arg1 toDate:(id)arg2 ;
+(BOOL)isFirstTenDaysOfSeasonForLocalDate:(id)arg1 ;
+(id)localDateFromUniversalDate:(id)arg1 atLocation:(id)arg2 ;
+(long long)monthFromDate:(id)arg1 ;
+(long long)hourFromDate:(id)arg1 ;
+(id)endOfDayForDate:(id)arg1 ;
+(id)universalDateFromLocalDate:(id)arg1 ;
+(BOOL)isDateValid:(id)arg1 ;
+(id)startOfWeekForDate:(id)arg1 ;
+(BOOL)isLastMonthOfSeasonForLocalDate:(id)arg1 ;
+(id)seasonNameForLocalDate:(id)arg1 locale:(id)arg2 ;
+(BOOL)isMiddleMonthOfSeasonForLocalDate:(id)arg1 ;
+(id)startOfDayForDate:(id)arg1 ;
+(id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2 ;
+(id)universalDateFromLocalDate:(id)arg1 inTimeZone:(id)arg2 ;
+(id)seasonNameForDateComponents:(id)arg1 locale:(id)arg2 ;
+(id)dateComponentsWithUTCDate:(id)arg1 localDate:(id)arg2 ;
+(long long)yearForWeekOfYearFromDate:(id)arg1 ;
+(id)universalDateFromLocalDate:(id)arg1 atLocation:(id)arg2 ;
+(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
+(BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1 ;
+(id)southernMeteorologicalSeasonNameForDateComponents:(id)arg1 ;
+(BOOL)isSecondHalfOfSeasonForLocalDate:(id)arg1 ;
+(long long)weekOfMonthFromDate:(id)arg1 ;
+(id)dateFromComponents:(unsigned long long)arg1 ofDate:(id)arg2 ;
+(long long)yearFromDate:(id)arg1 ;
+(id)localDateFromUniversalDate:(id)arg1 ;
+(id)validDateForDate:(id)arg1 ;
+(long long)weekOfYearFromDate:(id)arg1 ;
+(id)endOfWeekForDate:(id)arg1 ;
+(id)components:(unsigned long long)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(unsigned long long)arg4 ;
+(BOOL)isLastTwoWeeksOfMonthForLocalDate:(id)arg1 ;
+(long long)dayFromDate:(id)arg1 ;
+(BOOL)supportsSeasonsWithLocale:(id)arg1 ;
+(id)dateByAddingDays:(long long)arg1 toDate:(id)arg2 ;
+(id)dateComponentsWithLocalDate:(id)arg1 ;
+(id)dateBySettingYear:(long long)arg1 ofDate:(id)arg2 ;
+(BOOL)isFirstTwoWeeksOfMonthForLocalDate:(id)arg1 ;
+(id)localStartSeasonDateForLocalDate:(id)arg1 ;
+(id)dateByAddingWeeksOfYear:(long long)arg1 toDate:(id)arg2 ;
@end

