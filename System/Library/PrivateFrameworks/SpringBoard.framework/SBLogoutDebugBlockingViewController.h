/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSDictionary, NSArray, NSString;

@interface SBLogoutDebugBlockingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	NSDictionary* _debugBlockingTasks;
	NSArray* _applicationKeys;

}

@property (nonatomic,retain) NSDictionary * debugBlockingTasks;              //@synthesize debugBlockingTasks=_debugBlockingTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)_tableView;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)_configureCell:(id)arg1 withBlockingTask:(id)arg2 ;
-(void)setDebugBlockingTasks:(NSDictionary *)arg1 ;
-(NSDictionary *)debugBlockingTasks;
@end

