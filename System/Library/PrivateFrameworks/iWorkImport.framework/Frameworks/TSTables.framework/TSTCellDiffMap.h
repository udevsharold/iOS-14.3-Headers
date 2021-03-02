/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTCellDiffArray, TSTCellUIDList;

@interface TSTCellDiffMap : TSPObject <NSCopying> {

	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >* _cellIDs;
	BOOL _uidBased;
	BOOL _containsCellBorderChanges;
	BOOL _containsSuppressCustomFormatHandlingProperty;
	TSTCellDiffArray* _cellDiffArray;
	TSTCellUIDList* _cellUIDList;

}

@property (nonatomic,retain) TSTCellUIDList * cellUIDList;                                   //@synthesize cellUIDList=_cellUIDList - In the implementation block
@property (nonatomic,retain) TSTCellDiffArray * cellDiffArray;                               //@synthesize cellDiffArray=_cellDiffArray - In the implementation block
@property (assign,getter=isUIDBased,nonatomic) BOOL uidBased;                                //@synthesize uidBased=_uidBased - In the implementation block
@property (assign,nonatomic) BOOL containsCellBorderChanges;                                 //@synthesize containsCellBorderChanges=_containsCellBorderChanges - In the implementation block
@property (assign,nonatomic) BOOL containsSuppressCustomFormatHandlingProperty;              //@synthesize containsSuppressCustomFormatHandlingProperty=_containsSuppressCustomFormatHandlingProperty - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)cellDiffMapWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)count;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(const vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >*)cellIDs;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)containsCellBorderChanges;
-(BOOL)isUIDBased;
-(void)setUidBased:(BOOL)arg1 ;
-(TSTCellUIDList *)cellUIDList;
-(void)setCellUIDList:(TSTCellUIDList *)arg1 ;
-(id)initWithContext:(id)arg1 cellDiffArray:(id)arg2 cellUIDList:(id)arg3 uidBased:(BOOL)arg4 ;
-(BOOL)p_scanCellDiffArrayForCellBorderChanges:(id)arg1 ;
-(BOOL)p_scanCellDiffArrayForSuppressCustomFormatHandlingProperty:(id)arg1 ;
-(id)addCellDiff:(id)arg1 andCellUID:(TSTCellUID)arg2 avoidCopy:(BOOL)arg3 ;
-(id)addCellDiff:(id)arg1 andCellID:(TSUCellCoord)arg2 avoidCopy:(BOOL)arg3 ;
-(TSTCellDiffArray *)cellDiffArray;
-(BOOL)containsSuppressCustomFormatHandlingProperty;
-(BOOL)p_scanNSArrayOfDiffsForCellBorderChanges:(id)arg1 ;
-(BOOL)p_scanNSArrayOfDiffsForSuppressCustomFormatHandlingProperty:(id)arg1 ;
-(void)addCellDiff:(id)arg1 andCellUID:(TSTCellUID)arg2 ;
-(void)addCellDiff:(id)arg1 andCellID:(TSUCellCoord)arg2 ;
-(void)enumerateCellIDElementsUsingBlock:(/*^block*/id)arg1 ;
-(id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1 ;
-(void)setCellDiffArray:(TSTCellDiffArray *)arg1 ;
-(void)setContainsCellBorderChanges:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 cellDiff:(id)arg2 cellUIDList:(id)arg3 ;
-(void)addCellDiffMap:(id)arg1 ;
-(void)addCellDiffs:(id)arg1 atCellUIDs:(id)arg2 ;
-(void)appendCellDiffMap:(id)arg1 ;
-(id)pruneCellDiffMapAgainstTable:(id)arg1 behavior:(unsigned long long)arg2 ;
-(id)uuidBasedCellDiffMapByTableInfo:(id)arg1 ;
-(id)cellDiffMapByIntersectingUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 inRows:(BOOL)arg2 ;
-(id)cellDiffMapByRemovingRows:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)cellDiffMapByRemovingColumns:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)setContainsSuppressCustomFormatHandlingProperty:(BOOL)arg1 ;
@end
