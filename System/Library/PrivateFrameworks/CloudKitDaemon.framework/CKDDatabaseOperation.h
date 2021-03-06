/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDDatabaseOperation : CKDOperation {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
-(long long)databaseScope;
-(id)activityCreate;
-(id)analyticsPayload;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)flowControlKey;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(/*^block*/id)arg5 ;
-(id)CKStatusReportProperties;
-(BOOL)supportsClearAssetEncryption;
-(void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2 ;
-(void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 ;
@end

