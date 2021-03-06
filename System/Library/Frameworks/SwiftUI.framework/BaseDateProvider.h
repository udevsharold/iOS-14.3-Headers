/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCalendar, NSLocale, NSTimeZone;

@interface BaseDateProvider : NSObject {

	NSCalendar* _calendar;
	NSLocale* _locale;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                  //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
-(NSLocale *)locale;
-(id)updateInterval;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(BOOL)arg2 designatorExists:(BOOL*)arg3 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)_endSession;
-(void)_startSessionWithDate:(id)arg1 ;
-(long long)_updateFrequency;
-(id)_sessionTextForIndex:(long long)arg1 ;
-(id)initWithCalendar:(id)arg1 locale:(id)arg2 timeZone:(id)arg3 ;
-(id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1 ;
-(id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(BOOL*)arg2 ;
-(id)formattedString;
@end

