/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_event_publisher;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface HDXPCEventPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_event_publisher> _publisher;
	NSMutableArray* _pendingEvents;
	NSMutableArray* _pendingSubscribers;
	NSMutableDictionary* _subscribers;
	const char* _requiredEntitlement;

}
-(void)_handleEventAction:(unsigned)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(void)_queue_addSubscriberForToken:(unsigned long long)arg1 descriptor:(id)arg2 ;
-(void)_queue_removeSubscriberForToken:(unsigned long long)arg1 ;
-(void)_queue_sendPendingEvents;
-(void)_queue_sendEventWithXPCObject:(id)arg1 ;
-(id)initWithStream:(const char*)arg1 entitlement:(const char*)arg2 ;
-(void)broadcastEvent:(id)arg1 ;
@end
