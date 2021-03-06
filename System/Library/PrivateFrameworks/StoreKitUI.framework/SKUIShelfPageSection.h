/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIObservableScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIShelfPageSectionConfigurationDataSource.h>
#import <libobjc.A.dylib/SKUIViewElementSlideshowDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/SKUIShelfPageSection.h>

@protocol SKUIScrollViewDelegateObserver;
@class SKUIViewElementLayoutContext, SKUIShelfPageSectionConfiguration, SKUIShelfViewElement, SKUIViewElementSlideshowController, NSArray, NSString, SKUIShelfPageComponent;

@interface SKUIShelfPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIObservableScrollViewDelegate, SKUIShelfPageSectionConfigurationDataSource, SKUIViewElementSlideshowDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SKUIShelfPageSection> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	SKUIShelfPageSectionConfiguration* _configuration;
	long long _lastNeedsMoreCount;
	SKUIShelfViewElement* _shelfViewElement;
	SKUIViewElementSlideshowController* _slideshowController;
	NSArray* _viewElements;
	id<SKUIScrollViewDelegateObserver> _scrollViewDelegateObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUIScrollViewDelegateObserver> scrollViewDelegateObserver;              //@synthesize scrollViewDelegateObserver=_scrollViewDelegateObserver - In the implementation block
@property (nonatomic,readonly) SKUIShelfPageSectionConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) SKUIShelfPageComponent * pageComponent; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)sectionContentInset;
-(void)_setContext:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(SKUIShelfPageSectionConfiguration *)configuration;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(long long)numberOfCells;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 configuration:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(long long)applyUpdateType:(long long)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)deselectItemsAnimated:(BOOL)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)setTopSection:(BOOL)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)_normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 ;
-(id<SKUIScrollViewDelegateObserver>)scrollViewDelegateObserver;
-(void)setScrollViewDelegateObserver:(id<SKUIScrollViewDelegateObserver>)arg1 ;
-(id)shelfPageSectionConfiguration:(id)arg1 viewElementAtIndex:(long long)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3 ;
-(void)viewElementSlideshowWillDismiss:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_performDefaultSelectActionForEffectiveViewElement:(id)arg1 ;
@end

