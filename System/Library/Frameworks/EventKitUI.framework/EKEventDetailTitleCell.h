/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/EKEventDetailPredictedLocationCellDelegate.h>

@protocol EKEventDetailTitleCellDelegate;
@class UILabel, NSMutableArray, EKEventDetailPredictedLocationCell, UIButton, NSObject, UIView, NSString;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate> {

	UILabel* _titleView;
	NSMutableArray* _locationItems;
	EKEventDetailPredictedLocationCell* _predictedLocationView;
	UILabel* _travelTimeView;
	NSMutableArray* _dateTimeViews;
	UILabel* _recurrenceView;
	UILabel* _statusView;
	UIButton* _editButton;
	unsigned _visibleItems;
	BOOL _observingLocaleChanges;
	BOOL _rejectionReasonCell;
	BOOL _hideCellSeparator;
	int _lastPosition;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	BOOL _showingInlineDayView;
	NSObject*<EKEventDetailTitleCellDelegate> _delegate;
	unsigned long long _numberOfTitleLines;

}

@property (assign,nonatomic,__weak) NSObject*<EKEventDetailTitleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                 //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
@property (assign,nonatomic) BOOL showingInlineDayView;                                              //@synthesize showingInlineDayView=_showingInlineDayView - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTitleLines;                                  //@synthesize numberOfTitleLines=_numberOfTitleLines - In the implementation block
@property (nonatomic,readonly) UIView * sourceViewForPopover; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_titleFont;
+(id)_locationFont;
+(void)_registerForInvalidation;
+(id)_largeTitleFont;
+(void)_invalidateCachedFonts;
-(void)setRecurrenceString:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(void)setPrimaryTextColor:(id)arg1 ;
-(void)addLocation:(id)arg1 ;
-(void)setHideCellSeparator:(BOOL)arg1 ;
-(void)layoutMarginsDidChange;
-(id)_editButton;
-(void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2 ;
-(double)titleHeight;
-(void)_updateSeparatorInsets;
-(id)_dateTimeViewForLine:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)editButtonTapped;
-(void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNumberOfTitleLines:(unsigned long long)arg1 ;
-(id)_travelTimeView;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(long long)arg3 ;
-(BOOL)showingInlineDayView;
-(BOOL)update;
-(void)setStatusString:(id)arg1 ;
-(double)_layoutForWidth:(double)arg1 ;
-(UIView *)sourceViewForPopover;
-(id)_predictedLocationView;
-(void)layoutSubviews;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(void)setShowingInlineDayView:(BOOL)arg1 ;
-(id)_recurrenceView;
-(void)setLocation:(id)arg1 ;
-(id)_statusView;
-(id)_titleView;
-(void)setDelegate:(NSObject*<EKEventDetailTitleCellDelegate>)arg1 ;
-(void)_saveEventWithSpan:(long long)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(void)setTravelTimeString:(id)arg1 ;
-(id)initAsRejectionReasonCellWithEvent:(id)arg1 ;
-(void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2 ;
-(BOOL)_useLargeFonts;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(NSObject*<EKEventDetailTitleCellDelegate>)delegate;
-(unsigned long long)numberOfTitleLines;
-(void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1 ;
@end
