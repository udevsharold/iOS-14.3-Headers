/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CKServerChangeToken, NSArray;


@protocol SCKZoneStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSArray * serverRecords; 
@property (nonatomic,copy) NSArray * pendingCommands; 
@required
-(NSArray *)serverRecords;
-(void)setServerChangeToken:(id)arg1;
-(void)setPendingCommands:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastSyncDate:(id)arg1;
-(void)addPendingCommands:(id)arg1;
-(void)applyServerRecordsDiff:(id)arg1;
-(NSArray *)pendingCommands;
-(void)setServerRecords:(id)arg1;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
-(NSDate *)lastSyncDate;
-(void)setLastDirtyDate:(id)arg1;
-(CKServerChangeToken *)serverChangeToken;

@end

