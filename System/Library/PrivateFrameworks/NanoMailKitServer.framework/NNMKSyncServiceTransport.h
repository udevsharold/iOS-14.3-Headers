/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKSyncServiceTransport <NSObject>
@property (nonatomic,readonly) unsigned long long connectivityState; 
@property (assign,nonatomic) BOOL forceFailureForAllRequests; 
@property (assign,nonatomic) BOOL simulateCloudConnectedOnly; 
@optional
-(void)forceFailureForNextRequest;
-(BOOL)forceFailureForAllRequests;
-(void)setForceFailureForAllRequests:(BOOL)arg1;
-(BOOL)simulateCloudConnectedOnly;
-(void)setSimulateCloudConnectedOnly:(BOOL)arg1;

@required
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
-(unsigned long long)connectivityState;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(BOOL)arg5;
-(id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(BOOL)arg5;

@end
