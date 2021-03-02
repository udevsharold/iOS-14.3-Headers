/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSMetricsDataSource.h>

@protocol OS_dispatch_queue;
@class AMSMetricsDatabase, NSString, NSObject;

@interface AMSMetricsDatabaseDataSource : NSObject <AMSMetricsDataSource> {

	AMSMetricsDatabase* _database;
	NSString* _containerIdentifier;
	NSString* _currentLockKey;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) AMSMetricsDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * currentLockKey;                       //@synthesize currentLockKey=_currentLockKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long eventCount; 
-(NSString *)containerIdentifier;
-(AMSMetricsDatabase *)database;
-(void)skipEvents:(id)arg1 error:(id*)arg2 ;
-(NSString *)currentLockKey;
-(void)dealloc;
-(long long)eventCount;
-(void)removeAllEvents;
-(void)removeEvents:(id)arg1 error:(id*)arg2 ;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)didFinishBatching;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setCurrentLockKey:(NSString *)arg1 ;
-(id)enqueueEvents:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2 ;
@end
