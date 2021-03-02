/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject {

	FBSApplicationDataStore* _fbsApplicationDataStore;

}

@property (nonatomic,readonly) NSString * bundleID; 
+(void)synchronize;
+(void)setPrefetchedKeys:(id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)init;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(NSString *)bundleID;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjects;
-(id)_initWithFBSApplicationDataStore:(id)arg1 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
@end
