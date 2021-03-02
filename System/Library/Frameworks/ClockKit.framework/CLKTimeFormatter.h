/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLKTimeFormatterDelegate;
#import <ClockKit/ClockKit-Structs.h>
@class NSDate, NSString, _CLKTimeFormatterSubstringRange, NSHashTable, NSMutableSet, CLKClockTimerToken, CLKClockTimer, NSTimeZone;

@interface CLKTimeFormatter : NSObject {

	NSDate* _date;
	NSString* _timeText;
	NSString* _designatorText;
	NSString* _timeAndDesignatorText;
	NSString* _timeAndDesignatorTextWithoutMinutesIfZero;
	NSString* _timeSubstringToSeparatorText;
	NSString* _timeSubstringFromSeparatorText;
	_CLKTimeFormatterSubstringRange* _designatorRangeInTimeAndDesignatorText;
	_CLKTimeFormatterSubstringRange* _designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
	_CLKTimeFormatterSubstringRange* _timeRange;
	_CLKTimeFormatterSubstringRange* _separatorRangeInTimeText;
	_CLKTimeFormatterSubstringRange* _separatorRangeInTimeAndDesignatorText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeText;
	_CLKTimeFormatterSubstringRange* _lastBlinkerRangeInTimeText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeAndDesignatorText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeSubstringToSeparatorText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeSubstringFromSeparatorText;
	_CLKTimeFormatterSubstringRange* _rangeInTimeSubstringFromSecondsSeparatorText;
	NSHashTable* _observers;
	NSMutableSet* _reasonsToPause;
	CLKClockTimerToken* _secondsUpdateToken;
	CLKClockTimerToken* _minutesUpdateToken;
	BOOL _useNarrowDesignatorTextForGerman;
	CLKClockTimer* _timer;
	BOOL _suppressesDesignatorWhitespace;
	BOOL _includeSeparatorInTimeSubstringFromSeparatorText;
	BOOL _showSeconds;
	BOOL _forcesLatinNumbers;
	NSTimeZone* _timeZone;
	double _timeOffset;
	NSDate* _overrideDate;
	id<CLKTimeFormatterDelegate> _delegate;

}

