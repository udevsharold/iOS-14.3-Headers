/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont, UIImage;

@interface EKUISemiConstantCache : NSObject {

	BOOL _calInterfaceIsLeftToRight;
	BOOL _usesLargeText;
	double _dayOccurrenceMinimumCachedLineHeightCompact;
	double _dayOccurrenceMinimumCachedLineHeightRegular;
	double _dayOccurrenceMinimumCachedLineHeightSmallCompact;
	double _dayOccurrenceMinimumCachedLineHeightSmallRegular;
	UIFont* _dayOccurrenceUncompressedSecondaryTextFont;
	double _weekAllDayBaselineForLargeFormatWeekView;
	double _weekAllDayBaselineForSmallFormatWeekView;
	UIFont* _weekAllDayLabelFontCompact;
	UIFont* _weekAllDayLabelFontRegular;
	UIFont* _weekAllDayTodayLabelFontCompact;
	UIImage* _inboxDisclosureImage;
	double _currentScaleFactor;
	double _weekAllDayOccurrenceHeight;
	double _minYearMonthHeaderFontSizeUsed;

}

@property (readonly) BOOL usesLargeText;                                                   //@synthesize usesLargeText=_usesLargeText - In the implementation block
@property (readonly) double currentScaleFactor;                                            //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact; 
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular; 
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact; 
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular; 
@property (readonly) UIFont * dayOccurrenceUncompressedSecondaryTextFont; 
@property (assign) double weekAllDayBaselineForLargeFormatWeekView;                        //@synthesize weekAllDayBaselineForLargeFormatWeekView=_weekAllDayBaselineForLargeFormatWeekView - In the implementation block
@property (assign) double weekAllDayBaselineForSmallFormatWeekView;                        //@synthesize weekAllDayBaselineForSmallFormatWeekView=_weekAllDayBaselineForSmallFormatWeekView - In the implementation block
@property (assign) double weekAllDayOccurrenceHeight;                                      //@synthesize weekAllDayOccurrenceHeight=_weekAllDayOccurrenceHeight - In the implementation block
@property (readonly) UIFont * weekAllDayLabelFontCompact; 
@property (readonly) UIFont * weekAllDayLabelFontRegular; 
@property (readonly) UIFont * weekAllDayTodayLabelFontCompact; 
@property (readonly) UIFont * weekAllDayTodayLabelFontRegular; 
@property (assign) double minYearMonthHeaderFontSizeUsed;                                  //@synthesize minYearMonthHeaderFontSizeUsed=_minYearMonthHeaderFontSizeUsed - In the implementation block
+(id)sharedInstance;
-(void)_localeChanged:(id)arg1 ;
-(id)init;
-(id)inboxDisclosureImage;
-(void)setWeekAllDayBaselineForSmallFormatWeekView:(double)arg1 ;
-(void)updateMetrics;
-(double)weekAllDayBaselineForSmallFormatWeekView;
-(long long)_participantStatusFromDetailAttendeesStatus:(int)arg1 ;
-(id)commentIconStringForFont:(id)arg1 ;
-(UIFont *)weekAllDayLabelFontCompact;
-(double)dayOccurrenceMinimumCachedLineHeightRegular;
-(UIFont *)weekAllDayLabelFontRegular;
-(id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3 ;
-(UIFont *)weekAllDayTodayLabelFontRegular;
-(UIFont *)weekAllDayTodayLabelFontCompact;
-(UIFont *)dayOccurrenceUncompressedSecondaryTextFont;
-(double)dayOccurrenceMinimumCachedLineHeightSmallCompact;
-(double)currentScaleFactor;
-(id)birthdayImageForFont:(id)arg1 ;
-(double)weekAllDayBaselineForLargeFormatWeekView;
-(double)weekAllDayOccurrenceHeight;
-(void)setMinYearMonthHeaderFontSizeUsed:(double)arg1 ;
-(double)dayOccurrenceMinimumCachedLineHeightCompact;
-(void)setWeekAllDayOccurrenceHeight:(double)arg1 ;
-(double)minYearMonthHeaderFontSizeUsed;
-(void)_orientationChanged:(id)arg1 ;
-(BOOL)usesLargeText;
-(void)setWeekAllDayBaselineForLargeFormatWeekView:(double)arg1 ;
-(id)statusGlyphForStatusType:(int)arg1 ;
-(void)_contentCategorySizeChanged:(id)arg1 ;
-(double)dayOccurrenceMinimumCachedLineHeightSmallRegular;
@end

