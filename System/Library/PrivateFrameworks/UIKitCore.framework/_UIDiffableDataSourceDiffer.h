/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIDiffableDataSourceDiffer.h>
@class NSArray, _UIIdentifierDiffer, NSHashTable;


@protocol _UIDiffableDataSourceDiffer
@property (nonatomic,readonly) BOOL hasDifferences; 
@property (nonatomic,readonly) BOOL snapshotsAreRelated; 
@property (nonatomic,readonly) NSArray * updates; 
@property (nonatomic,readonly) id<_UIDiffableDataSourceState> beforeDataSourceState; 
@property (nonatomic,readonly) id<_UIDiffableDataSourceState> afterDataSourceState; 
@property (nonatomic,readonly) _UIIdentifierDiffer * itemIdentifierDiffer; 
@property (nonatomic,readonly) _UIIdentifierDiffer * sectionIdentifierDiffer; 
@property (nonatomic,readonly) NSHashTable * affectedSectionIdentifiers; 
@required
-(id<_UIDiffableDataSourceState>)afterDataSourceState;
-(NSArray *)updates;
-(BOOL)snapshotsAreRelated;
-(id<_UIDiffableDataSourceState>)beforeDataSourceState;
-(NSHashTable *)affectedSectionIdentifiers;
-(BOOL)hasDifferences;
-(_UIIdentifierDiffer *)sectionIdentifierDiffer;
-(_UIIdentifierDiffer *)itemIdentifierDiffer;

@end


@protocol _UIDiffableDataSourceState;
@class NSArray, _UIIdentifierDiffer, NSHashTable, NSIndexSet;

@interface _UIDiffableDataSourceDiffer : NSObject <_UIDiffableDataSourceDiffer> {

	id<_UIDiffableDataSourceState> _beforeDataSourceState;
	id<_UIDiffableDataSourceState> _afterDataSourceState;
	NSArray* _updates;
	_UIIdentifierDiffer* _itemIdentifierDiffer;
	_UIIdentifierDiffer* _sectionIdentifierDiffer;
	NSIndexSet* _deletedSections;
	NSIndexSet* _insertedSections;
	NSHashTable* _affectedSectionIdentifiers;

}

@property (nonatomic,retain) id<_UIDiffableDataSourceState> beforeDataSourceState;              //@synthesize beforeDataSourceState=_beforeDataSourceState - In the implementation block
@property (nonatomic,retain) id<_UIDiffableDataSourceState> afterDataSourceState;               //@synthesize afterDataSourceState=_afterDataSourceState - In the implementation block
@property (nonatomic,retain) NSArray * updates;                                                 //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) _UIIdentifierDiffer * itemIdentifierDiffer;                        //@synthesize itemIdentifierDiffer=_itemIdentifierDiffer - In the implementation block
@property (nonatomic,retain) _UIIdentifierDiffer * sectionIdentifierDiffer;                     //@synthesize sectionIdentifierDiffer=_sectionIdentifierDiffer - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedSections;                                      //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedSections;                                     //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,retain) NSHashTable * affectedSectionIdentifiers;                          //@synthesize affectedSectionIdentifiers=_affectedSectionIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasDifferences; 
@property (nonatomic,readonly) BOOL snapshotsAreRelated; 
+(id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 itemIdentifierDiffer:(id)arg3 ;
+(id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 ;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(id<_UIDiffableDataSourceState>)afterDataSourceState;
-(BOOL)_verifyForUpdates:(id)arg1 ;
-(void)setUpdates:(NSArray *)arg1 ;
-(id)_sectionUpdatesForDiffResults:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3 ;
-(id)initWithBeforeDataSource:(id)arg1 afterDataSource:(id)arg2 itemIdentifierDiffer:(id)arg3 ;
-(void)setBeforeDataSourceState:(id<_UIDiffableDataSourceState>)arg1 ;
-(void)setAffectedSectionIdentifiers:(NSHashTable *)arg1 ;
-(void)setSectionIdentifierDiffer:(_UIIdentifierDiffer *)arg1 ;
-(id)description;
-(NSArray *)updates;
-(BOOL)snapshotsAreRelated;
-(void)setAfterDataSourceState:(id<_UIDiffableDataSourceState>)arg1 ;
-(id<_UIDiffableDataSourceState>)beforeDataSourceState;
-(void)_computeUpdates;
-(NSHashTable *)affectedSectionIdentifiers;
-(NSIndexSet *)deletedSections;
-(BOOL)hasDifferences;
-(void)setItemIdentifierDiffer:(_UIIdentifierDiffer *)arg1 ;
-(_UIIdentifierDiffer *)sectionIdentifierDiffer;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
-(id)_computeUpdatesForIdentifierBasedDiff;
-(NSIndexSet *)insertedSections;
-(id)_computeSectionBoundaryMovesForItemDiffer:(id)arg1 ;
-(id)_itemUpdatesForDiffResults:(id)arg1 sectionBoundaryMoves:(id)arg2 deletedSections:(id)arg3 insertedSections:(id)arg4 ;
-(_UIIdentifierDiffer *)itemIdentifierDiffer;
@end
