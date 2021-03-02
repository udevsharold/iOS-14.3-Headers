/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryHosting.h>
#import <UIKitCore/_UIDynamicReferenceSystem.h>

@class _UICollectionLayoutContainer, UITraitCollection, _UIDataSourceSnapshotter, NSIndexSet, _UICollectionCompositionalLayoutSolverOptions, _UICollectionCompositionalLayoutDynamicAnimator, _UICollectionLayoutDynamicsConfiguration, NSArray, _UIRTree, _UICollectionLayoutSectionGeometryTranslator, NSMutableDictionary, _UICollectionLayoutAuxillaryItemSolver, _UICollectionPreferredSizes, NSString;

@interface _UICollectionCompositionalLayoutSolver : NSObject <_UICollectionLayoutAuxillaryHosting, _UIDynamicReferenceSystem> {

	BOOL _estimatesSizes;
	BOOL _hasOrthogonalScrollingSections;
	BOOL _shouldPerformPhysicalRTLTransforms;
	BOOL _roundsToScreenScale;
	BOOL _layoutRTL;
	/*^block*/id _cellLayoutAttributesTransformer;
	/*^block*/id _sectionDecorationLayoutAttributesTransformer;
	/*^block*/id _sectionSupplementaryLayoutAttributesTransformer;
	_UICollectionLayoutContainer* _container;
	UITraitCollection* _traitCollection;
	unsigned long long _layoutAxis;
	_UIDataSourceSnapshotter* _dataSourceSnapshot;
	double _interSectionSpacing;
	NSIndexSet* _orthogonalScrollingSectionIndexes;
	/*^block*/id _dynamicsConfigurationHandler;
	_UICollectionCompositionalLayoutSolverOptions* _options;
	Class _layoutAttributeClass;
	Class _invalidationContextClass;
	/*^block*/id _invalidationHandler;
	double _memoizedScreenScale;
	/*^block*/id _sectionProvider;
	NSIndexSet* _solutionBookmarkIndexesWithPinnedSupplementaryItems;
	_UICollectionCompositionalLayoutDynamicAnimator* _dynamicAnimator;
	_UICollectionLayoutDynamicsConfiguration* _dynamicsConfiguration;
	NSArray* _solutionBookmarks;
	_UIRTree* _sectionIndexer;
	_UICollectionLayoutSectionGeometryTranslator* _sectionGeometryTranslator;
	NSMutableDictionary* _cachedItemAttributes;
	NSMutableDictionary* _cachedSupplementaryAttributes;
	NSMutableDictionary* _cachedDecorationAttributes;
	NSArray* _globalSupplementaryItems;
	_UICollectionLayoutAuxillaryItemSolver* _globalSupplementarySolver;
	_UICollectionPreferredSizes* _globalSupplementaryPreferredSizes;
	long long _numberOfSectionsWithTransformVisibleItemsHandler;
	CGSize _actualContentSize;

}

