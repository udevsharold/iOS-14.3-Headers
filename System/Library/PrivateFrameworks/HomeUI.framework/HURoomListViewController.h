/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUEditRoomViewControllerPresentationDelegate.h>
#import <libobjc.A.dylib/HUEditRoomViewControllerAddRoomDelegate.h>

@protocol HURoomListViewControllerDelegate;
@class HUGridLayoutOptions, HURoomListItemManager, NSString;

@interface HURoomListViewController : HUItemTableViewController <HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate> {

	id<HURoomListViewControllerDelegate> _delegate;
	HUGridLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) HURoomListItemManager * itemManager; 
@property (assign,nonatomic,__weak) id<HURoomListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                               //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)init;
-(void)_addButtonPressed:(id)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)_editButtonPressed:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)setDelegate:(id<HURoomListViewControllerDelegate>)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id<HURoomListViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 layoutOptions:(id)arg3 ;
-(id)_reorderableRoomItems;
-(void)_saveItemOrder:(id)arg1 forSection:(long long)arg2 resort:(BOOL)arg3 ;
-(id)_reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)_setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2 ;
-(void)presentAddRoomViewControllerForEditRoomViewController:(id)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
@end

