/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject, ACDDatabaseConnectionDelegate;
@class NSCache, NSPersistentStoreCoordinator, NSManagedObjectContext, NSNumber;

@interface ACDDatabaseConnection : NSObject {

	id<NSObject> _managedObjectContextDidSaveObserver;
	NSCache* _cache;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	id<ACDDatabaseConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic,__weak) id<ACDDatabaseConnectionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * version; 
@property (nonatomic,retain) NSNumber * keychainVersion; 
+(id)new;
-(void)rollback;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)managedObjectIDForURI:(id)arg1 ;
-(id)init;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 ;
-(void)dealloc;
-(id)_persistentStore;
-(void)_traceDatabaseEvents;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)_managedObjectModificationDescription:(id)arg1 ;
-(id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 ;
-(void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 prefetchKeypaths:(id)arg4 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)_handleManagedObjectContextError:(id)arg1 ;
-(id)insertNewObjectForEntityForName:(id)arg1 ;
-(void)_endObservingManagedObjectContextDidSaveNotifications;
-(BOOL)saveWithError:(id*)arg1 rollbackOnFailure:(BOOL)arg2 ;
-(unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)_managedObjectContextModificationDescription;
-(void)setKeychainVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(void)setDelegate:(id<ACDDatabaseConnectionDelegate>)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)objectForObjectURI:(id)arg1 ;
-(id)existingObjectWithURI:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(id)_managedObjectModel;
-(void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(NSNumber *)keychainVersion;
-(void)_beginObservingManagedObjectContextDidSaveNotifications;
-(id<ACDDatabaseConnectionDelegate>)delegate;
-(void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
@end
