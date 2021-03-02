/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLConnectionManager.h>

@class NSSQLiteConnection;

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {

	NSSQLiteConnection* _connection;

}
-(BOOL)routeStoreRequest:(id)arg1 ;
-(id)initializationConnection;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(void)dealloc;
-(void)disconnectAllConnections;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
@end
