/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class HMDAccountHandle, IDSService, HMDIDSMessageContext, NSMutableArray, NSString;

@interface HMDAccountHandleResolveOperation : HMFOperation <HMFLogging, IDSServiceDelegate> {

	HMDAccountHandle* _handle;
	IDSService* _service;
	HMDIDSMessageContext* _messageContext;
	NSMutableArray* _resolveBlocks;

}

@property (readonly) IDSService * service;                                       //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) HMDIDSMessageContext * messageContext;              //@synthesize messageContext=_messageContext - In the implementation block
@property (readonly) NSMutableArray * resolveBlocks;                             //@synthesize resolveBlocks=_resolveBlocks - In the implementation block
@property (copy,readonly) HMDAccountHandle * handle;                             //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(double)timeout;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)initWithHandle:(id)arg1 ;
-(id)init;
-(void)main;
-(IDSService *)service;
-(HMDAccountHandle *)handle;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(HMDIDSMessageContext *)messageContext;
-(void)setMessageContext:(HMDIDSMessageContext *)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(NSMutableArray *)resolveBlocks;
-(void)addResolveBlock:(/*^block*/id)arg1 ;
@end
