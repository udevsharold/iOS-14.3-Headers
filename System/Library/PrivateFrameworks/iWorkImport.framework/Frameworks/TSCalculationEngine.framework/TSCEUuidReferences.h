/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@interface TSCEUuidReferences : NSObject {

	UUIDData<TSP::UUIDData> _ownerUID;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet> > >* _coordSetsReferringToTable;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet> > >, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_map<TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSCECellCoordSet> > > > > >* _coordSetsReferringToUuidInTable;
	unordered_map<TSUCellCoord, std::__1::unordered_set<TSCEUuidPair, std::__1::hash<TSCEUuidPair>, std::__1::equal_to<TSCEUuidPair>, std::__1::allocator<TSCEUuidPair> >, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, std::__1::unordered_set<TSCEUuidPair, std::__1::hash<TSCEUuidPair>, std::__1::equal_to<TSCEUuidPair>, std::__1::allocator<TSCEUuidPair> > > > >* _uuidsByCoord;

}

@property (assign,nonatomic) UUIDData<TSP::UUIDData> ownerUID;              //@synthesize ownerUID=_ownerUID - In the implementation block
+(id)_stringForInternalCellRef:(const TSCEInternalCellReference*)arg1 ;
-(void)clear;
-(id)description;
-(void)encodeToArchive:(UuidReferencesArchive*)arg1 archiver:(id)arg2 ;
-(UUIDData<TSP::UUIDData>)ownerUID;
-(void)addCellCoord:(const TSUCellCoord*)arg1 referringToTableUID:(const UUIDData<TSP::UUIDData>*)arg2 forColumnRowUuid:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)addCellCoord:(const TSUCellCoord*)arg1 referringToTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)removeCellCoord:(const TSUCellCoord*)arg1 referringToTableUID:(const UUIDData<TSP::UUIDData>*)arg2 forColumnRowUuid:(const UUIDData<TSP::UUIDData>*)arg3 ;
-(void)removeCellCoord:(const TSUCellCoord*)arg1 referringToTableUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)getCellRefs:(TSCECellRefSet*)arg1 referringToOwner:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(id)initWithOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)addCellCoord:(const TSUCellCoord*)arg1 referringToCategoryRef:(const TSCECategoryRef*)arg2 ;
-(void)removeCellCoord:(const TSUCellCoord*)arg1 referringToCategoryRef:(const TSCECategoryRef*)arg2 ;
-(void)removeCellCoord:(const TSUCellCoord*)arg1 ;
-(void)getCellRefs:(TSCECellRefSet*)arg1 referringToOwners:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 ;
-(void)getAllCellRefs:(TSCECellRefSet*)arg1 referringToOwnerUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(BOOL)getCellRefs:(TSCECellRefSet*)arg1 referringToOwnerUID:(const UUIDData<TSP::UUIDData>*)arg2 referringToUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg3 ;
-(id)initFromArchive:(const UuidReferencesArchive*)arg1 ownerUID:(const UUIDData<TSP::UUIDData>*)arg2 ;
-(void)unpackAfterUnarchive;
-(void)setOwnerUID:(UUIDData<TSP::UUIDData>)arg1 ;
@end
