/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUMediaServiceDefaultAccountsItemModuleControllerDelegate.h>

@class HFUserItem, HUMediaServiceDefaultAccountsItemManager, HUMediaServiceDefaultAccountsItemModuleController, NSString;

@interface HUMediaServiceDefaultAccountsTableViewController : HUItemTableViewController <HUMediaServiceDefaultAccountsItemModuleControllerDelegate> {

	HFUserItem* _userItem;
	HUMediaServiceDefaultAccountsItemManager* _mediaServiceDefaultAccountsItemManager;
	HUMediaServiceDefaultAccountsItemModuleController* _mediaServiceDefaultAccountsItemModuleController;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                                                     //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HUMediaServiceDefaultAccountsItemManager * mediaServiceDefaultAccountsItemManager;                         //@synthesize mediaServiceDefaultAccountsItemManager=_mediaServiceDefaultAccountsItemManager - In the implementation block
@property (nonatomic,retain) HUMediaServiceDefaultAccountsItemModuleController * mediaServiceDefaultAccountsItemModuleController;              //@synthesize mediaServiceDefaultAccountsItemModuleController=_mediaServiceDefaultAccountsItemModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(HFUserItem *)userItem;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(id)itemModuleControllers;
-(void)mediaServiceDefaultAccountsItemModuleController:(id)arg1 didUpdateDefaultAccount:(id)arg2 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HUMediaServiceDefaultAccountsItemManager *)mediaServiceDefaultAccountsItemManager;
-(HUMediaServiceDefaultAccountsItemModuleController *)mediaServiceDefaultAccountsItemModuleController;
-(void)setMediaServiceDefaultAccountsItemModuleController:(HUMediaServiceDefaultAccountsItemModuleController *)arg1 ;
@end

