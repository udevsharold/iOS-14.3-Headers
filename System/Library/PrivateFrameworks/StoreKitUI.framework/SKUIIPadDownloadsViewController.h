/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol SKUIDownloadsChildViewControllerDelegate;
@class UICollectionView, NSArray, _UIContentUnavailableView, SKUIClientContext, NSString;

@interface SKUIIPadDownloadsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	NSArray* _downloads;
	_UIContentUnavailableView* _noContentView;
	id<SKUIDownloadsChildViewControllerDelegate> _delegate;
	BOOL _editing;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                         //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSArray * downloads;                                                       //@synthesize downloads=_downloads - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIDownloadsChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(NSArray *)downloads;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)_cancelAction:(id)arg1 ;
-(void)_reload;
-(void)viewDidLayoutSubviews;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setDelegate:(id<SKUIDownloadsChildViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)_deleteAction:(id)arg1 ;
-(id<SKUIDownloadsChildViewControllerDelegate>)delegate;
-(void)setDownloads:(NSArray *)arg1 ;
-(void)reloadDownloadsAtIndexes:(id)arg1 ;
-(void)_reloadLayout;
-(void)_reloadNavigationItem;
-(void)_editAction:(id)arg1 ;
@end

