/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSObject;

@interface AXIPCOutstandingAsyncRequest : NSObject {

	unsigned _replyPort;
	NSObject*<OS_dispatch_queue> _replyQueue;
	/*^block*/id _replyHandler;
	CFRunLoopSourceRef _replyMachPortSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,readonly) unsigned replyPort;                                   //@synthesize replyPort=_replyPort - In the implementation block
@property (nonatomic,readonly) id replyHandler;                                      //@synthesize replyHandler=_replyHandler - In the implementation block
@property (nonatomic,readonly) CFRunLoopSourceRef replyMachPortSource;               //@synthesize replyMachPortSource=_replyMachPortSource - In the implementation block
+(void)initialize;
+(void)unregisterByPort:(unsigned)arg1 ;
+(void)registerOutstandingRequest:(id)arg1 ;
+(id)lookupByPort:(unsigned)arg1 ;
-(void)initialSendAborted;
-(void)sendOnceRightDestroyed;
-(void)dealloc;
-(id)initWithReplyPort:(unsigned)arg1 handlerQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)rawResponseReceived:(id)arg1 ;
-(void)registerAndListenForResponse;
-(CFRunLoopSourceRef)replyMachPortSource;
-(void)_responseReceived:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(id)replyHandler;
-(unsigned)replyPort;
@end

