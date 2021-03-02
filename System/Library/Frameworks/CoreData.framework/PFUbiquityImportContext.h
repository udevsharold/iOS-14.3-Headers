/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PFUbiquityStack, PFUbiquityStoreMetadata, PFUbiquityPeer, PFUbiquityKnowledgeVector, NSString, PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot, NSDictionary, NSMutableDictionary, PFUbiquitySwitchboardCacheWrapper, PFUbiquityBaselineHeuristics;

@interface PFUbiquityImportContext : NSObject {

	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeer* _actingPeer;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _currentKnowledgeVector;
	NSString* _exportingPeerID;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _storeSaveSnapshot;
	NSDictionary* _globalIDToLocalIDURICache;
	NSMutableDictionary* _globalIDToFetchedObject;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (nonatomic,retain) _PFUbiquityStack * stack;                                        //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata;                         //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeer * actingPeer;                                   //@synthesize actingPeer=_actingPeer - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * knowledgeVector;                     //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;              //@synthesize currentKnowledgeVector=_currentKnowledgeVector - In the implementation block
@property (nonatomic,retain) NSString * exportingPeerID;                                      //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                       //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * storeSaveSnapshot;                 //@synthesize storeSaveSnapshot=_storeSaveSnapshot - In the implementation block
@property (nonatomic,retain) NSDictionary * globalIDToLocalIDURICache;                        //@synthesize globalIDToLocalIDURICache=_globalIDToLocalIDURICache - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;                //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * globalIDToFetchedObject;                 //@synthesize globalIDToFetchedObject=_globalIDToFetchedObject - In the implementation block
@property (nonatomic,retain) PFUbiquityBaselineHeuristics * heuristics;                       //@synthesize heuristics=_heuristics - In the implementation block
-(id)init;
-(_PFUbiquityStack *)stack;
-(void)setStack:(_PFUbiquityStack *)arg1 ;
-(PFUbiquityTransactionLog *)transactionLog;
-(void)dealloc;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(void)setGlobalIDToLocalIDURICache:(NSDictionary *)arg1 ;
-(BOOL)prefetchManagedObjectsInContext:(id)arg1 error:(id*)arg2 ;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2 ;
-(void)setStoreMetadata:(PFUbiquityStoreMetadata *)arg1 ;
-(NSString *)exportingPeerID;
-(void)setExportingPeerID:(NSString *)arg1 ;
-(void)setTransactionLog:(PFUbiquityTransactionLog *)arg1 ;
-(void)setStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg1 ;
-(PFUbiquityStoreSaveSnapshot *)storeSaveSnapshot;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setCurrentKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(NSDictionary *)globalIDToLocalIDURICache;
-(NSMutableDictionary *)globalIDToFetchedObject;
-(PFUbiquityPeer *)actingPeer;
-(PFUbiquityKnowledgeVector *)currentKnowledgeVector;
-(PFUbiquityStoreMetadata *)storeMetadata;
-(void)setActingPeer:(PFUbiquityPeer *)arg1 ;
-(void)setHeuristics:(PFUbiquityBaselineHeuristics *)arg1 ;
-(PFUbiquityBaselineHeuristics *)heuristics;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3 ;
@end
