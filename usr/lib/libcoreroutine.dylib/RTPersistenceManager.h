/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/RTPersistenceContainerDelegate.h>
#import <libobjc.A.dylib/RTPersistenceModelProvider.h>
#import <libobjc.A.dylib/RTPersistenceContextDelegate.h>

@protocol RTPersistenceDelegate, RTPersistenceMirroringDelegate;
@class NSURL, NSArray, RTPersistenceStore, RTPersistenceContainer, NSManagedObjectModel, NSRecursiveLock, NSPointerArray, NSMutableArray, NSString;

@interface RTPersistenceManager : RTNotifier <RTPersistenceContainerDelegate, RTPersistenceModelProvider, RTPersistenceContextDelegate> {

	NSURL* _modelsDirectory;
	NSURL* _storesDirectory;
	NSArray* _sortedModelNames;
	RTPersistenceStore* _stores[3];
	RTPersistenceContainer* _container;
	NSManagedObjectModel* _latestModel;
	NSRecursiveLock* _pointerArrayLock;
	NSRecursiveLock* _storesArrayLock;
	NSPointerArray* _outstandingContexts;
	NSMutableArray* _remoteServers;
	unsigned long long _availability;
	id<RTPersistenceDelegate> _delegate;
	id<RTPersistenceMirroringDelegate> _mirroringDelegate;

}

@property (assign) unsigned long long availability;                                                    //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic,__weak) id<RTPersistenceDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<RTPersistenceMirroringDelegate> mirroringDelegate;              //@synthesize mirroringDelegate=_mirroringDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultModelsDirectory;
+(id)defaultStoresDirectory;
-(unsigned long long)availability;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id<RTPersistenceMirroringDelegate>)mirroringDelegate;
-(id)waitForPersistenceContext;
-(BOOL)persistenceContextPerformedSave:(id)arg1 error:(id*)arg2 ;
-(void)setContainer:(id)arg1 ;
-(id)init;
-(id)initWithModelsDirectory:(id)arg1 storesDirectory:(id)arg2 ;
-(id)historyTokenForStoreType:(unsigned long long)arg1 ;
-(BOOL)initializeContainer;
-(void)updateStoreAvailability:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)trackContext:(id)arg1 ;
-(void)setAvailability:(unsigned long long)arg1 ;
-(id)outstandingContexts;
-(id)modelNamed:(id)arg1 ;
-(id)URLForStoreType:(unsigned long long)arg1 ;
-(BOOL)_setupPersistenceContainers;
-(void)_updateAvailabilityAfterSetupAttemptWithAvailability:(unsigned long long)arg1 ;
-(void)setMirroringDelegate:(id<RTPersistenceMirroringDelegate>)arg1 ;
-(void)tearDownPersistenceStack:(/*^block*/id)arg1 ;
-(id)persistenceContextWithOptions:(unsigned long long)arg1 ;
-(BOOL)persistenceContextShouldExecute:(id)arg1 ;
-(id)persistenceStoreForType:(unsigned long long)arg1 ;
-(id)managedObjectContext;
-(void)performMirroringRequestOfType:(long long)arg1 qualityOfService:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)countOfPersistenceStores;
-(void)onCoreDataResetSync:(id)arg1 ;
-(void)_updateStoreAvailability:(unsigned long long)arg1 ;
-(id)storeDescriptionForStoreWithType:(unsigned long long)arg1 ;
-(void)container:(id)arg1 willActivateRequestsQueue:(id)arg2 ;
-(unsigned long long)storeTypeForURL:(id)arg1 ;
-(void)performZoneResetMirroringRequestWithQualityOfService:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)mirroringDelegateSetupState:(/*^block*/id)arg1 ;
-(BOOL)initializePersistenceStores;
-(void)performExportMirroringRequest:(/*^block*/id)arg1 ;
-(id)latestModel;
-(void)setDelegate:(id<RTPersistenceDelegate>)arg1 ;
-(void)performImportMirroringRequestWithQualityOfService:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)createManagedObjectContext:(/*^block*/id)arg1 ;
-(void)_onCoreDataResetSync:(id)arg1 ;
-(void)performExportMirroringRequestWithQualityOfService:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)performZoneResetMirroringRequest:(/*^block*/id)arg1 ;
-(void)container:(id)arg1 failedToActivateRequestsQueue:(id)arg2 ;
-(id)persistenceStoreConfigurations;
-(void)setupPersistenceContainers:(/*^block*/id)arg1 ;
-(void)performImportMirroringRequest:(/*^block*/id)arg1 ;
-(void)_setupRemoteStoreServers;
-(void)persistenceContext:(id)arg1 encounteredError:(id)arg2 ;
-(id)modelFollowingModel:(id)arg1 ;
-(id)urlForModelWithName:(id)arg1 ;
-(id<RTPersistenceDelegate>)delegate;
-(id)sortedModelNames;
-(long long)mirroringDelegateStateForStoreType:(unsigned long long)arg1 ;
@end
