/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncPipelineStage : HDCloudSyncOperation {

	BOOL _criticalFailureOnError;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (assign,nonatomic) BOOL criticalFailureOnError;                //@synthesize criticalFailureOnError=_criticalFailureOnError - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                 //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;              //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
+(BOOL)shouldLogAtOperationEnd;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(long long)expectedSendSize;
-(void)setExpectedSendSize:(long long)arg1 ;
-(long long)expectedReceiveSize;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(BOOL)criticalFailureOnError;
-(void)setCriticalFailureOnError:(BOOL)arg1 ;
@end
