/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/ContactsSettings.bundle/ContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsSettings/ContactsSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSSystemPolicyForAppDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, PSSpecifier, UIAlertController, UIPopoverController, CNContactPickerViewController, NSObject, PSSystemPolicyForApp, NSString;

@interface ContactsSettingsPlugin : PSListController <PSSystemPolicyForAppDelegate, UIActionSheetDelegate, CNContactPickerDelegate, UIPopoverControllerDelegate> {

	void* _addressBook;
	NSMutableArray* _currentSpecifiers;
	PSSpecifier* _SIMImportSpacerSpecifier;
	PSSpecifier* _SIMImportSpecifier;
	PSSpecifier* _MeCardSpecifier;
	PSSpecifier* _ContactsSortOrderSpecifier;
	PSSpecifier* _PersonNameOrderSpecifier;
	PSSpecifier* _ContactsInMailSpecifier;
	NSMutableArray* _contactStores;
	NSMutableArray* _contactStoreNames;
	long long _contactStoresCount;
	int _meCardLastCheckedSequenceNumber;
	CTServerConnectionRef _ctServerConnection;
	UIAlertController* _loadingContacts;
	CFDictionaryRef _importButtonIndexToStoreID;
	int _importStoreID;
	BOOL _shouldShowSIMImport;
	UIPopoverController* _meCardPopover;
	CNContactPickerViewController* _meCardPicker;
	NSObject*<OS_dispatch_queue> _addressBookQueue;
	PSSystemPolicyForApp* _appPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * appPolicy;              //@synthesize appPolicy=_appPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(CTServerConnectionRef)_ctServerConnection;
-(id)init;
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PSSystemPolicyForApp *)appPolicy;
-(void)setAppPolicy:(PSSystemPolicyForApp *)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(void)windowDidRotate:(id)arg1 ;
-(BOOL)shouldLoadSpecifiersLazily;
-(void)_rootControllerDidSuspend;
-(void)_dismissMeCardPickerAnimated:(BOOL)arg1 ;
-(BOOL)_importAlreadyInProgress;
-(void)_updateSIMImportVisibility;
-(void)_updateABStoresAndNames;
-(void)_updateSIMImportSpecifier:(BOOL)arg1 ;
-(void)_setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(void)_stopListeningForSIMPhonebookNotifications;
-(void)_noteImportEnded;
-(void)_erroredDuringSIMPhonebookFetch;
-(id)_simPhonebookEntryAtIndex:(int)arg1 ;
-(void)_noteImportStarted;
-(void)_fetchSIMPhonebook;
-(void)_beginImportToStoreID:(int)arg1 ;
-(void)_reloadMeCardCellIfVisible;
-(void)_showMeCardPopover;
-(void)_synchronizeNanoUserDefault:(id)arg1 ;
-(void)setDefaultContacts:(id)arg1 specifier:(id)arg2 ;
-(id)defaultContactsName:(id)arg1 ;
-(id)contactStoreTitlesForSpecifier:(id)arg1 ;
-(void)_phonebookSelected;
-(void)_phonebookAvailable;
-(void)importFromSIM:(id)arg1 ;
-(void)_clearSpecifiers;
-(void)_SIMStatusChanged;
-(id)meCardName:(id)arg1 ;
-(void)showMeCardPicker:(id)arg1 ;
-(id)contactsSortOrder:(id)arg1 ;
-(void)setContactsSortOrder:(id)arg1 specifier:(id)arg2 ;
-(id)personNameOrder:(id)arg1 ;
-(void)setPersonNameOrder:(id)arg1 specifier:(id)arg2 ;
@end

