/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NSString, NSObject, NSMutableArray;

@interface _PASRTCLogging : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	NSString* _path;
	NSObject*<OS_dispatch_source> _persistenceTimerSource;
	double _storeCreationDate;
	NSMutableArray* _aggregators;
	NSMutableArray* _logQueue;

}

@property (retain) NSMutableArray * logQueue;              //@synthesize logQueue=_logQueue - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3 ;
+(double)round:(double)arg1 toSignificantFigures:(long long)arg2 ;
+(id)loggerForPath:(id)arg1 ;
+(unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2 ;
+(id)dateByAppendingDaysToCurrentDate:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)resetLogs;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFileName:(id)arg1 ;
-(BOOL)_storeToDisk;
-(id)_createRTCReportingWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3 ;
-(void)enqueueRTCLog:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(void)registerBeforeSendProcessor:(id)arg1 ;
-(void)expireLogs;
-(void)logAggregateEvent:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(BOOL)_removeSentLogsAndResetStoreAge:(id)arg1 ;
-(double)_storeAge;
-(void)sendRTCLogsWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)whitelistedLogFromLog:(id)arg1 ;
-(void)updateAndScheduleDiskWrite;
-(void)setLogQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)logQueue;
-(void)encodeWithCoder:(id)arg1 ;
@end

