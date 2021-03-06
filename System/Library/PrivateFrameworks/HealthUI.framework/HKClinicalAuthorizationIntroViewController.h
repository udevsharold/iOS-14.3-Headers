/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class HKClinicalAuthorizationSequenceContext, UITableView, HKClinicalAuthorizationHeaderView, NSString;

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController> {

	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	HKClinicalAuthorizationSequenceContext* _context;
	UITableView* _tableView;
	HKClinicalAuthorizationHeaderView* _headerView;

}

@property (nonatomic,readonly) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationHeaderView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationSequenceContext * context;                              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(HKClinicalAuthorizationHeaderView *)headerView;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_configureNavigationItem;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_nextButtonPressed:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(HKClinicalAuthorizationSequenceContext *)context;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(void)viewDidLoad;
-(UITableView *)tableView;
-(id)_createFooterView;
-(void)_configureTableView;
-(void)_configureHeaderViewWithSource:(id)arg1 ;
-(BOOL)_indexPathIsValidRow:(id)arg1 ;
-(long long)_rowFromIndexPath:(id)arg1 ;
-(id)_cellForDetailsAtIndexPath:(id)arg1 ;
-(id)_cellForViewHealthRecordsAtIndexPath:(id)arg1 ;
-(void)_viewHealthRecordsCellTapped:(id)arg1 ;
@end

