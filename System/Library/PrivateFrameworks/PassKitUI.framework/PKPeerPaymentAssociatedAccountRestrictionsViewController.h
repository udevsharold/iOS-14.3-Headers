/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@protocol PKPeerPaymentAssociatedAccountSetupDelegate;
@class PKPeerPaymentSetupFlowController, PKFamilyMember, PKPeerPaymentPreferences, NSIndexPath, PKTableHeaderView, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration;

@interface PKPeerPaymentAssociatedAccountRestrictionsViewController : PKPaymentSetupTableViewController {

	PKPeerPaymentSetupFlowController* _controller;
	PKFamilyMember* _familyMember;
	PKPeerPaymentPreferences* _currentPreferences;
	NSIndexPath* _defaultSelectedIndexPath;
	PKTableHeaderView* _tableHeader;
	double _cachedHeaderViewWidth;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
	PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration* _configuration;

}
-(void)_continue;
-(id)_textLabelStringForIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_updatedPreferences;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
@end
