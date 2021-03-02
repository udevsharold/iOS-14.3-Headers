/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet, NRMutableDeviceCollection, NSMutableArray, NRSwitchRecordCollection, NSMutableDictionary, NRPBDeviceCollectionHistory;

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSCopying, NSSecureCoding, NSFastEnumeration> {

	NSMutableOrderedSet* _observers;
	long long _maxHistoryDepth;
	AB _atomicDirty;
	os_unfair_lock_s _observerLock;
	os_unfair_lock_s _cacheLock;
	NRMutableDeviceCollection* _deviceCollection;
	unsigned long long _startIndex;
	NSMutableArray* _history;
	NRSwitchRecordCollection* _switchRecords;
	NSMutableDictionary* _historyStateCache;
	NSMutableArray* _historyStateCacheMRU;
	NSMutableArray* _historyStateCacheIndex;

}

@property (nonatomic,readonly) NRMutableDeviceCollection * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long nextIndex; 
@property (nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) unsigned switchIndex; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistory * protobuf; 
+(BOOL)supportsSecureCoding;
-(void)_createIndex;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned)switchIndex;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned long long)nextIndex;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(BOOL)dirty;
-(NRPBDeviceCollectionHistory *)protobuf;
-(unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_updateHistoryCachesWithIndex:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(void)notifyHistoryObserversWithEntry:(id)arg1 ;
-(id)description;
-(id)historyEntryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)applyDiff:(id)arg1 ;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToHistory:(id)arg1 ;
-(unsigned long long)count;
-(id)switchDeviceIDFromDiff:(id)arg1 ;
-(id)_mostRecentStateBefore:(id)arg1 ;
-(void)pruneStateCacheItems:(unsigned long long)arg1 ;
-(void)_truncateHistory;
-(NRMutableDeviceCollection *)deviceCollection;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
@end
