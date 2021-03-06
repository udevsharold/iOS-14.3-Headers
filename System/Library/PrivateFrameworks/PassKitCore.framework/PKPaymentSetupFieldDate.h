/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSDateFormatter, NSString, NSCalendar, NSLocale, NSDate;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {

	NSDateFormatter* _displayDateFormatter;
	BOOL _showsDay;
	BOOL _showsMonth;
	BOOL _showsYear;
	NSString* _submissionFormat;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSDate* _defaultDate;

}

@property (assign,nonatomic) BOOL showsDay;                          //@synthesize showsDay=_showsDay - In the implementation block
@property (assign,nonatomic) BOOL showsMonth;                        //@synthesize showsMonth=_showsMonth - In the implementation block
@property (assign,nonatomic) BOOL showsYear;                         //@synthesize showsYear=_showsYear - In the implementation block
@property (nonatomic,copy) NSString * submissionFormat;              //@synthesize submissionFormat=_submissionFormat - In the implementation block
@property (nonatomic,copy) NSDate * defaultDate;                     //@synthesize defaultDate=_defaultDate - In the implementation block
@property (nonatomic,copy) NSDate * currentValue; 
@property (nonatomic,retain) NSCalendar * calendar;                  //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                      //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(void)setCurrentValue:(NSDate *)arg1 ;
-(NSDate *)currentValue;
-(id)displayString;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(NSDate *)defaultDate;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(BOOL)showsDay;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)showsYear;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)setShowsDay:(BOOL)arg1 ;
-(void)setSubmissionFormat:(NSString *)arg1 ;
-(NSString *)submissionFormat;
-(void)_commonUpdate;
-(id)_defaultValueAsDateForCurrentLocale;
-(void)setShowsMonth:(BOOL)arg1 ;
-(void)setShowsYear:(BOOL)arg1 ;
-(unsigned long long)fieldType;
-(BOOL)showsMonth;
@end

