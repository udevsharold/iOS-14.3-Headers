/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol QLListViewControllerDelegate;
@class UIPopoverPresentationController, UITableViewController, QLItem, QLPreviewItemStore, QLListCellManager, NSArray, UIBarButtonItem, NSString;

@interface QLListViewController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate> {

	UIPopoverPresentationController* _presentationController;
	UITableViewController* _tableViewController;
	QLItem* _currentPreviewItem;
	QLPreviewItemStore* _previewItemStore;
	QLListCellManager* _cellManager;
	NSArray* _itemsWithFolders;
	id<QLListViewControllerDelegate> _archiveDelegate;
	UIBarButtonItem* _barButton;

}

@property (__weak) id<QLListViewControllerDelegate> archiveDelegate;              //@synthesize archiveDelegate=_archiveDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * barButton;                  //@synthesize barButton=_barButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIBarButtonItem *)barButton;
-(void)_addPath:(id)arg1 fromPreviewItem:(id)arg2 intoArray:(id)arg3 ;
-(id)initWithPreviewItemStore:(id)arg1 currentPreviewItem:(id)arg2 ;
-(void)setBarButton:(UIBarButtonItem *)arg1 ;
-(void)setArchiveDelegate:(id<QLListViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)_dismiss;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_generateItemsAndFolders;
-(void)_updateNavigationBarVisibilityForPresentationStyle:(long long)arg1 ;
-(id<QLListViewControllerDelegate>)archiveDelegate;
@end

