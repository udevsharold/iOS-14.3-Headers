/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class STDeviceBedtime, NSDateFormatter;

@interface STIntroDowntimeTableViewController : UITableViewController {

	STDeviceBedtime* _bedtime;
	long long _datePickerVisibility;
	NSDateFormatter* _downtimeFormatter;

}

@property (assign) long long datePickerVisibility;                     //@synthesize datePickerVisibility=_datePickerVisibility - In the implementation block
@property (readonly) NSDateFormatter * downtimeFormatter;              //@synthesize downtimeFormatter=_downtimeFormatter - In the implementation block
@property (readonly) STDeviceBedtime * bedtime;                        //@synthesize bedtime=_bedtime - In the implementation block
-(void)_datePickerChanged:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(STDeviceBedtime *)bedtime;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)_stIntroDowntimeTableViewControllerCommonInit;
-(long long)datePickerVisibility;
-(long long)_tableRowForStartLabelRow;
-(NSDateFormatter *)downtimeFormatter;
-(long long)_tableRowForEndLabelRow;
-(long long)_tableRowForDatePicker;
-(void)setDatePickerVisibility:(long long)arg1 ;
@end

