/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, AnalyticsStoreDescriptor, AnalyticsPersistenceManager;

@interface AnalyticsStoreMOContext : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	AnalyticsStoreDescriptor* _storeDescriptor;
	AnalyticsPersistenceManager* _persistenceManager;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                 //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) AnalyticsStoreDescriptor * storeDescriptor;                    //@synthesize storeDescriptor=_storeDescriptor - In the implementation block
@property (nonatomic,retain) AnalyticsPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
-(void)setPersistenceManager:(AnalyticsPersistenceManager *)arg1 ;
-(AnalyticsPersistenceManager *)persistenceManager;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithStoreDescriptor:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setStoreDescriptor:(AnalyticsStoreDescriptor *)arg1 ;
-(AnalyticsStoreDescriptor *)storeDescriptor;
-(BOOL)storeNeedsImmediatePruning:(unsigned long long)arg1 ;
@end

