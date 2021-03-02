/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation {

	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;                                                //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,retain) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; 
-(void)main;
-(id)activityCreate;
-(unsigned long long)quotaAvailable;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(int)operationType;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end
