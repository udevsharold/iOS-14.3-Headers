/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIDatePickerCalendarTimeLabelDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@protocol _UIDatePickerCalendarTimeViewDelegate;
@class NSDateFormatter, NSArray, _UIPassthroughScrollInteraction, NSCalendar, NSLocale, NSString, _UIDatePickerCalendarTime, UILabel, _UIDatePickerCalendarTimeLabel, UISegmentedControl, _UIDatePickerNumericKeyboardViewController, _UIDatePickerCalendarTimeFormat;

@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCalendarTimeLabelDelegate, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate> {

	struct {
		unsigned isPendingManualKeyboardPresentation : 1;
		unsigned isPresentingManualKeyboard : 1;
		unsigned needsLabelUpdateOnResignFirstResponder : 1;
		unsigned showsTimeLabel : 1;
	}  _flags;
	NSDateFormatter* _formatter;
	long long _currentLayout;
	NSArray* _clockLayoutConstraints;
	_UIPassthroughScrollInteraction* _passthroughInteraction;
	BOOL _shouldShowTimeLabel;
	id<_UIDatePickerCalendarTimeViewDelegate> _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSString* _customFontDesign;
	_UIDatePickerCalendarTime* _selectedTime;
	UILabel* _timeLabel;
	_UIDatePickerCalendarTimeLabel* _timeTextField;
	UISegmentedControl* _timeOfDaySelector;
	_UIDatePickerNumericKeyboardViewController* _numericKeyboardViewController;
	_UIDatePickerCalendarTimeFormat* _timeFormat;

}

@property (nonatomic,readonly) UILabel * timeLabel;                                                                   //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeLabel * timeTextField;                                        //@synthesize timeTextField=_timeTextField - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * timeOfDaySelector;                                                //@synthesize timeOfDaySelector=_timeOfDaySelector - In the implementation block
@property (nonatomic,retain) _UIDatePickerNumericKeyboardViewController * numericKeyboardViewController;              //@synthesize numericKeyboardViewController=_numericKeyboardViewController - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTimeFormat * timeFormat;                                            //@synthesize timeFormat=_timeFormat - In the implementation block
@property (assign,getter=isPassthroughInteractionEnabled,nonatomic) BOOL passthroughInteractionEnabled; 
@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarTimeViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                                             //@synthesize customFontDesign=_customFontDesign - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTime * selectedTime;                                                //@synthesize selectedTime=_selectedTime - In the implementation block
@property (assign,nonatomic) long long minuteInterval; 
@property (assign,nonatomic) BOOL shouldShowTimeLabel;                                                                //@synthesize shouldShowTimeLabel=_shouldShowTimeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSLocale *)locale;
-(void)willMoveToSuperview:(id)arg1 ;
-(NSCalendar *)calendar;
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_notifyDelegate;
-(void)dealloc;
-(UILabel *)timeLabel;
-(BOOL)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1 ;
-(void)timeLabelDidFailToBecomeFirstResponder:(id)arg1 ;
-(_UIDatePickerCalendarTimeFormat *)timeFormat;
-(void)reloadWithCalendar:(id)arg1 locale:(id)arg2 selectedTime:(id)arg3 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg1 ;
-(void)_reload;
-(void)timeLabelDidBecomeFirstResponder:(id)arg1 ;
-(void)timeLabelDidResignFirstResponder:(id)arg1 ;
-(void)timeLabelWillBecomeFirstResponder:(id)arg1 ;
-(void)_updateFonts;
-(_UIDatePickerCalendarTime *)selectedTime;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)minuteInterval;
-(void)setTimeFormat:(_UIDatePickerCalendarTimeFormat *)arg1 ;
-(void)setDelegate:(id<_UIDatePickerCalendarTimeViewDelegate>)arg1 ;
-(void)_setupDateFormatter;
-(void)_setupViewHierarchy;
-(void)_dismissManualKeyboard;
-(void)_reloadDateFormatters;
-(_UIDatePickerCalendarTimeLabel *)timeTextField;
-(void)_updateTextFieldsFromSelectedDateComponents;
-(void)_disableCustomKeyboardIfNecessary;
-(UISegmentedControl *)timeOfDaySelector;
-(void)didUpdateTimeOfDayValue:(id)arg1 ;
-(void)_reloadTimeOfDaySelector;
-(void)timeLabelDidBeginEditing:(id)arg1 ;
-(void)_updateSelectedDateComponentsFromTextFields;
-(long long)keyboardTypeForTimeLabel:(id)arg1 ;
-(void)timeLabel:(id)arg1 didUpdateText:(id)arg2 ;
-(BOOL)timeLabel:(id)arg1 didReceiveText:(id)arg2 ;
-(void)_enableCustomKeyboardIfNecessary;
-(void)setPassthroughInteractionEnabled:(BOOL)arg1 ;
-(_UIDatePickerNumericKeyboardViewController *)numericKeyboardViewController;
-(BOOL)isPassthroughInteractionEnabled;
-(void)setNumericKeyboardViewController:(_UIDatePickerNumericKeyboardViewController *)arg1 ;
-(NSString *)customFontDesign;
-(void)setSelectedTime:(_UIDatePickerCalendarTime *)arg1 ;
-(id)primaryFirstResponder;
-(void)timeLabelDidEndEditing:(id)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(id<_UIDatePickerCalendarTimeViewDelegate>)delegate;
-(void)_updateClockLayout;
-(void)setShouldShowTimeLabel:(BOOL)arg1 ;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(BOOL)shouldShowTimeLabel;
@end

