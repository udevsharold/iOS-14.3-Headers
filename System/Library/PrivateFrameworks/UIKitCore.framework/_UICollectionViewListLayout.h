/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKitCore/_UICollectionViewLayoutInteractionStateModuleHost.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult, UITableConstants;
@class _UICollectionViewListLayoutVisualProvider, NSSet, UIColor, _UICollectionViewListSnapshotter, _UICollectionViewListSeparatorDiff, _UICollectionCompositionalLayoutSolverUpdate, _UICollectionViewLayoutInteractionStateModule, _UIUpdateVisibleCellsContext, UIVisualEffect, _UICollectionCompositionalLayoutSolver, NSMutableDictionary, NSArray, NSString;

@interface _UICollectionViewListLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost> {

	struct {
		unsigned prepareSnapshotNeeded : 1;
		unsigned prepareSolverNeeded : 1;
		unsigned usesCustomSeparatorColor : 1;
		unsigned usesCustomSeparatorStyle : 1;
	}  _tableLayoutFlags;
	_UICollectionViewListLayoutVisualProvider* _visualProvider;
	NSSet* _floatingElementKinds;
	UIColor* _separatorColor;
	UIColor* _darkenedSeparatorColor;
	UIEdgeInsets _sectionContentInset;
	UIEdgeInsets _previousLayoutMargins;
	_UICollectionViewListSnapshotter* _dataSourceSnapshot;
	_UICollectionViewListSnapshotter* _previousDataSourceSnapshot;
	_UICollectionViewListSeparatorDiff* _currentUpdateDiff;
	_UICollectionCompositionalLayoutSolverUpdate* _currentUpdate;
	id<_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
	_UICollectionViewLayoutInteractionStateModule* _interactionStateModule;
	_UIUpdateVisibleCellsContext* _updateVisibleCellsContext;
	BOOL _cellLayoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _insetTopAndBottomSeparator;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	id<UITableConstants> _constants;
	double _globalHeaderHeight;
	double _globalFooterHeight;
	long long _separatorStyle;
	UIVisualEffect* _separatorEffect;
	long long _appearanceStyle;
	double _estimatedGlobalHeaderHeight;
	double _estimatedGlobalFooterHeight;
	_UICollectionCompositionalLayoutSolver* _solver;
	NSMutableDictionary* _layoutSections;
	UIEdgeInsets _separatorInset;

}

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                          //@synthesize constants=_constants - In the implementation block
@property (setter=_setSolver:,getter=_solver,nonatomic,retain) _UICollectionCompositionalLayoutSolver * solver;                         //@synthesize solver=_solver - In the implementation block
@property (getter=_layoutSections,nonatomic,readonly) NSMutableDictionary * layoutSections;                                             //@synthesize layoutSections=_layoutSections - In the implementation block
@property (getter=_delegateActual,nonatomic,readonly) id<_UICollectionViewDelegateListLayout> delegateActual; 
@property (getter=_delegateProxy,nonatomic,readonly) id<_UICollectionViewDelegateListLayout> delegateProxy; 
@property (getter=_dataSourceActual,nonatomic,readonly) id<UICollectionViewDataSource> dataSourceActual; 
@property (getter=_dataSourceProxy,nonatomic,readonly) id<UICollectionViewDataSource> dataSourceProxy; 
@property (getter=_insetTopAndBottomSeparator,nonatomic,readonly) BOOL insetTopAndBottomSeparator;                                      //@synthesize insetTopAndBottomSeparator=_insetTopAndBottomSeparator - In the implementation block
@property (setter=_setFloatingElementKinds:,getter=_floatingElementKinds,nonatomic,retain) NSArray * floatingElementKinds; 
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                               //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) double globalHeaderHeight;                                                                                 //@synthesize globalHeaderHeight=_globalHeaderHeight - In the implementation block
@property (assign,nonatomic) double globalFooterHeight;                                                                                 //@synthesize globalFooterHeight=_globalFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                  //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                          //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (nonatomic,readonly) long long appearanceStyle;                                                                               //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (assign,nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;                                                                 //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                                                                         //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;                                                                  //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                 //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                       //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                       //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (assign,nonatomic) double estimatedGlobalHeaderHeight;                                                                        //@synthesize estimatedGlobalHeaderHeight=_estimatedGlobalHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedGlobalFooterHeight;                                                                        //@synthesize estimatedGlobalFooterHeight=_estimatedGlobalFooterHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(double)_interactionStateModule:(id)arg1 spacingAfterLayoutSection:(long long)arg2 ;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(CGPoint)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(long long)_numberOfSections;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(BOOL)_estimatesSizes;
-(void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2 ;
-(BOOL)insetsContentViewsToSafeArea;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)allowsMultipleSelection;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)_estimatesSupplementaryItems;
-(id)_constants;
-(void)_transformDecorationLayoutAttributes:(id)arg1 ;
-(void)prepareLayout;
-(void)_transformCellLayoutAttributes:(id)arg1 ;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)_scrollView;
-(void)_setCollectionView:(id)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)_interactionStateModule:(id)arg1 layoutSectionForIndex:(long long)arg2 ;
-(double)estimatedRowHeight;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(BOOL)_shouldInvalidateLayoutForBoundsSizeChange:(CGRect)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(double)sectionHeaderHeight;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(void)setSectionFooterHeight:(double)arg1 ;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)_solver;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)_willPerformUpdateVisibleCellsPass;
-(id)_multiselectCheckmarkColor;
-(BOOL)canBeEdited;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(void)_transformSupplementaryLayoutAttributes:(id)arg1 ;
-(void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2 ;
-(id)_floatingElementKinds;
-(id)init;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(void)_darkenedColorsChanged:(id)arg1 ;
-(void)dealloc;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(double)_separatorHeight;
-(id)_preferredLayoutSectionForLayoutSection:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)isEditing;
-(void)setRowHeight:(double)arg1 ;
-(void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(id)_delegateProxy;
-(double)sectionFooterHeight;
-(long long)separatorStyle;
-(id)_delegateActual;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(double)rowHeight;
-(BOOL)_shouldApplyReadableWidthInsets;
-(id)initWithAppearanceStyle:(long long)arg1 ;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(void)_setSolver:(id)arg1 ;
-(id)_accessoryBaseColor;
-(UIEdgeInsets)separatorInset;
-(void)_updateConstants;
-(long long)appearanceStyle;
-(UIColor *)separatorColor;
-(long long)_tableStyle;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)_constantsDidChange;
-(id)_dataSourceProxy;
-(void)_updateSolver;
-(void)_prepareSolver;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(double)estimatedSectionFooterHeight;
-(BOOL)_shouldDrawThickSeparators;
-(id)_layoutSections;
-(void)_prepareSnapshot;
-(id)_layoutContainer;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)_configureDefaultGradientMask;
-(id)_layoutSectionAtIndex:(long long)arg1 ;
-(double)_sectionSpacingForAppearanceStyle;
-(UIEdgeInsets)_globalInsetsForAppearanceStyle;
-(id)_sectionConfigurationForSection:(long long)arg1 ;
-(void)_addPinningBehaviorToLayout:(id)arg1 forSection:(long long)arg2 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(double)_effectiveEstimatedGlobalHeaderHeight;
-(double)_effectiveEstimatedGlobalFooterHeight;
-(id)_dataSourceActual;
-(void)_enrichCellLayoutAttributes:(id)arg1 ;
-(void)_enrichHeaderFooterLayoutAttributes:(id)arg1 ;
-(void)_separatorColorDidChange;
-(double)_defaultGlobalHeaderHeight;
-(double)_defaultGlobalFooterHeight;
-(id)_actualLayoutSectionAtIndex:(long long)arg1 ;
-(void)setGlobalHeaderHeight:(double)arg1 ;
-(void)setGlobalFooterHeight:(double)arg1 ;
-(double)globalHeaderHeight;
-(double)estimatedGlobalHeaderHeight;
-(void)setEstimatedGlobalHeaderHeight:(double)arg1 ;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedGlobalFooterHeight;
-(void)setEstimatedGlobalFooterHeight:(double)arg1 ;
-(id)_globalSupplementaryItems;
-(BOOL)_insetTopAndBottomSeparator;
-(double)globalFooterHeight;
@end

