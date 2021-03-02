/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class TSUUUIDSetStore, NSMutableDictionary;

@interface TSUUUIDSubsetCreator : NSObject {

	TSUUUIDSetStore* _uuidSetStore;
	vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _baseUuidVector;
	NSMutableDictionary* _createdSubsetsByRange;

}

@property (readonly) const vector<TSU::UUIDData<TSP::UUIDData>* baseUuidVector;              //@synthesize baseUuidVector=_baseUuidVector - In the implementation block
@property (readonly) TSUUUIDSetStore * uuidSetStore;                                         //@synthesize uuidSetStore=_uuidSetStore - In the implementation block
-(id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 ;
-(unsigned)uuidSetStoreIndexForIndexesInRange:(NSRange)arg1 ;
-(const vector<TSU::UUIDData<TSP::UUIDData>*)baseUuidVector;
-(TSUUUIDSetStore *)uuidSetStore;
@end
