/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject {

	AnalyticsStoreMOContext* _storeMOContext;

}

@property (nonatomic,retain) AnalyticsStoreMOContext * storeMOContext;              //@synthesize storeMOContext=_storeMOContext - In the implementation block
-(id)analyticsStoreEntitiesWithDate;
-(void)ageOutManagedObjectsOlderThan:(double)arg1 ;
-(BOOL)removeNetwork:(id)arg1 ;
-(unsigned long long)entityCount:(id)arg1 withPredicate:(id)arg2 ;
-(void)setStoreMOContext:(AnalyticsStoreMOContext *)arg1 ;
-(id)analyticsStoreEntityNames;
-(void)updateManagedObjectContextWithoutSave;
-(id)fetchPropertiesForEntity:(id)arg1 properties:(id)arg2 predicate:(id)arg3 ;
-(void)pruneManagedObjects;
-(id)fetchRequestForEntity:(id)arg1 ;
-(id)predicateForEntityWithAgeOlderThan:(id)arg1 dateAttribute:(id)arg2 olderThan:(double)arg3 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)joinManagedObject;
-(id)predicateForEntityWithAge:(id)arg1 maxAge:(unsigned long long)arg2 ;
-(id)networkManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)saveManagedObjectContext;
-(void)performPruneBasedOnStoreSize;
-(id)fetchPropertiesForEntityWithLimitAndSortDescriptor:(id)arg1 properties:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptor:(id)arg5 returnDistinct:(BOOL)arg6 ;
-(id)createEntity:(id)arg1 ;
-(void)performBlockOnManagedObjectContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)bssManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)setNetworkManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)entityByCounting:(id)arg1 withPredicate:(id)arg2 created:(BOOL*)arg3 ;
-(id)managedObjectContext;
-(id)geotagManagedObject;
-(id)networkManagedObject:(id)arg1 ;
-(id)fetchAll:(id)arg1 ;
-(BOOL)coalesceBssidsIntoDeployment:(id)arg1 ;
-(id)leaveManagedObject;
-(id)entity:(id)arg1 withPredicate:(id)arg2 created:(BOOL*)arg3 ;
-(id)roamManagedObject;
-(id)networkManagedObject:(id)arg1 created:(BOOL*)arg2 ;
-(BOOL)setBssManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3 ;
-(id)fetchRoamObjects:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)earliestJoinDate:(id)arg1 ;
-(unsigned long long)roamsCount:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(BOOL)batchDelete:(id)arg1 withPredicate:(id)arg2 withFetchRequest:(id)arg3 ;
-(id)getDeploymentUuidForBssids:(id)arg1 ;
-(id)fetchRequestForEntityWithOffset:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)allSsidsForBssid:(id)arg1 ;
-(id)mostRecentJoinMO:(id)arg1 ssid:(id)arg2 ;
-(id)fetchRoamCache:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(id)analyticsStoreEntityRelationshipNames;
-(id)allBssidsForSsid:(id)arg1 ;
-(id)bssManagedObject:(id)arg1 ssid:(id)arg2 created:(BOOL*)arg3 ;
-(id)fetchRoamProperties:(id)arg1 fetchLimit:(unsigned long long)arg2 properties:(id)arg3 ;
-(id)bssManagedObject:(id)arg1 ssid:(id)arg2 ;
-(id)fetch:(id)arg1 withPredicate:(id)arg2 ;
-(BOOL)batchUpdate:(id)arg1 withPredicate:(id)arg2 propertiesToUpdate:(id)arg3 ;
-(AnalyticsStoreMOContext *)storeMOContext;
@end
