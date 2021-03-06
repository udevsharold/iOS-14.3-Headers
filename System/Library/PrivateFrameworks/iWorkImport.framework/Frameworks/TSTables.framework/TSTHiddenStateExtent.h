/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSCEFormulaOwning.h>
#import <TSTables/TSTGroupByChangeProtocol.h>

@class TSTTableFilterSet, TSUMutableUUIDSet, TSTHiddenStatesOwner, TSCECalculationEngine, TSTTableInfo, NSMutableIndexSet, NSMutableArray, TSUUUIDSet, NSArray, NSString;

@interface TSTHiddenStateExtent : NSObject <TSCEFormulaOwning, TSTGroupByChangeProtocol> {

	UUIDData<TSP::UUIDData> _hiddenStateExtentUid;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned char, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned char> > >* _hiddenByUid;
	BOOL _forRows;
	TSTTableFilterSet* _filterSet;
	TSUMutableUUIDSet* _collapsedGroupUids;
	UUIDData<TSP::UUIDData> _hiddenStatesOwnerUid;
	TSTHiddenStatesOwner* _hiddenStatesOwner;
	TSCECalculationEngine* _calcEngine;
	TSTTableInfo* _tableInfo;
	NSMutableIndexSet* _baseUserHiddenIndexes;
	NSMutableIndexSet* _baseFilteredIndexes;
	NSMutableIndexSet* _anyBaseHiddenIndexes;
	opaque_pthread_mutex_t _viewIndexesMutex;
	NSMutableIndexSet* _userHiddenIndexes;
	NSMutableIndexSet* _filteredIndexes;
	NSMutableIndexSet* _anyHiddenIndexes;
	NSMutableIndexSet* _collapsedRowIndexes;
	NSMutableArray* _thresholdCellValues;
	BOOL _needsToUpdateFilterSetForImport;
	TSTTableFilterSet* _rewrittenFilterSet;
	os_unfair_lock_s _pendingComputedLock;
	TSUIndexSet* _pendingRowsShown;
	TSUIndexSet* _pendingRowsHidden;
	vector<TSUCellRect, std::__1::allocator<TSUCellRect> >* _cellRangesToInvalidate;
	BOOL _invalidateViewGeometry;
	BOOL _invalidateCollapsedRows;

}

