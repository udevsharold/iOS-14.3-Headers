/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol STContentPrivacyViewModelCoordinator;
@class STRestrictionItem, NSString, STWebFilterDetailController;

@interface STWebFilterItemDetailController : PSListController {

	BOOL _isNamedSite;
	STRestrictionItem* _restriction;
	NSString* _pageURL;
	NSString* _pageTitle;
	id<STContentPrivacyViewModelCoordinator> _coordinator;
	STWebFilterDetailController* _parentWebFilterController;

}

@property (__weak) STWebFilterDetailController * parentWebFilterController;                     //@synthesize parentWebFilterController=_parentWebFilterController - In the implementation block
@property (nonatomic,retain) STRestrictionItem * restriction;                                   //@synthesize restriction=_restriction - In the implementation block
@property (assign,nonatomic) BOOL isNamedSite;                                                  //@synthesize isNamedSite=_isNamedSite - In the implementation block
@property (nonatomic,copy) NSString * pageURL;                                                  //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;                                                //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,retain) id<STContentPrivacyViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(void)willResignActive;
-(id)specifiers;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)init;
-(void)setPageTitle:(NSString *)arg1 ;
-(void)setCoordinator:(id<STContentPrivacyViewModelCoordinator>)arg1 ;
-(NSString *)pageURL;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)pageTitle;
-(void)setPageURL:(NSString *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<STContentPrivacyViewModelCoordinator>)coordinator;
-(STRestrictionItem *)restriction;
-(void)setRestriction:(STRestrictionItem *)arg1 ;
-(void)setIsNamedSite:(BOOL)arg1 ;
-(BOOL)isNamedSite;
-(STWebFilterDetailController *)parentWebFilterController;
-(void)setParentWebFilterController:(STWebFilterDetailController *)arg1 ;
-(void)saveFilterItem;
@end

