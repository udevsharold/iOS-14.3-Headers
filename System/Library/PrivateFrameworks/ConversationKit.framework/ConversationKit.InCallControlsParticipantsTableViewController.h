/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@interface ConversationKit.InCallControlsParticipantsTableViewController : UITableViewController {

	 capabilitiesChecker;
	 participants;
	 isLegacy;
	 groupName;
	 mode;
	 participantsViewControllerDelegate;
	 inCallControlsParticipantsTableViewControllerDelegate;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)handleContentSizeCategoryDidChange:(id)arg1 ;
@end

