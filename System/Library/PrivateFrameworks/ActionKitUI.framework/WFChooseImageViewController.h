/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFImageContentItemCellDelegate.h>

@protocol WFChooseImageViewControllerDelegate;
@class NSMutableSet, WFContentCollection, NSString;

@interface WFChooseImageViewController : UITableViewController <WFImageContentItemCellDelegate> {

	long long _itemsPerRow;
	NSMutableSet* _selectedItems;
	CGRect _lastFrame;
	id<WFChooseImageViewControllerDelegate> _delegate;
	unsigned long long _minimumNumberOfItems;
	unsigned long long _maximumNumberOfItems;
	WFContentCollection* _collection;

}

@property (nonatomic,readonly) WFContentCollection * collection;                                   //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) long long itemsPerRow;                                                //@synthesize itemsPerRow=_itemsPerRow - In the implementation block
@property (assign,nonatomic,__weak) id<WFChooseImageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfItems;                              //@synthesize minimumNumberOfItems=_minimumNumberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfItems;                              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFContentCollection *)collection;
-(void)done;
-(void)setItemsPerRow:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)cancel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFChooseImageViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)maximumNumberOfItems;
-(id<WFChooseImageViewControllerDelegate>)delegate;
-(long long)itemsPerRow;
-(void)viewDidLoad;
-(void)cell:(id)arg1 didSelectImageViewAtIndex:(unsigned long long)arg2 ;
-(id)initWithCollection:(id)arg1 selectedIndexes:(id)arg2 ;
-(unsigned long long)minimumNumberOfItems;
-(void)setMinimumNumberOfItems:(unsigned long long)arg1 ;
@end
