/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@class NSSet;

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder {

	NSSet* _activityStatisticsQuantityInfoClasses;

}
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(id)orderedProperties;
-(id)createBareObject;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(BOOL)_shouldIncludeActivityCachePrivateProperties;
-(BOOL)_shouldIncludeActivityCacheStatistics;
-(id)_decodeActivityQuantityStatisticsInfosWithRow:(HDSQLiteRowRef)arg1 column:(int)arg2 ;
-(void)_applyPrivateActivityCachePropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
-(void)_applyActivityCacheStatisticsToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
@end
