/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCETableResolverFactoryProtocol <NSObject>
@required
-(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)valuesForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const UUIDData<TSP::UUIDData>*)arg2 error:(id*)arg3;
-(id)initWithCalcEngine:(TSCECalcEngine*)arg1;
-(vector<TSCECategoryRef, std::__1::allocator<TSCECategoryRef> >*)categoryRefsForSpanningCategoryRef:(const TSCECategoryRef*)arg1;
-(unsigned char)aggregateTypeForCategoryRef:(const TSCECategoryRef*)arg1;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef> >*)cellRefsForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const UUIDData<TSP::UUIDData>*)arg2;
-(TSCERangeRef*)aggregateRangeRefForCategoryRef:(const TSCECategoryRef*)arg1;
-(UUIDData<TSP::UUIDData>*)mapOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef> >*)unorderedCellRefsForCategoryRef:(const TSCECategoryRef*)arg1 atRowUid:(const UUIDData<TSP::UUIDData>*)arg2;
-(TSCETableResolver*)newTableResolverForResolver:(id)arg1;

@end
