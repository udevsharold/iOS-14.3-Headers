/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class VUIDebugContainerView, UICollectionView, VUIDebugViewDataSource, NSString;

@interface VUIDebugViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	BOOL _requiresRelayout;
	VUIDebugContainerView* _containerView;
	UICollectionView* _collectionView;
	VUIDebugViewDataSource* _dataSource;

}

@property (nonatomic,retain) VUIDebugContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                  //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL requiresRelayout;                              //@synthesize requiresRelayout=_requiresRelayout - In the implementation block
@property (nonatomic,retain) VUIDebugViewDataSource * dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)init;
-(void)setContainerView:(VUIDebugContainerView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDataSource:(VUIDebugViewDataSource *)arg1 ;
-(VUIDebugContainerView *)containerView;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(VUIDebugViewDataSource *)dataSource;
-(void)_dismissViewController;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)requiresRelayout;
-(void)setRequiresRelayout:(BOOL)arg1 ;
@end

