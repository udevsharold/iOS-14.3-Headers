/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CKServerChangeToken;


@protocol SCKDatabaseStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled; 
@required
-(id)zoneStoreForSchema:(id)arg1;
-(void)setServerChangeToken:(id)arg1;
-(BOOL)isCloudBackupEnabled;
-(NSDate *)lastDirtyDate;
-(void)setLastSyncDate:(id)arg1;
-(void)setCloudBackupEnabled:(BOOL)arg1;
-(NSDate *)lastSyncDate;
-(void)setLastDirtyDate:(id)arg1;
-(CKServerChangeToken *)serverChangeToken;

@end

