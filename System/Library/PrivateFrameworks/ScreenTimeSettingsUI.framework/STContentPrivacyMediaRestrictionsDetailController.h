/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;
@class NSObject;

@interface STContentPrivacyMediaRestrictionsDetailController : PSListController {

	NSObject*<STContentPrivacyViewModelCoordinator> _coordinator;

}

@property (nonatomic,retain) NSObject*<STContentPrivacyViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(id)specifiers;
-(id)init;
-(void)setCoordinator:(NSObject*<STContentPrivacyViewModelCoordinator>)arg1 ;
-(void)dealloc;
-(NSObject*<STContentPrivacyViewModelCoordinator>)coordinator;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(id)getItemSpecifierValue:(id)arg1 ;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 ;
-(id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3 ;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 titlesByValue:(id)arg3 sortByTitle:(BOOL)arg4 ;
-(id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 ;
-(void)showWebFilterRestrictions:(id)arg1 ;
-(id)defaultLinkListSpecifierWithItem:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(BOOL)arg3 ;
@end
