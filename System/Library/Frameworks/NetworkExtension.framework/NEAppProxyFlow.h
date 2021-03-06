/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_nw_interface;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFlowMetaData, NSString, NSObject, NSData;

@interface NEAppProxyFlow : NSObject {

	BOOL _isBound;
	NEFlowMetaData* _metaData;
	NSString* _remoteHostname;
	NEFlowRef _flow;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_interface> __networkInterface;

}

@property (assign) NEFlowRef flow;                                            //@synthesize flow=_flow - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_nw_interface> _networkInterface;              //@synthesize _networkInterface=__networkInterface - In the implementation block
@property (assign) BOOL isBound;                                              //@synthesize isBound=_isBound - In the implementation block
@property (retain) NSData * applicationData; 
@property (readonly) NEFlowMetaData * metaData;                               //@synthesize metaData=_metaData - In the implementation block
@property (copy) NSObject*<OS_nw_interface> networkInterface; 
@property (readonly) NSString * remoteHostname;                               //@synthesize remoteHostname=_remoteHostname - In the implementation block
+(id)flowErrorForVPNFlowError:(long long)arg1 ;
+(CFErrorRef)copyVPNFlowErrorFromFlowError:(id)arg1 ;
+(id)copyRemoteEndpointFromFlow:(NEFlowRef)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(NEFlowRef)flow;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)dealloc;
-(NSData *)applicationData;
-(unsigned long long)hash;
-(BOOL)isBound;
-(NEFlowMetaData *)metaData;
-(id)description;
-(void)setFlow:(NEFlowRef)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)setIsBound:(BOOL)arg1 ;
-(void)set_networkInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(void)clearEventHandlers;
-(NSObject*<OS_nw_interface>)_networkInterface;
-(NSObject*<OS_nw_interface>)networkInterface;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeReadWithError:(id)arg1 ;
-(void)closeWriteWithError:(id)arg1 ;
-(void)setNetworkInterface:(NSObject*<OS_nw_interface>)arg1 ;
-(NSString *)remoteHostname;
@end