@property (nonatomic,retain) _UICollectionCompositionalLayoutSolverOptions * options;                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutContainer * container;                                              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long layoutAxis;                                                         //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshot;                                         //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (nonatomic,retain) Class layoutAttributeClass;                                                            //@synthesize layoutAttributeClass=_layoutAttributeClass - In the implementation block
@property (nonatomic,retain) Class invalidationContextClass;                                                        //@synthesize invalidationContextClass=_invalidationContextClass - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double memoizedScreenScale;                                                            //@synthesize memoizedScreenScale=_memoizedScreenScale - In the implementation block
@property (assign,nonatomic) BOOL roundsToScreenScale;                                                              //@synthesize roundsToScreenScale=_roundsToScreenScale - In the implementation block
@property (nonatomic,copy) id sectionProvider;                                                                      //@synthesize sectionProvider=_sectionProvider - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                                                        //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) CGSize actualContentSize;                                                              //@synthesize actualContentSize=_actualContentSize - In the implementation block
@property (assign,nonatomic) BOOL estimatesSizes;                                                                   //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,retain) NSIndexSet * solutionBookmarkIndexesWithPinnedSupplementaryItems;                      //@synthesize solutionBookmarkIndexesWithPinnedSupplementaryItems=_solutionBookmarkIndexesWithPinnedSupplementaryItems - In the implementation block
@property (nonatomic,retain) _UICollectionCompositionalLayoutDynamicAnimator * dynamicAnimator;                     //@synthesize dynamicAnimator=_dynamicAnimator - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutDynamicsConfiguration * dynamicsConfiguration;                      //@synthesize dynamicsConfiguration=_dynamicsConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * solutionBookmarks;                                                           //@synthesize solutionBookmarks=_solutionBookmarks - In the implementation block
@property (nonatomic,retain) _UIRTree * sectionIndexer;                                                             //@synthesize sectionIndexer=_sectionIndexer - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutSectionGeometryTranslator * sectionGeometryTranslator;              //@synthesize sectionGeometryTranslator=_sectionGeometryTranslator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedItemAttributes;                                            //@synthesize cachedItemAttributes=_cachedItemAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedSupplementaryAttributes;                                   //@synthesize cachedSupplementaryAttributes=_cachedSupplementaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedDecorationAttributes;                                      //@synthesize cachedDecorationAttributes=_cachedDecorationAttributes - In the implementation block
@property (nonatomic,retain) NSArray * globalSupplementaryItems;                                                    //@synthesize globalSupplementaryItems=_globalSupplementaryItems - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutAuxillaryItemSolver * globalSupplementarySolver;                    //@synthesize globalSupplementarySolver=_globalSupplementarySolver - In the implementation block
@property (nonatomic,retain) _UICollectionPreferredSizes * globalSupplementaryPreferredSizes;                       //@synthesize globalSupplementaryPreferredSizes=_globalSupplementaryPreferredSizes - In the implementation block
@property (assign,nonatomic) long long numberOfSectionsWithTransformVisibleItemsHandler;                            //@synthesize numberOfSectionsWithTransformVisibleItemsHandler=_numberOfSectionsWithTransformVisibleItemsHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformPhysicalRTLTransforms;                                               //@synthesize shouldPerformPhysicalRTLTransforms=_shouldPerformPhysicalRTLTransforms - In the implementation block
@property (assign,nonatomic) BOOL hasOrthogonalScrollingSections;                                                   //@synthesize hasOrthogonalScrollingSections=_hasOrthogonalScrollingSections - In the implementation block
@property (nonatomic,retain) NSIndexSet * orthogonalScrollingSectionIndexes;                                        //@synthesize orthogonalScrollingSectionIndexes=_orthogonalScrollingSectionIndexes - In the implementation block
@property (nonatomic,copy) id cellLayoutAttributesTransformer;                                                      //@synthesize cellLayoutAttributesTransformer=_cellLayoutAttributesTransformer - In the implementation block
@property (nonatomic,copy) id sectionDecorationLayoutAttributesTransformer;                                         //@synthesize sectionDecorationLayoutAttributesTransformer=_sectionDecorationLayoutAttributesTransformer - In the implementation block
@property (nonatomic,copy) id sectionSupplementaryLayoutAttributesTransformer;                                      //@synthesize sectionSupplementaryLayoutAttributesTransformer=_sectionSupplementaryLayoutAttributesTransformer - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;                                                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) double interSectionSpacing;                                                          //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) BOOL hasPinnedSupplementaryItems; 
@property (nonatomic,readonly) NSArray * layoutAttributesForPinnedSupplementaryItems; 
@property (nonatomic,readonly) BOOL shouldTransformVisibleItemsDuringContentOffsetChanges; 
@property (nonatomic,readonly) BOOL shouldUpdateVisibleBoundsForDynamicAnimator; 
@property (nonatomic,copy) id dynamicsConfigurationHandler;                                                         //@synthesize dynamicsConfigurationHandler=_dynamicsConfigurationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
-(void)_solve;
-(id)visualDescription;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)auxillaryHostContainer;
-(unsigned long long)layoutAxis;
-(unsigned long long)auxillaryHostLayoutAxis;
-(id)auxillaryHostAuxillaryItems;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(_UIDataSourceSnapshotter *)dataSourceSnapshot;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(BOOL)auxillaryHostShouldLayoutRTL;
-(id)auxillaryHostSupplementaryEnroller;
-(CGSize)auxillaryHostContentSize;
-(void)setSectionGeometryTranslator:(_UICollectionLayoutSectionGeometryTranslator *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(long long)auxillaryHostAuxillaryKind;
-(CGSize)auxillaryHostPinningContentSize;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(BOOL)roundsToScreenScale;
-(id)auxillaryHostPreferredSizes;
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(id)dynamicsConfigurationHandler;
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(void)setActualContentSize:(CGSize)arg1 ;
-(BOOL)orthogonalScrollingUsesCustomContentOffsetForSection:(long long)arg1 ;
-(void)setCachedSupplementaryAttributes:(NSMutableDictionary *)arg1 ;
-(void)setEstimatesSizes:(BOOL)arg1 ;
-(BOOL)hasPinnedSupplementaryItems;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)layoutRTL;
-(BOOL)_supportsSwipeActionsForIndexPath:(id)arg1 ;
-(BOOL)estimatesSizes;
-(void)_willBeginSwiping;
-(void)setInvalidationContextClass:(Class)arg1 ;
-(void)_didEndSwiping;
-(void)setDynamicsConfigurationHandler:(id)arg1 ;
-(BOOL)_wantsSwipeActions;
-(void)_registerDecorationItemsIfNeeded:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
-(_UICollectionLayoutContainer *)container;
-(double)interSectionSpacing;
-(id)mutatedVisibleItemsForElementsForVisibleBounds:(CGRect)arg1 ;
-(void)setContainer:(_UICollectionLayoutContainer *)arg1 ;
-(id)_cachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2 ;
-(NSMutableDictionary *)cachedDecorationAttributes;
-(void)_updateBookmarkOffsetsForGlobalSupplementariesIfNeeded;
-(void)invalidateCachedSupplementaryAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(void)setOrthogonalOffset:(CGPoint)arg1 forSection:(long long)arg2 ;
-(BOOL)updatePreferredSizeIfNeededForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)_applyPreferredSizingCustomizationsToLayoutAttributes:(id)arg1 atIndexPath:(id)arg2 ;
-(id)resolveForInvalidatedPreferredAttributes:(id)arg1 scrollOffset:(CGPoint)arg2 visibleRect:(CGRect)arg3 ;
-(void)_updateResultNotingInsertedItemAndSectionAuxillaries:(id)arg1 forVisibleGroupAuxillaryAttributesBeforeResolve:(id)arg2 withUpdate:(id)arg3 ;
-(void)invalidateCachedDecorationAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2 ;
-(id)_cachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2 ;
-(id)_rebasedPreferredSizesWithUpdate:(id)arg1 ;
-(Class)invalidationContextClass;
-(long long)numberOfSectionsWithTransformVisibleItemsHandler;
-(void)invalidateCachedDecorationAttributes;
-(CGSize)_clampedSolutionSizeForSolution:(id)arg1 layoutAxis:(unsigned long long)arg2 scrollsOrthogonally:(BOOL)arg3 ;
-(CGRect)bounds;
-(CGSize)contentSize;
-(NSIndexSet *)solutionBookmarkIndexesWithPinnedSupplementaryItems;
-(void)setHasOrthogonalScrollingSections:(BOOL)arg1 ;
-(id)_createAndCacheLayoutAttributesForSupplementaryItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(CGRect)arg3 zIndex:(long long)arg4 ;
-(id)_createAndCacheLayoutAttributesForDecorationItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(CGRect)arg3 additionalContentInset:(NSDirectionalEdgeInsets)arg4 zIndex:(long long)arg5 ;
-(id)_snapshotBookmarks:(id)arg1 ;
-(BOOL)_sectionHasBackgroundDecorationView:(long long)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
-(double)orthogonalScrollingPagingDimensionForSection:(long long)arg1 ;
-(CGPoint)_attributesOffsetFromContainer;
-(void)setSectionDecorationLayoutAttributesTransformer:(id)arg1 ;
-(void)setSolutionBookmarks:(NSArray *)arg1 ;
-(CGRect)layoutRectForSection:(long long)arg1 ;
-(BOOL)_canResolveWithoutQueryingSectionDefintionsForContainerChange;
-(BOOL)shouldTransformVisibleItemsDuringContentOffsetChanges;
-(_UICollectionPreferredSizes *)globalSupplementaryPreferredSizes;
-(id)resolveForMarginsChange:(id)arg1 ;
-(void)setGlobalSupplementarySolver:(_UICollectionLayoutAuxillaryItemSolver *)arg1 ;
-(void)_layoutAttributesForElementsInRect:(CGRect)arg1 handler:(/*^block*/id)arg2 ;
-(id)_existingSectionDefinitionForSectionIndex:(unsigned long long)arg1 ;
-(void)setGlobalSupplementaryItems:(NSArray *)arg1 ;
-(BOOL)shouldUpdateVisibleBoundsForDynamicAnimator;
-(Class)layoutAttributeClass;
-(void)setCachedItemAttributes:(NSMutableDictionary *)arg1 ;
-(BOOL)hasOrthogonalScrollingSections;
-(id)sectionProvider;
-(id)_rebasedSectionLayoutsWithDataSourceTranslator:(id)arg1 ;
-(CGPoint)_globalSupplementaryFrameOffset;
-(CGSize)effectiveContentSizeForSection:(long long)arg1 ;
-(id)sectionSupplementaryLayoutAttributesTransformer;
-(NSArray *)solutionBookmarks;
-(void)invalidateCachedSupplementaryAttributes;
-(void)setLayoutAttributeClass:(Class)arg1 ;
-(void)setShouldPerformPhysicalRTLTransforms:(BOOL)arg1 ;
-(void)invalidateCachedItemsAttributes;
-(id)_createAndCacheLayoutAttributesForItemAtIndexPath:(id)arg1 frame:(CGRect)arg2 zIndex:(long long)arg3 ;
-(id)resolveForEndInteractiveReorderingForTargetIndexPaths:(id)arg1 ;
-(void)setCachedDecorationAttributes:(NSMutableDictionary *)arg1 ;
-(NSDirectionalEdgeInsets)contentInsetsForSection:(long long)arg1 ;
-(id)_resolveOptionallyQueryingForSectionDefintions:(BOOL)arg1 ;
-(id)_updateResultsNotingDeletedItemAndSectionAuxillaries:(id)arg1 returningStartingGroupAuxillariesForUpdate:(id)arg2 ;
-(CGPoint)orthogonalContentOffsetForProposedContentOffset:(CGPoint)arg1 section:(long long)arg2 ;
-(void)_configureLayoutForSections:(id)arg1 ;
-(void)setCellLayoutAttributesTransformer:(id)arg1 ;
-(long long)orthogonalScrollingBehaviorForSection:(long long)arg1 ;
-(void)setMemoizedScreenScale:(double)arg1 ;
-(double)memoizedScreenScale;
-(void)setSectionIndexer:(_UIRTree *)arg1 ;
-(BOOL)orthogonalScrollingSectionSupplementaryShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(double)_rootGroupDimensionForOrthogonalSection:(long long)arg1 ;
-(id)_attributesQueryInfosForQueryRect:(CGRect)arg1 ;
-(CGPoint)_firstBookmarkOffset;
-(CGRect)orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2 ;
-(UITraitCollection *)traitCollection;
-(id)_queryClientForSectionDefintionForSectionIndex:(long long)arg1 ;
-(void)_setCachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3 ;
-(CGPoint)orthogonalOffsetForSection:(long long)arg1 ;
-(void)setGlobalSupplementaryPreferredSizes:(_UICollectionPreferredSizes *)arg1 ;
-(double)orthogonalScrollingDecelerationRateForSection:(long long)arg1 ;
-(id)resolveForUpdatedGlobalSupplementaries:(id)arg1 ;
-(void)_invalidateAttributes:(id)arg1 ;
-(CGRect)_dynamicReferenceBounds;
-(CGVector)scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1 ;
-(void)setSolutionBookmarkIndexesWithPinnedSupplementaryItems:(NSIndexSet *)arg1 ;
-(NSMutableDictionary *)cachedItemAttributes;
-(id)restorableState;
-(void)setOptions:(_UICollectionCompositionalLayoutSolverOptions *)arg1 ;
-(_UICollectionLayoutAuxillaryItemSolver *)globalSupplementarySolver;
-(BOOL)elementShouldAppearAbove:(id)arg1 ;
-(NSArray *)layoutAttributesForPinnedSupplementaryItems;
-(CGRect)contentFrameForSection:(long long)arg1 ;
-(id)orthogonalSectionStateForSection:(long long)arg1 ;
-(CGRect)_attributesQueryRectForRect:(CGRect)arg1 ;
-(id)updatePinnedSectionSupplementaryItemsForVisibleBounds:(CGRect)arg1 ;
-(void)setDynamicAnimator:(_UICollectionCompositionalLayoutDynamicAnimator *)arg1 ;
-(BOOL)shouldCenterOrthogonalScrollingPageForSection:(long long)arg1 ;
-(void)_setCachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3 ;
-(void)_solveWithSectionLayouts:(id)arg1 preferredSizesDict:(id)arg2 dataSourceSnapshot:(id)arg3 update:(id)arg4 ;
-(NSIndexSet *)orthogonalScrollingSectionIndexes;
-(void)setNumberOfSectionsWithTransformVisibleItemsHandler:(long long)arg1 ;
-(NSArray *)globalSupplementaryItems;
-(_UICollectionCompositionalLayoutDynamicAnimator *)dynamicAnimator;
-(CGRect)_globalFrameForSolutionFrame:(CGRect)arg1 bookmark:(id)arg2 ;
-(CGSize)actualContentSize;
-(NSMutableDictionary *)cachedSupplementaryAttributes;
-(BOOL)orthogonalScrollingSectionDecorationShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(void)_updateSectionIndexer:(id)arg1 frame:(CGRect)arg2 solution:(id)arg3 section:(long long)arg4 ;
-(void)invalidateCachedItemsAttributesForItemsAtIndexPaths:(id)arg1 ;
-(void)setDataSourceSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(void)_recomputeSolutionBookmarksAndContentSize;
-(id)initWithContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(unsigned long long)arg3 dataSourceSnapshot:(id)arg4 options:(id)arg5 sectionProvider:(/*^block*/id)arg6 ;
-(id)cellLayoutAttributesTransformer;
-(void)setSectionProvider:(id)arg1 ;
-(void)setDynamicsConfiguration:(_UICollectionLayoutDynamicsConfiguration *)arg1 ;
-(_UICollectionLayoutDynamicsConfiguration *)dynamicsConfiguration;
-(BOOL)updateVisibleBoundsForDynamicAnimator:(CGRect)arg1 previousVisibleBounds:(CGRect)arg2 ;
-(id)resolveSolutionForUpdate:(id)arg1 ;
-(void)setOrthogonalScrollingSectionIndexes:(NSIndexSet *)arg1 ;
-(void)setSectionSupplementaryLayoutAttributesTransformer:(id)arg1 ;
-(void)_invalidateAllAttributes;
-(CGSize)_adjustedContentSizeIncludingContainerInsetsForSize:(CGSize)arg1 ;
-(BOOL)shouldPerformPhysicalRTLTransforms;
-(id)resolveForContainerChange:(id)arg1 ;
-(void)prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(BOOL)shouldInvalidateForNewTraitCollection:(id)arg1 ;
-(id)sectionDecorationLayoutAttributesTransformer;
-(void)_updateGeometryTranslator;
-(_UIRTree *)sectionIndexer;
-(id)extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1 ;
-(id)_resolveOptionallyQueryingForSectionDefintions:(BOOL)arg1 retainPreferredSizing:(BOOL)arg2 ;
-(id)invalidationHandler;
-(void)_restoreStateFromBookmarkSnapshots:(id)arg1 bookmarks:(id)arg2 update:(id)arg3 ;
-(_UICollectionCompositionalLayoutSolverOptions *)options;
@end
