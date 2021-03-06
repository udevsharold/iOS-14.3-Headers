/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSSQLiteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, AMSSQLiteConnection, NSObject;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {

	NSString* _containerId;
	AMSSQLiteConnection* _connection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _keepAliveCount;

}

@property (nonatomic,retain) AMSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) long long keepAliveCount;                                //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
@property (nonatomic,retain) NSString * containerId;                                  //@synthesize containerId=_containerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDatabaseWithContainerId:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSString *)containerId;
-(BOOL)connectionNeedsResetForCorruption:(id)arg1 ;
-(void)dealloc;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(id)initWithContainerId:(id)arg1 ;
-(void)setConnection:(AMSSQLiteConnection *)arg1 ;
-(void)setIdentifier:(id)arg1 forKey:(id)arg2 account:(id)arg3 duration:(double)arg4 error:(id*)arg5 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2 ;
-(void)insertEvents:(id)arg1 error:(id*)arg2 ;
-(long long)keepAliveCount;
-(long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(void)dropEvents:(id)arg1 error:(id*)arg2 ;
-(void)setContainerId:(NSString *)arg1 ;
-(id)identifierForKey:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(/*^block*/id)arg3 ;
-(void)close;
-(void)cleanupInvalidIdentifiersWithError:(id*)arg1 ;
-(void)unlockEvents:(id)arg1 error:(id*)arg2 ;
-(id)_lockedById;
-(void)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(id)lockAllEventsWithError:(id*)arg1 ;
-(void)removeIdentifiersForAccount:(id)arg1 error:(id*)arg2 ;
-(void)setKeepAliveCount:(long long)arg1 ;
-(AMSSQLiteConnection *)connection;
@end

