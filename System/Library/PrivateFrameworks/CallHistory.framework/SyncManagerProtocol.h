/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SyncManagerProtocol <NSObject>
@required
-(void)deleteObjectsWithLimits:(id)arg1;
-(double)timerOutgoing;
-(void)updateObjects:(id)arg1;
-(long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 error:(id*)arg3;
-(double)timerIncoming;
-(unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
-(void)insertRecordsWithoutTransactions:(id)arg1;
-(id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(void)updateAllObjects:(id)arg1;
-(id)fetchObjectsWithLimits:(id)arg1;
-(void)resetTimers;
-(double)timerLifetime;
-(void)deleteAllObjects;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(void)insert:(id)arg1;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(id)fetchAllObjects;
-(void)insertWithoutTransaction:(id)arg1;
-(long long)deleteCallsWithPredicate:(id)arg1 error:(id*)arg2;
-(id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;

@end

