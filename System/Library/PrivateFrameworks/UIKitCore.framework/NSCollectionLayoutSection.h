/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionLayoutSectionCallback;
@class NSIndexSet, NSDictionary, NSArray, NSCollectionLayoutGroup;

@interface NSCollectionLayoutSection : NSObject <NSCopying> {

	NSIndexSet* _pinnedBoundarySupplementaryItemIndexes;
	BOOL _hasBackgroundDecorationItem;
	NSDictionary* _supplementaryItemsDict;
	NSDictionary* _decorationItemsDict;
	BOOL _isEmptySection;
	BOOL _prefersListSolver;
	BOOL _supplementariesFollowContentInsets;
	double _interGroupSpacing;
	long long _contentInsetsReference;
	long long _orthogonalScrollingBehavior;
	NSArray* _boundarySupplementaryItems;
	/*^block*/id _visibleItemsInvalidationHandler;
	NSArray* _decorationItems;
	NSCollectionLayoutGroup* _group;
	NSArray* _supplementaryItems;
	NSIndexSet* _pinnedSupplementaryItemIndexes;
	NSDictionary* _decorationItemssDict;
	id<_UICollectionLayoutSectionCallback> _callback;
	CGSize _contentSize;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSCollectionLayoutGroup * group;                                                   //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                                                      //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,copy) NSIndexSet * pinnedSupplementaryItemIndexes;                                       //@synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes - In the implementation block
@property (nonatomic,readonly) NSDictionary * supplementaryItemsDict; 
@property (nonatomic,readonly) NSDictionary * decorationItemssDict;                                           //@synthesize decorationItemssDict=_decorationItemssDict - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                              //@synthesize contentSize=_contentSize - In the implementation block
@property (getter=_callback,nonatomic,readonly) id<_UICollectionLayoutSectionCallback> callback;              //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL prefersListSolver;                                                          //@synthesize prefersListSolver=_prefersListSolver - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double interGroupSpacing;                                                        //@synthesize interGroupSpacing=_interGroupSpacing - In the implementation block
@property (assign,nonatomic) long long contentInsetsReference;                                                //@synthesize contentInsetsReference=_contentInsetsReference - In the implementation block
@property (assign,nonatomic) long long orthogonalScrollingBehavior;                                           //@synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior - In the implementation block
@property (nonatomic,copy) NSArray * boundarySupplementaryItems;                                              //@synthesize boundarySupplementaryItems=_boundarySupplementaryItems - In the implementation block
@property (assign,nonatomic) BOOL supplementariesFollowContentInsets;                                         //@synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets - In the implementation block
@property (nonatomic,copy) id visibleItemsInvalidationHandler;                                                //@synthesize visibleItemsInvalidationHandler=_visibleItemsInvalidationHandler - In the implementation block
@property (nonatomic,copy) NSArray * decorationItems;                                                         //@synthesize decorationItems=_decorationItems - In the implementation block
+(id)sectionWithListConfiguration:(id)arg1 layoutEnvironment:(id)arg2 ;
+(id)sectionWithGroup:(id)arg1 ;
+(id)_emptySection;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(void)setContentInsetsReference:(long long)arg1 ;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSArray *)supplementaryItems;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(id)visibleItemsInvalidationHandler;
-(void)_willBeginSwiping;
-(void)setBoundarySupplementaryItems:(NSArray *)arg1 ;
-(NSArray *)decorationItems;
-(void)_didEndSwiping;
-(BOOL)_wantsSwipeActions;
-(BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)contentInsets;
-(long long)contentInsetsReference;
-(BOOL)_isEmptySection;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setPrefersListSolver:(BOOL)arg1 ;
-(NSDictionary *)supplementaryItemsDict;
-(BOOL)supplementariesFollowContentInsets;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)boundarySupplementaryItems;
-(double)interGroupSpacing;
-(CGSize)contentSize;
-(void)setSupplementariesFollowContentInsets:(BOOL)arg1 ;
-(void)setInterGroupSpacing:(double)arg1 ;
-(BOOL)_hasVisibleItemsHandler;
-(void)setVisibleItemsInvalidationHandler:(id)arg1 ;
-(BOOL)scrollsOrthogonally;
-(void)setGroup:(NSCollectionLayoutGroup *)arg1 ;
-(BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
-(id)decorationItemsDict;
-(NSIndexSet *)pinnedSupplementaryItemIndexes;
-(NSDictionary *)decorationItemssDict;
-(id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
-(long long)orthogonalScrollingBehavior;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPinnedSupplementaryItemIndexes:(NSIndexSet *)arg1 ;
-(void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
-(id)initWithGroup:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 contentInsetsReference:(long long)arg3 supplementaryItems:(id)arg4 boundarySupplementartItems:(id)arg5 pinnedSupplementaryItemIndexes:(id)arg6 interGroupSpacing:(double)arg7 visibleItemsInvalidationHandler:(/*^block*/id)arg8 supplementariesFollowInsets:(BOOL)arg9 decorationItems:(id)arg10 orthogonalScrollingBehavior:(long long)arg11 isEmptySection:(BOOL)arg12 prefersListSolver:(BOOL)arg13 ;
-(NSCollectionLayoutGroup *)group;
-(BOOL)_containsBackgroundDecorationItem:(id)arg1 ;
-(id)_callback;
-(id)initWithLayoutGroup:(id)arg1 ;
-(BOOL)_containsEstimatedSizeElement;
-(id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2 ;
-(BOOL)prefersListSolver;
-(void)setOrthogonalScrollingBehavior:(long long)arg1 ;
-(id)pinnedBoundarySupplementaryItemIndexes;
-(BOOL)_hasBackgroundDecorationItem;
@end

