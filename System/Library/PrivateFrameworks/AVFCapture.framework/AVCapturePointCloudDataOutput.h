/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSString;

@interface AVCapturePointCloudDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureDataOutputDelegateCallbackHelper* _delegateCallbackHelper;
	AVWeakReference* _weakReference;
	BOOL _alwaysDiscardsLatePointCloudData;

}

@property (nonatomic,readonly) id<AVCapturePointCloudDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) BOOL alwaysDiscardsLatePointCloudData; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)new;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(id)init;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(BOOL)alwaysDiscardsLatePointCloudData;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)setAlwaysDiscardsLatePointCloudData:(BOOL)arg1 ;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(id<AVCapturePointCloudDataOutputDelegate>)delegate;
-(id)delegateOverride;
@end

