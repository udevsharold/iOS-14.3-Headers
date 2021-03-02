/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl, UIContextMenuInteractionDelegate> {

	RetainPtr<UIDatePicker>* _datePicker;
	NSString* _formatString;
	RetainPtr<NSString>* _initialValue;
	double _initialValueAsNumber;
	BOOL _shouldRemoveTimeZoneInformation;
	BOOL _isTimeInput;
	WKContentView* _view;
	CGPoint _interactionPoint;
	RetainPtr<WKDateTimeContextMenuViewController>* _viewController;
	RetainPtr<UIContextMenuInteraction>* _dateTimeContextMenuInteraction;
	BOOL _presenting;
	BOOL _preservingFocus;

}

@property (nonatomic,readonly) NSString * calendarType; 
@property (nonatomic,readonly) double hour; 
@property (nonatomic,readonly) double minute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)hour;
-(void)ok:(id)arg1 ;
-(NSString *)calendarType;
-(void)reset:(id)arg1 ;
-(BOOL)shouldPresentGregorianCalendar:(const FocusedElementInformation*)arg1 ;
-(void)setDateTimePickerToInitialValue;
-(RetainPtr<NSDateFormatter>*)dateFormatterForPicker;
-(void)showDateTimePicker;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)dealloc;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)ensureContextMenuInteraction;
-(id)controlView;
-(long long)_timeZoneOffsetFromGMT:(id)arg1 ;
-(void)_dateChangedSetAsString;
-(void)_dateChangedSetAsNumber;
-(void)_dateChangeHandler:(id)arg1 ;
-(id)_sanitizeInputValueForFormatter:(id)arg1 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)setHour:(long long)arg1 minute:(long long)arg2 ;
-(double)minute;
-(long long)datePickerStyle;
-(void)_dateChanged;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)removeContextMenuInteraction;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)viewController;
@end
