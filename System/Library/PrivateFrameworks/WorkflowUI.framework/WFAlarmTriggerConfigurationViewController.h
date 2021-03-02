/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFAlarmChooserViewControllerDelegate.h>

@class UITableView, NSArray, MTAlarmDataSource, NSString;

@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate> {

	UITableView* _tableView;
	NSArray* _sections;
	MTAlarmDataSource* _alarmDataSource;

}

@property (nonatomic,readonly) UITableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) MTAlarmDataSource * alarmDataSource;              //@synthesize alarmDataSource=_alarmDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)sections;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)alarmChooserViewController:(id)arg1 didFinishWithChosenAlarms:(id)arg2 ;
-(void)alarmChooserViewControllerDidCancel:(id)arg1 ;
-(id)titleForCellInSection:(id)arg1 item:(id)arg2 ;
-(id)extraTextForCellInSection:(id)arg1 item:(id)arg2 ;
-(long long)accessoryTypeForCellInSection:(id)arg1 item:(id)arg2 ;
-(void)presentAlarmChooserViewController;
-(MTAlarmDataSource *)alarmDataSource;
@end
