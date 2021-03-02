/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {

	NSSQLCore* _sqlCore;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;              //@synthesize filter=_filter - In the implementation block
-(id)sqlCore;
-(id)initializationConnection;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(void)dealloc;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(void)disconnectAllConnections;
-(BOOL)willHandleStoreRequest:(id)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
@end
