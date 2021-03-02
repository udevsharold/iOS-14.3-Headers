/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, TSUSparseArray, NSMutableDictionary;

@interface TSUUUIDSetStore : NSObject <NSCopying> {

	NSLock* _lock;
	TSUSparseArray* _uuidSetForIndex;
	NSMutableDictionary* _indexesUsingUuid;
	unsigned _highestIndex;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)addSet:(id)arg1 ;
-(id)description;
-(unsigned long long)count;
-(void)foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)indexOfSet:(id)arg1 ;
-(void)p_addSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)indexesUsingUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)setForIndex:(unsigned)arg1 ;
-(void)_foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)addSetForUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeSetAtIndex:(unsigned)arg1 ;
-(BOOL)containsUuidSet:(id)arg1 ;
-(id)indexesUsingAnyOfUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)subsetStoreForIndexes:(id)arg1 ;
-(unsigned)addSetForSingleUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
@end