@property (assign,nonatomic,__weak) TSTHiddenStatesOwner * hiddenStatesOwner;              //@synthesize hiddenStatesOwner=_hiddenStatesOwner - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateFilterSetForImport;                         //@synthesize needsToUpdateFilterSetForImport=_needsToUpdateFilterSetForImport - In the implementation block
@property (assign,nonatomic) UUIDData<TSP::UUIDData> hiddenStateExtentUid;                 //@synthesize hiddenStateExtentUid=_hiddenStateExtentUid - In the implementation block
@property (nonatomic,readonly) BOOL forRows;                                               //@synthesize forRows=_forRows - In the implementation block
@property (nonatomic,readonly) BOOL anyHidden; 
@property (nonatomic,readonly) BOOL anyUserHidden; 
@property (nonatomic,readonly) BOOL anyCollapsed; 
@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSUUUIDSet * collapsedGroupUids;                            //@synthesize collapsedGroupUids=_collapsedGroupUids - In the implementation block
@property (nonatomic,readonly) NSArray * thresholdCellValues;                              //@synthesize thresholdCellValues=_thresholdCellValues - In the implementation block
@property (nonatomic,readonly) unsigned numberOfHidden; 
@property (nonatomic,readonly) unsigned numberOfUserHidden; 
@property (nonatomic,retain) TSTTableFilterSet * filterSet; 
@property (assign,nonatomic) BOOL needsFilterFormulaRewriteForImport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mutableIndexSetByIntersecting:(id)arg1 withRange:(NSRange)arg2 ;
+(void)swapIndexesWithIndexSet:(id)arg1 index:(unsigned long long)arg2 withIndex:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)filteredIndexes;
-(long long)evaluationMode;
-(TSTTableInfo *)tableInfo;
-(void)setTableInfo:(TSTTableInfo *)arg1 ;
-(void)encodeToArchive:(HiddenStateExtentArchive*)arg1 archiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)ownerUID;
-(unsigned short)ownerKind;
-(id)linkedResolver;
-(void)writeResultsForCalcEngine:(id)arg1 ;
-(void)invalidateForCalcEngine:(id)arg1 ;
-(TSCERecalculationState)evaluateFormulaAt:(TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(TSCERecalculationState)arg3 ;
-(void)unregisterFromCalcEngine;
-(void)didAddRowUID:(const UUIDData<TSP::UUIDData>*)arg1 toGroup:(id)arg2 ;
-(void)didRemoveRowUID:(const UUIDData<TSP::UUIDData>*)arg1 fromGroup:(id)arg2 ;
-(TSTHiddenStatesOwner *)hiddenStatesOwner;
-(void)startOfGroupingChangesBatch;
-(void)endOfGroupingChangesBatch;
-(BOOL)needsToUpdateFilterSetForImport;
-(void)remapTableUIDsInFormulasWithMap:(const UUIDMap<TSP::UUIDMap>*)arg1 calcEngine:(id)arg2 ;
-(BOOL)hasActiveFilters;
-(TSTTableFilterSet *)filterSet;
-(int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)filterSetUpdated;
-(void)setFilterSet:(TSTTableFilterSet *)arg1 ;
-(id)duplicateFilterSetInUidFormWithTable:(id)arg1 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)dirtyFilterState;
-(BOOL)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2 ;
-(BOOL)hideAtViewIndex:(TSUViewColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(id)applyCollapseExpandState:(id)arg1 outUndoState:(id*)arg2 ;
-(void)willChangeGroupByTo:(id)arg1 ;
-(id)collapseSummaryGroupUIDs:(id)arg1 ;
-(id)expandSummaryGroupUIDs:(id)arg1 ;
-(BOOL)isCategoryGroupOrParentsCollapsed:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)setNeedsToUpdateFilterSetForImport:(BOOL)arg1 ;
-(id)duplicateFilterSet;
-(BOOL)needsFilterFormulaRewriteForImport;
-(void)setNeedsFilterFormulaRewriteForImport:(BOOL)arg1 ;
-(void)enableFilterSet:(BOOL)arg1 ;
-(NSArray *)thresholdCellValues;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg1 ;
-(void)willRemoveGroup:(id)arg1 ;
-(void)didRemoveGroup:(id)arg1 ;
-(void)loadIndexesFromTable:(id)arg1 ;
-(UUIDData<TSP::UUIDData>)hiddenStateExtentUid;
-(id)initWithArchive:(const HiddenStateExtentArchive*)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3 ;
-(id)initWithHiddenStatesOwner:(id)arg1 forRows:(BOOL)arg2 ;
-(BOOL)showAtViewIndex:(TSUViewColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)hideAtBaseIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)showAtBaseIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(unsigned char)hidingActionForViewIndex:(TSUViewColumnOrRowIndex)arg1 ;
-(unsigned char)hidingActionForBaseIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(id)indexesOfHiddenInRange:(NSRange)arg1 ;
-(id)indexesOfUserHiddenInRange:(NSRange)arg1 ;
-(id)indexesOfFilteredInRange:(NSRange)arg1 ;
-(id)indexesOfVisibleInRange:(NSRange)arg1 ;
-(id)indexesOfUserVisibleInRange:(NSRange)arg1 ;
-(id)indexesOfVisibleIndexesInIndexes:(id)arg1 ;
-(id)indexesOfCollapsedInRange:(NSRange)arg1 ;
-(unsigned)numberOfHiddenInRange:(NSRange)arg1 ;
-(unsigned)numberOfUserHiddenInRange:(NSRange)arg1 ;
-(BOOL)anyHiddenInRange:(NSRange)arg1 ;
-(BOOL)anyHiddenInRange:(NSRange)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)hasHiddenAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleBeforeIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleBeforeAndIncludingIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleAfterIndex:(unsigned)arg1 ;
-(unsigned)indexOfVisibleAfterAndIncludingIndex:(unsigned)arg1 ;
-(unsigned)numberOfHiddenInBaseRange:(NSRange)arg1 ;
-(id)indexesOfHiddenInBaseRange:(NSRange)arg1 ;
-(unsigned)numberOfUserHiddenInBaseRange:(NSRange)arg1 ;
-(void)syncUpHiddenStateFormulaOwnerUIDs;
-(void)setHiddenStateExtentUid:(UUIDData<TSP::UUIDData>)arg1 ;
-(BOOL)isCategoryGroupUIDCollapsed:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)setCategoryGroupUID:(const UUIDData<TSP::UUIDData>*)arg1 asCollapsed:(BOOL)arg2 ;
-(TSUUUIDSet *)collapsedGroupUids;
-(id)copyCollapsedStateToUpdatedGroupUids:(id)arg1 ;
-(id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id*)arg3 ;
-(void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dirtyFilterStateForHeaders;
-(void)dirtyFilterStateForFooters;
-(BOOL)anyCollapsed;
-(BOOL)anyHidden;
-(BOOL)anyUserHidden;
-(unsigned)numberOfHidden;
-(unsigned)numberOfUserHidden;
-(void)insertBaseRange:(NSRange)arg1 ;
-(void)deleteBaseRange:(NSRange)arg1 withUids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 ;
-(void)moveViewRangeOnlyFrom:(NSRange)arg1 toIndex:(TSUViewColumnOrRowIndex)arg2 ;
-(void)moveBaseRangeFrom:(NSRange)arg1 toIndex:(TSUModelColumnOrRowIndex)arg2 ;
-(void)swapBaseIndex:(TSUModelColumnOrRowIndex)arg1 withIndex:(TSUModelColumnOrRowIndex)arg2 ;
-(id)mutableUserHiddenIndexes;
-(id)mutableFilteredIndexes;
-(id)mutableAnyHiddenIndexes;
-(void)setHiddenStatesOwner:(TSTHiddenStatesOwner *)arg1 ;
-(BOOL)forRows;
-(void)p_registerAllFormulaToCalculationEngine;
-(TSUViewColumnOrRowIndex)viewIndexForBaseIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(BOOL)hideAtUid:(const UUIDData<TSP::UUIDData>*)arg1 forIndex:(TSUModelColumnOrRowIndex)arg2 forAction:(unsigned char)arg3 ;
-(unsigned char)hidingActionForUid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)addHiddenIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(void)hiddenStateChangedForBaseIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(BOOL)showAtUid:(const UUIDData<TSP::UUIDData>*)arg1 forIndex:(TSUModelColumnOrRowIndex)arg2 forAction:(unsigned char)arg3 ;
-(void)removeHiddenIndex:(TSUModelColumnOrRowIndex)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)useCollapsedRows;
-(id)collapsedRowIndexes;
-(id)anyHiddenIndexes;
-(void)clearInvalidIndexes;
-(BOOL)hideAtUid:(const UUIDData<TSP::UUIDData>*)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)showAtUid:(const UUIDData<TSP::UUIDData>*)arg1 forAction:(unsigned char)arg2 ;
-(id)userHiddenIndexes;
-(void)dirtyFilterStateForRowRange:(NSRange)arg1 ;
-(id)precedentsForFilterSet:(id)arg1 calcEngine:(id)arg2 hostOwnerUID:(const UUIDData<TSP::UUIDData>*)arg3 hostCellID:(const TSUCellCoord*)arg4 ;
-(TSCEValue*)p_calculateAverageThresholdWithCalcEngine:(id)arg1 formulaCoord:(const TSUCellCoord*)arg2 ;
-(TSCEValue*)p_calculateTopOrBottomThresholdWithCalcEngine:(id)arg1 formulaCoord:(const TSUCellCoord*)arg2 isTop:(BOOL)arg3 keyScale:(unsigned char)arg4 ;
-(id)p_createThresholdCellValue:(TSCEValue*)arg1 locale:(id)arg2 ;
-(void)p_removeAllFormulaFromCalculationEngine;
-(TSCECellRef)cellReferenceForIndex:(TSUModelColumnOrRowIndex)arg1 ;
-(TSUModelColumnOrRowIndex)baseIndexForViewIndex:(TSUViewColumnOrRowIndex)arg1 ;
-(void)removeUid:(const UUIDData<TSP::UUIDData>*)arg1 ;
@end

