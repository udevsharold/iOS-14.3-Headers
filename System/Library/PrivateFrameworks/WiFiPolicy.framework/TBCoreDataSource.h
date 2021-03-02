/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/TBDataSource.h>
#import <libobjc.A.dylib/TBCacheProvider.h>

@class NSManagedObjectContext, TBPersistenceManager, TBCoreDataStoreDescriptor, NSString;

@interface TBCoreDataSource : TBDataSource <TBCacheProvider> {

	BOOL _hasStorageError;
	unsigned long long _cacheExpirationInDays;
	NSManagedObjectContext* _context;
	TBPersistenceManager* _persistenceManager;
	TBCoreDataStoreDescriptor* _descriptor;

}

@property (nonatomic,retain) NSManagedObjectContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TBPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) TBCoreDataStoreDescriptor * descriptor;                 //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BOOL hasStorageError;                                   //@synthesize hasStorageError=_hasStorageError - In the implementation block
@property (assign,nonatomic) unsigned long long cacheExpirationInDays;               //@synthesize cacheExpirationInDays=_cacheExpirationInDays - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPersistenceManager:(TBPersistenceManager *)arg1 ;
-(TBPersistenceManager *)persistenceManager;
-(id)initWithStoreDescriptor:(id)arg1 ;
-(unsigned long long)type;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)setDescriptor:(TBCoreDataStoreDescriptor *)arg1 ;
-(NSManagedObjectContext *)context;
-(void)executeFetchRequest:(id)arg1 ;
-(TBCoreDataStoreDescriptor *)descriptor;
-(void)_executePreferLocalFetchRequest:(id)arg1 ;
-(void)_executeFetchRequest:(id)arg1 ;
-(BOOL)_canSupportRequest:(id)arg1 ;
-(BOOL)hasStorageError;
-(unsigned long long)cacheExpirationInDays;
-(void)_createNewNetwork:(id)arg1 tile:(id)arg2 withMOC:(id)arg3 ;
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createNewNetworkFromDictionary:(id)arg1 withMOC:(id)arg2 ;
-(void)cacheFetchResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeWithFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importObjectsWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCacheExpirationInDays:(unsigned long long)arg1 ;
-(void)setHasStorageError:(BOOL)arg1 ;
@end
