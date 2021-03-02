/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BUUserAccountObserving.h>

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSManagedObjectContext, NSString, NSNumber;

@interface BLJaliscoReadOnlyDAAPClient : NSObject <BUUserAccountObserving> {

	NSManagedObjectModel* _model;
	NSPersistentStoreCoordinator* _psc;
	NSManagedObjectContext* _moc;
	NSString* _identifier;
	NSString* _databaseContainerPath;
	NSNumber* _currentAccountDSID;

}

@property (nonatomic,retain) NSManagedObjectModel * model;                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * psc;              //@synthesize psc=_psc - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;                    //@synthesize moc=_moc - In the implementation block
@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * databaseContainerPath;                  //@synthesize databaseContainerPath=_databaseContainerPath - In the implementation block
@property (nonatomic,retain) NSNumber * currentAccountDSID;                   //@synthesize currentAccountDSID=_currentAccountDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForNonExplicitItems;
+(id)sortByTitleDescriptor;
+(id)sharedClient;
-(void)setPsc:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)moc;
-(NSString *)databaseContainerPath;
-(id)initWithIdentifier:(id)arg1 databaseContainerPath:(id)arg2 ;
-(id)p_persistentStoreDirectory;
-(id)p_persistentStoreFullPathAtSharediBooksLocation;
-(BOOL)p_createPersistentDirectoryIfNeeded;
-(id)predicateForItems:(BOOL)arg1 dsids:(id)arg2 ;
-(void)setDatabaseContainerPath:(NSString *)arg1 ;
-(id)fetchItemsForStoreIDs:(id)arg1 ;
-(id)p_allItemsFetchRequestForDSIDs:(id)arg1 ;
-(id)p_allItemsFetchRequestForDSIDs:(id)arg1 matchingSearchString:(id)arg2 isExplicitRestricted:(BOOL)arg3 ;
-(id)p_fetchRequestForStoreIDs:(id)arg1 dsids:(id)arg2 ;
-(id)p_itemsFetchRequestIncludingHiddenItems:(BOOL)arg1 dsids:(id)arg2 ;
-(NSPersistentStoreCoordinator *)psc;
-(id)_itemsFetchRequestForDSIDs:(id)arg1 excludeStoreIDs:(id)arg2 isExplicitRestricted:(BOOL)arg3 ;
-(NSNumber *)currentAccountDSID;
-(id)predicateToExcludeStoreIDs:(id)arg1 ;
-(id)fetchAllServerItemsForDSIDs:(id)arg1 ;
-(id)fetchServerItemsForStoreIDs:(id)arg1 andDSIDS:(id)arg2 ;
-(void)setModel:(NSManagedObjectModel *)arg1 ;
-(id)searchAllServerItemsForDSIDs:(id)arg1 matchingSearchString:(id)arg2 isExplicitRestricted:(BOOL)arg3 ;
-(id)fetchAllServerItemsWithPredicate:(id)arg1 sortDescriptor:(id)arg2 ;
-(id)fetchItemsForDSIDs:(id)arg1 excludeStoreIDs:(id)arg2 isExplicitRestricted:(BOOL)arg3 ;
-(void)setCurrentAccountDSID:(NSNumber *)arg1 ;
-(NSManagedObjectModel *)model;
-(void)dealloc;
-(BOOL)_setupCoreDataStack;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(NSString *)identifier;
-(void)userAccount:(unsigned long long)arg1 didChangeWithReason:(unsigned long long)arg2 ;
@end
