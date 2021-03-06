/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, HMPendingRequests, HMDelegateCaller, HMFMessageDispatcher, HMXPCClient;

@interface _HMContext : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;
	NSObject*<OS_dispatch_queue> _queue;
	HMPendingRequests* _pendingRequests;
	HMDelegateCaller* _delegateCaller;
	HMFMessageDispatcher* _messageDispatcher;
	HMXPCClient* _xpcClient;

}

@property (nonatomic,readonly) HMXPCClient * xpcClient;                               //@synthesize xpcClient=_xpcClient - In the implementation block
@property (copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMPendingRequests * pendingRequests;                   //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) HMDelegateCaller * delegateCaller;                     //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMXPCClient * messageTransport; 
+(id)contextWithName:(id)arg1 userInfo:(id)arg2 delegateCaller:(id)arg3 ;
+(id)contextWithName:(id)arg1 ;
+(id)contextWithName:(id)arg1 delegateCaller:(id)arg2 ;
-(HMPendingRequests *)pendingRequests;
-(id)init;
-(NSDictionary *)userInfo;
-(HMXPCClient *)xpcClient;
-(HMXPCClient *)messageTransport;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 ;
-(HMDelegateCaller *)delegateCaller;
-(NSString *)name;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 pendingRequests:(id)arg3 delegateCaller:(id)arg4 messageDispatcher:(id)arg5 messageTransport:(id)arg6 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)subcontextWithName:(id)arg1 ;
@end