@property (nonatomic,retain) NSTimeZone * timeZone;                                                                                                                     //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) double timeOffset;                                                                                                                         //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) BOOL suppressesDesignatorWhitespace;                                                                                                       //@synthesize suppressesDesignatorWhitespace=_suppressesDesignatorWhitespace - In the implementation block
@property (nonatomic,retain) NSDate * overrideDate;                                                                                                                     //@synthesize overrideDate=_overrideDate - In the implementation block
@property (nonatomic,readonly) BOOL reportingLiveTime; 
@property (nonatomic,readonly) NSString * timeText; 
@property (nonatomic,readonly) NSString * designatorText; 
@property (nonatomic,readonly) NSString * timeAndDesignatorText; 
@property (nonatomic,readonly) NSString * timeAndDesignatorTextWithoutMinutesIfZero; 
@property (nonatomic,readonly) NSString * timeSubstringToSeparatorText; 
@property (nonatomic,readonly) NSString * timeSubstringFromSeparatorText; 
@property (assign,nonatomic) BOOL includeSeparatorInTimeSubstringFromSeparatorText;                                                                                     //@synthesize includeSeparatorInTimeSubstringFromSeparatorText=_includeSeparatorInTimeSubstringFromSeparatorText - In the implementation block
@property (nonatomic,readonly) NSRange designatorRangeInTimeAndDesignatorText; 
@property (nonatomic,readonly) NSRange designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero; 
@property (nonatomic,readonly) BOOL timeAndDesignatorTextHasDesignator; 
@property (nonatomic,readonly) BOOL timeAndDesignatorTextStartsWithDesignator; 
@property (nonatomic,readonly) NSRange separatorRangeInTimeText; 
@property (nonatomic,readonly) NSRange separatorRangeInTimeAndDesignatorText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeText; 
@property (nonatomic,readonly) NSRange lastBlinkerRangeInTimeText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeAndDesignatorText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeSubstringToSeparatorText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeSubstringFromSeparatorText; 
@property (nonatomic,readonly) NSRange rangeInTimeSubstringFromSecondsSeparatorText; 
@property (assign,nonatomic) BOOL showSeconds;                                                                                                                          //@synthesize showSeconds=_showSeconds - In the implementation block
@property (nonatomic,readonly) BOOL forcesLatinNumbers;                                                                                                                 //@synthesize forcesLatinNumbers=_forcesLatinNumbers - In the implementation block
@property (assign,nonatomic,__weak) id<CLKTimeFormatterDelegate> delegate;                                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setUseNarrowDesignatorTextForGerman:,getter=_useNarrowDesignatorTextForGerman,nonatomic) BOOL _useNarrowDesignatorTextForGerman; 
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 forReason:(id)arg2 ;
-(void)dealloc;
-(double)timeOffset;
-(void)addObserver:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(NSDate *)overrideDate;
-(void)_handleSignificantTimeChange;
-(void)setDelegate:(id<CLKTimeFormatterDelegate>)arg1 ;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(id<CLKTimeFormatterDelegate>)delegate;
-(void)_setUseNarrowDesignatorTextForGerman:(BOOL)arg1 ;
-(NSString *)timeText;
-(NSString *)timeAndDesignatorTextWithoutMinutesIfZero;
-(NSRange)designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
-(NSString *)timeAndDesignatorText;
-(NSRange)designatorRangeInTimeAndDesignatorText;
-(void)setSuppressesDesignatorWhitespace:(BOOL)arg1 ;
-(void)setShowSeconds:(BOOL)arg1 ;
-(NSString *)designatorText;
-(BOOL)timeAndDesignatorTextHasDesignator;
-(BOOL)timeAndDesignatorTextStartsWithDesignator;
-(id)initWithForcesLatinNumbers:(BOOL)arg1 ;
-(NSString *)timeSubstringToSeparatorText;
-(void)setIncludeSeparatorInTimeSubstringFromSeparatorText:(BOOL)arg1 ;
-(NSString *)timeSubstringFromSeparatorText;
-(NSRange)separatorRangeInTimeText;
-(BOOL)showSeconds;
-(id)initWithForcesLatinNumbers:(BOOL)arg1 clockTimer:(id)arg2 ;
-(void)_invalidateDate:(id)arg1 ;
-(void)_startOrStopUpdatesIfNecessary;
-(void)_invalidateText;
-(id)_designatorRangeInTimeAndDesignatorText;
-(id)_timeAndDesignatorFormatter;
-(NSRange)separatorRangeInTimeAndDesignatorText;
-(id)_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
-(id)_separatorRangeInTimeText;
-(id)_separatorRangeInTimeAndDesignatorText;
-(id)_blinkerRangeInTimeText;
-(id)_lastBlinkerRangeInTimeText;
-(id)_blinkerRangeInTimeAndDesignatorText;
-(id)_blinkerRangeInTimeSubstringToSeparatorText;
-(id)_blinkerRangeInTimeSubstringFromSeparatorText;
-(id)_rangeInTimeSubstringFromSecondsSeparatorText;
-(id)_designatorRangeInText:(id)arg1 ;
-(void)_notifyReportingLiveTimeDidChange;
-(BOOL)reportingLiveTime;
-(void)_stopMinuteUpdates:(BOOL)arg1 ;
-(void)_stopSecondsUpdates:(BOOL)arg1 ;
-(void)_notifyTextDidChange;
-(BOOL)_useNarrowDesignatorTextForGerman;
-(NSRange)blinkerRangeInTimeText;
-(NSRange)lastBlinkerRangeInTimeText;
-(NSRange)blinkerRangeInTimeAndDesignatorText;
-(NSRange)blinkerRangeInTimeSubstringToSeparatorText;
-(NSRange)blinkerRangeInTimeSubstringFromSeparatorText;
-(NSRange)rangeInTimeSubstringFromSecondsSeparatorText;
-(BOOL)suppressesDesignatorWhitespace;
-(BOOL)includeSeparatorInTimeSubstringFromSeparatorText;
-(BOOL)forcesLatinNumbers;
@end
