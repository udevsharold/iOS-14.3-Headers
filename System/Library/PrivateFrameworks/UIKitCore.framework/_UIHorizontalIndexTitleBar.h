/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol _UIHorizontalIndexTitleBarDelegate;
@class NSArray, UICollectionView, UICollectionViewFlowLayout, UIFocusGuide, _UIFocusFastScrollingIndexBarEntry, NSIndexPath, _UIHorizontalIndexTitleBarCell, NSString;

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NSArray* _entries;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	UIFocusGuide* _horizontalIndexTitleBarFocusGuide;
	_UIFocusFastScrollingIndexBarEntry* _selectedEntry;
	NSIndexPath* _selectedEntryIndexPath;
	_UIHorizontalIndexTitleBarCell* _focusedCell;
	id<_UIHorizontalIndexTitleBarDelegate> _delegate;
	UIEdgeInsets _sectionInset;
	UIEdgeInsets _parentContentInset;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                                                //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) UIFocusGuide * horizontalIndexTitleBarFocusGuide;                                                       //@synthesize horizontalIndexTitleBarFocusGuide=_horizontalIndexTitleBarFocusGuide - In the implementation block
@property (nonatomic,retain) NSArray * entries;                                                                                      //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) _UIFocusFastScrollingIndexBarEntry * selectedEntry;                                                     //@synthesize selectedEntry=_selectedEntry - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedEntryIndexPath;                                                                   //@synthesize selectedEntryIndexPath=_selectedEntryIndexPath - In the implementation block
@property (assign,nonatomic,__weak) _UIHorizontalIndexTitleBarCell * focusedCell;                                                    //@synthesize focusedCell=_focusedCell - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHorizontalIndexTitleBarDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setParentContentInset:,getter=_parentContentInset,nonatomic) UIEdgeInsets parentContentInset;              //@synthesize parentContentInset=_parentContentInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                                                              //@synthesize sectionInset=_sectionInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)commonInit;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)init;
-(void)setEntries:(NSArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)entries;
-(void)_cancelDelayedFocusAction;
-(void)_sendDelayedFocusActionIfNecessary;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(UICollectionView *)collectionView;
-(_UIHorizontalIndexTitleBarCell *)focusedCell;
-(void)_setParentContentInset:(UIEdgeInsets)arg1 ;
-(void)setDelegate:(id<_UIHorizontalIndexTitleBarDelegate>)arg1 ;
-(_UIFocusFastScrollingIndexBarEntry *)selectedEntry;
-(id)_currentlyFocusedCell;
-(void)_updateWithEntries:(id)arg1 ;
-(BOOL)_isViewEntryCell:(id)arg1 ;
-(void)setSelectedEntry:(_UIFocusFastScrollingIndexBarEntry *)arg1 ;
-(NSIndexPath *)selectedEntryIndexPath;
-(void)_selectFocusedCell;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setSelectedEntryIndexPath:(NSIndexPath *)arg1 ;
-(void)setHorizontalIndexTitleBarFocusGuide:(UIFocusGuide *)arg1 ;
-(void)_flipIfRightToLeft;
-(UIFocusGuide *)horizontalIndexTitleBarFocusGuide;
-(void)_updateSectionInset;
-(id<_UIHorizontalIndexTitleBarDelegate>)delegate;
-(UIEdgeInsets)_parentContentInset;
-(id)_existingCellForSelectedIndexPath;
-(void)_selectEntryForTitleIndex:(long long)arg1 ;
-(void)setFocusedCell:(_UIHorizontalIndexTitleBarCell *)arg1 ;
@end
