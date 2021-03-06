/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, NSObject, AVWeakReferencingDelegateStorage;

@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {

	NSString* _defaultCallbackQueueName;
	NSObject*<OS_dispatch_queue> _defaultCallbackQueue;
	OpaqueFigSimpleMutexRef _stateMutex;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReferencingDelegateStorage* _delegateOverrideStorage;
	remoteQueueReceiverOpaqueRef _remoteQueueReceiver;
	/*^block*/id _remoteQueueHandler;
	localQueueOpaqueRef _localQueue;
	/*^block*/id _localQueueHandler;
	BOOL _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;

}

@property (readonly) id activeDelegate; 
@property (readonly) NSObject*<OS_dispatch_queue> activeCallbackQueue; 
@property (readonly) id clientDelegate; 
@property (readonly) NSObject*<OS_dispatch_queue> clientCallbackQueue; 
@property (readonly) id delegateOverride; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
+(void)initialize;
-(void)updateRemoteQueueReceiver:(remoteQueueReceiverOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientCallbackQueue;
-(void)releaseRemoteQueueReceiver;
-(id)activeDelegate;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)activeCallbackQueue;
-(id)clientDelegate;
-(id)_activeDelegate;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)updateLocalQueue:(localQueueOpaqueRef)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithQueueName:(id)arg1 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)arg2 ;
-(BOOL)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(BOOL)_validateCallbackQueue:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)_activeCallbackQueue;
-(BOOL)setClientDelegate:(id)arg1 clientCallbackQueue:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)delegateOverride;
@end

