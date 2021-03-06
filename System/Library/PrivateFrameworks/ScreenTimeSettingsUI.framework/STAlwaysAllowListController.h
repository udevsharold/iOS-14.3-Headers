/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@protocol STAlwaysAllowListControllerDelegate;
@class STAlwaysAllowList, NSArray, NSSet, PSSpecifier;

@interface STAlwaysAllowListController : STPINListViewController {

	id<STAlwaysAllowListControllerDelegate> _delegate;
	STAlwaysAllowList* _alwaysAllowList;
	NSArray* _chooseBundleIDs;
	NSSet* _installedBundleIDs;
	PSSpecifier* _allowedContactsSpecifier;
	PSSpecifier* _allowedAppsGroupSpecifier;
	NSArray* _allowedAppsSpecifiers;
	PSSpecifier* _chooseAppsGroupSpecifier;
	NSArray* _chooseAppsSpecifiers;

}

@property (retain) PSSpecifier * allowedContactsSpecifier;                                         //@synthesize allowedContactsSpecifier=_allowedContactsSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * allowedAppsGroupSpecifier;                              //@synthesize allowedAppsGroupSpecifier=_allowedAppsGroupSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * allowedAppsSpecifiers;                                      //@synthesize allowedAppsSpecifiers=_allowedAppsSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * chooseAppsGroupSpecifier;                               //@synthesize chooseAppsGroupSpecifier=_chooseAppsGroupSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * chooseAppsSpecifiers;                                       //@synthesize chooseAppsSpecifiers=_chooseAppsSpecifiers - In the implementation block
@property (assign,nonatomic,__weak) id<STAlwaysAllowListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) STAlwaysAllowList * alwaysAllowList;                                    //@synthesize alwaysAllowList=_alwaysAllowList - In the implementation block
@property (nonatomic,copy) NSArray * chooseBundleIDs;                                              //@synthesize chooseBundleIDs=_chooseBundleIDs - In the implementation block
@property (nonatomic,copy) NSSet * installedBundleIDs;                                             //@synthesize installedBundleIDs=_installedBundleIDs - In the implementation block
-(void)willResignActive;
-(id)specifiers;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)init;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(id)arg1 ;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(NSSet *)installedBundleIDs;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setInstalledBundleIDs:(NSSet *)arg1 ;
-(void)setDelegate:(id<STAlwaysAllowListControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(id<STAlwaysAllowListControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(STAlwaysAllowList *)alwaysAllowList;
-(void)setAlwaysAllowList:(STAlwaysAllowList *)arg1 ;
-(void)setChooseBundleIDs:(NSArray *)arg1 ;
-(PSSpecifier *)allowedContactsSpecifier;
-(id)_allowedContactsDuringDowntimeText:(id)arg1 ;
-(void)setAllowedContactsSpecifier:(PSSpecifier *)arg1 ;
-(void)setAllowedAppsGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setChooseAppsGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)createAllowedAppsSpecifiers;
-(void)setAllowedAppsSpecifiers:(NSArray *)arg1 ;
-(NSArray *)allowedAppsSpecifiers;
-(PSSpecifier *)chooseAppsGroupSpecifier;
-(id)createChooseAppsSpecifiers;
-(void)setChooseAppsSpecifiers:(NSArray *)arg1 ;
-(NSArray *)chooseAppsSpecifiers;
-(id)appSpecifiersForBundleIDs:(id)arg1 ;
-(NSArray *)chooseBundleIDs;
-(void)_insertAllowedAppSpecifier:(id)arg1 ;
-(void)_removeAllowedAppSpecifier:(id)arg1 ;
-(PSSpecifier *)allowedAppsGroupSpecifier;
-(id)removeMessagesConfirmationPrompt;
-(void)removeAllowedIdentifier:(id)arg1 withSpecifier:(id)arg2 ;
@end

