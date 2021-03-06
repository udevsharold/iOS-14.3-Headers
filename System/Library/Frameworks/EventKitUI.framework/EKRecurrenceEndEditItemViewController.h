/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class PreferencesValueCell, NSDate, UITableView, UIDatePicker, UITableViewCell, NSString;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener> {

	PreferencesValueCell* _dateCell;
	NSDate* _preNeverEndDate;
	NSDate* _minimumEndDate;
	int _shorteningStatus;
	unsigned _updatingPicker : 1;
	UITableView* _table;
	UIDatePicker* _datePicker;
	UITableViewCell* _datePickerCell;
	NSDate* _repeatEndDate;
	NSDate* _bestInitialDate;

}

@property (nonatomic,copy) NSDate * repeatEndDate;                  //@synthesize repeatEndDate=_repeatEndDate - In the implementation block
@property (nonatomic,copy) NSDate * bestInitialDate;                //@synthesize bestInitialDate=_bestInitialDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_neverLocalizedString;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)applyMinimumEndDateToPicker;
-(void)updatePicker;
-(id)_cellForRow:(long long)arg1 ;
-(void)_updateSelectionForCell:(id)arg1 atRow:(long long)arg2 ;
-(id)_stringForEndDate;
-(void)setRepeatEndDate:(NSDate *)arg1 ;
-(id)_endDateStringForCurrentShorteningStatus;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_localeChanged;
-(void)shortenCell:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setMinimumEndDate:(id)arg1 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(NSDate *)repeatEndDate;
-(NSDate *)bestInitialDate;
-(void)setBestInitialDate:(NSDate *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)datePickerChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)viewDidLoad;
@end

