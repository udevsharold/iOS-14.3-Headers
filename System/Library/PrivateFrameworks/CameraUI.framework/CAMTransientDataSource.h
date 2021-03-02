/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PUTransientDataSource.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CAMTransientDataSource : NSObject <PUTransientDataSource> {

	NSHashTable* __observers;
	NSMutableArray* __assetUUIDs;
	NSMutableDictionary* __assetsByUUID;
	NSMutableDictionary* __representativeAssetsByBurstIdentifier;
	NSMutableDictionary* __enqueuedBurstAssetUUIDByBurstIdentifier;
	NSMutableDictionary* __enqueuedBurstConvertiblesByAssetUUID;
	long long __nestedPerformChanges;
	long long __pendingChangeNotifications;

}

@property (nonatomic,readonly) NSHashTable * _observers;                                                                //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _assetUUIDs;                                                            //@synthesize _assetUUIDs=__assetUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assetsByUUID;                                                     //@synthesize _assetsByUUID=__assetsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _representativeAssetsByBurstIdentifier;                            //@synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enqueuedBurstAssetUUIDByBurstIdentifier;                          //@synthesize _enqueuedBurstAssetUUIDByBurstIdentifier=__enqueuedBurstAssetUUIDByBurstIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enqueuedBurstConvertiblesByAssetUUID;                             //@synthesize _enqueuedBurstConvertiblesByAssetUUID=__enqueuedBurstConvertiblesByAssetUUID - In the implementation block
@property (assign,setter=_setNestedPerformChanges:,nonatomic) long long _nestedPerformChanges;                          //@synthesize _nestedPerformChanges=__nestedPerformChanges - In the implementation block
@property (assign,setter=_setPendingChangeNotifications:,nonatomic) long long _pendingChangeNotifications;              //@synthesize _pendingChangeNotifications=__pendingChangeNotifications - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSSet * existingBurstIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSHashTable *)_observers;
-(void)unregisterChangeObserver:(id)arg1 ;
-(BOOL)isEmpty;
-(id)init;
-(void)registerChangeObserver:(id)arg1 ;
-(void)removeAllAssets;
-(void)performChanges:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)_representativeAssetsByBurstIdentifier;
-(id)transientBurstMapping;
-(id)transientAssetMapping;
-(NSString *)description;
-(NSMutableDictionary *)_assetsByUUID;
-(id)existingRepresentativeAssetForBurstIdentifier:(id)arg1 ;
-(void)removeRepresentativeAssetForBurstIdentifier:(id)arg1 ;
-(void)processPendingBurstAssets;
-(long long)_nestedPerformChanges;
-(void)_setNestedPerformChanges:(long long)arg1 ;
-(NSMutableArray *)_assetUUIDs;
-(id)uuids;
-(void)removeAssetWithUUID:(id)arg1 ;
-(void)updateAssetWithConvertible:(id)arg1 ;
-(void)enqueuePendingBurstAssetWithConvertible:(id)arg1 ;
-(id)existingAssetForUUID:(id)arg1 ;
-(id)insertAssetWithConvertible:(id)arg1 ;
-(id)existingAssetUUIDs;
-(NSSet *)existingBurstIdentifiers;
-(NSMutableDictionary *)_enqueuedBurstAssetUUIDByBurstIdentifier;
-(NSMutableDictionary *)_enqueuedBurstConvertiblesByAssetUUID;
-(void)_notifyObserversOfDataSourceChange;
-(BOOL)_removeAssetWithUUID:(id)arg1 ;
-(void)_setPendingChangeNotifications:(long long)arg1 ;
-(long long)_pendingChangeNotifications;
@end
