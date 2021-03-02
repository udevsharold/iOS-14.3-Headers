/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutSection.h>
#import <UIKitCore/_UICollectionLayoutSectionCallback.h>

@protocol NSCollectionLayoutEnvironment_Private;
@class _UICollectionViewListLayoutSectionConfiguration, NSString;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {

	_UICollectionViewListLayoutSectionConfiguration* _configuration;
	id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;

}

@property (getter=_layoutEnvironment,nonatomic,readonly) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;              //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(BOOL)_isRTL;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(id)_constants;
-(id)_effectiveBackgroundColor;
-(void)_configureLayoutAttributesForSidebarPlainCell:(id)arg1 ;
-(void)_willBeginSwiping;
-(void)_didEndSwiping;
-(BOOL)_wantsSwipeActions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)_defaultLayoutMarginsInsideSection;
-(UIEdgeInsets)_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)arg1 forUseAsContentInsets:(BOOL)arg2 ;
-(BOOL)__isLastItemInSection:(id)arg1 ;
-(BOOL)__isLastSection:(long long)arg1 ;
-(unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)_sectionPreferredDirectionalSeparatorInsetsForIndexPath:(id)arg1 ;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(id)_invalidationContextForBackgroundChangeAtIndexPath:(id)arg1 interactionState:(id)arg2 ;
-(NSDirectionalEdgeInsets)_defaultSectionContentInsetsForAppearanceStyle:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 layoutEnvironment:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_configureLayoutAttributesForSwipeActionMasking:(id)arg1 ;
-(BOOL)_hasHorizontalInsets;
-(NSDirectionalEdgeInsets)_effectiveSectionHorizontalInsets;
-(void)_configureLayoutAttributesWithInsetGroupedMasking:(id)arg1 stylesFirstItemAsHeader:(BOOL)arg2 ;
-(NSDirectionalEdgeInsets)_effectiveBoundarySeparatorInsetsFromConfiguration:(id)arg1 ;
-(BOOL)_adjustsLayoutToMergeWithBarInSection:(long long)arg1 interactionState:(id)arg2 ;
-(void)_enrichLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(void)_enrichPreferredLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(id)_callback;
-(NSDirectionalEdgeInsets)_defaultDirectionalLayoutMarginsInsideSection;
-(id)_layoutEnvironment;
-(id)_preferredSizingCustomizationsForItemWithLayoutAttributes:(id)arg1 interactionState:(id)arg2 ;
-(BOOL)prefersListSolver;
-(BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)arg1 interactionState:(id)arg2 ;
-(void)_configureLayoutAttributes:(id)arg1 forSeparatorAtBottom:(BOOL)arg2 interactionState:(id)arg3 ;
-(NSDirectionalEdgeInsets)_preferredSeparatorInsetsFromCellLayoutAttributes:(id)arg1 ;
-(BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)arg1 forGrouping:(unsigned long long)arg2 interactionState:(id)arg3 ;
-(void)_updateStyleForSwipeActionsConfiguration:(id)arg1 ;
-(BOOL)_useRoundedSwipeActions;
-(void)_configureLayoutAttributesWithDefaultMasking:(id)arg1 ;
-(BOOL)_shouldHideTopSeparatorAtIndexPath:(id)arg1 interactionState:(id)arg2 ;
-(void)_configureLayoutAttributesForBackgroundDecoration:(id)arg1 ;
-(BOOL)__shouldDrawSeparatorAtBottom:(BOOL)arg1 ofSection:(long long)arg2 interactionState:(id)arg3 ;
-(void)_configureLayoutAttributesForPlainCell:(id)arg1 ;
@end
