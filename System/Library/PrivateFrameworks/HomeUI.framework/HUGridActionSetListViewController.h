/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@protocol HUGridActionSetListViewControllerDelegate;
@class UILabel, HUGridActionSetItemManager, HUWallpaperView, HFWallpaperSlice, HUGridLayoutOptions, NSString;

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate> {

	BOOL _shouldAllowItemPresentation;
	id<HUGridActionSetListViewControllerDelegate> _actionSetListViewControllerDelegate;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) HUGridActionSetItemManager * actionSetItemManager; 
@property (nonatomic,retain) HUWallpaperView * wallpaperView; 
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice; 
@property (nonatomic,copy) HUGridLayoutOptions * layoutOptions; 
@property (assign,nonatomic,__weak) id<HUGridActionSetListViewControllerDelegate> actionSetListViewControllerDelegate;              //@synthesize actionSetListViewControllerDelegate=_actionSetListViewControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowItemPresentation;                                                                      //@synthesize shouldAllowItemPresentation=_shouldAllowItemPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)updateMode;
+(double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)init;
-(HUGridLayoutOptions *)layoutOptions;
-(UILabel *)titleLabel;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(HUWallpaperView *)wallpaperView;
-(void)viewDidLoad;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)initWithRoom:(id)arg1 onlyShowFavorites:(BOOL)arg2 ;
-(void)setActionSetListViewControllerDelegate:(id<HUGridActionSetListViewControllerDelegate>)arg1 ;
-(void)setShouldAllowItemPresentation:(BOOL)arg1 ;
-(id)_performTapActionForItem:(id)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg1 ;
-(id)reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(void)_updateLayoutScrollDirectionIfNeeded;
-(long long)_scrollDirectionForLayoutOptions:(id)arg1 ;
-(void)_internalSetLayoutOptions:(id)arg1 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(HUGridActionSetItemManager *)actionSetItemManager;
-(id<HUGridActionSetListViewControllerDelegate>)actionSetListViewControllerDelegate;
-(id)_detailsViewControllerForActionSetItem:(id)arg1 ;
-(BOOL)shouldAllowItemPresentation;
@end

