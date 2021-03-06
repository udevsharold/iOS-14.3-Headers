/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImagePersistenceCoordinatorDelegate.h>
#import <libobjc.A.dylib/CAMVideoPersistenceCoordinationDelegate.h>
#import <libobjc.A.dylib/CAMCaptureService.h>

@protocol CAMPersistenceResultDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, CAMThumbnailGenerator, CAMLocationController, CAMProtectionController, CAMPowerController, CAMBurstController, CAMIrisVideoController, NSMapTable, NSMutableDictionary, NSString;

@interface CAMPersistenceController : NSObject <CAMStillImagePersistenceCoordinatorDelegate, CAMVideoPersistenceCoordinationDelegate, CAMCaptureService> {

	struct {
		BOOL respondsToDidCompleteAllLocalPersistenceForRequest;
	}  _resultDelegateFlags;
	NSMutableArray* _pendingLocalPersistenceWrappers;
	NSMutableArray* _pendingRemotePersistenceWrappers;
	id<CAMPersistenceResultDelegate> _resultDelegate;
	NSObject*<OS_dispatch_queue> __localPersistenceQueue;
	NSObject*<OS_dispatch_queue> __remotePersistenceQueue;
	CAMThumbnailGenerator* __localPersistenceThumbnailGenerator;
	CAMThumbnailGenerator* __remotePersistenceThumbnailGenerator;
	CAMLocationController* __locationController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMBurstController* __burstController;
	CAMIrisVideoController* __irisVideoController;
	NSObject*<OS_dispatch_queue> __resultDelegateIsolationQueue;
	NSObject*<OS_dispatch_queue> __coordinationQueue;
	NSMapTable* __coordinationQueueGroupsByIdentifier;
	NSMutableDictionary* __coordinationQueue_stillImagePersistenceCoordinators;
	NSMutableDictionary* __coordinationQueue_videoPersistenceCoordinators;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _localPersistenceQueue;                                     //@synthesize _localPersistenceQueue=__localPersistenceQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remotePersistenceQueue;                                    //@synthesize _remotePersistenceQueue=__remotePersistenceQueue - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _localPersistenceThumbnailGenerator;                             //@synthesize _localPersistenceThumbnailGenerator=__localPersistenceThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _remotePersistenceThumbnailGenerator;                            //@synthesize _remotePersistenceThumbnailGenerator=__remotePersistenceThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingLocalPersistenceWrappers;                                       //@synthesize pendingLocalPersistenceWrappers=_pendingLocalPersistenceWrappers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingRemotePersistenceWrappers;                                      //@synthesize pendingRemotePersistenceWrappers=_pendingRemotePersistenceWrappers - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                             //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                                         //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                   //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * _burstController;                                                   //@synthesize _burstController=__burstController - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * _irisVideoController;                                           //@synthesize _irisVideoController=__irisVideoController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _resultDelegateIsolationQueue;                              //@synthesize _resultDelegateIsolationQueue=__resultDelegateIsolationQueue - In the implementation block
@property (nonatomic,readonly) BOOL resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _coordinationQueue;                                         //@synthesize _coordinationQueue=__coordinationQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * _coordinationQueueGroupsByIdentifier;                                       //@synthesize _coordinationQueueGroupsByIdentifier=__coordinationQueueGroupsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _coordinationQueue_stillImagePersistenceCoordinators;              //@synthesize _coordinationQueue_stillImagePersistenceCoordinators=__coordinationQueue_stillImagePersistenceCoordinators - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _coordinationQueue_videoPersistenceCoordinators;                   //@synthesize _coordinationQueue_videoPersistenceCoordinators=__coordinationQueue_videoPersistenceCoordinators - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPersistenceResultDelegate> resultDelegate;                                    //@synthesize resultDelegate=_resultDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)videoMetadataDateFormatter;
+(id)uniquePathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 usingIncomingDirectory:(BOOL)arg4 ;
+(id)clientVideoMetadataForLocation:(id)arg1 withCreationDate:(id)arg2 ;
+(id)spatialOverCapturePathForPath:(id)arg1 ;
+(id)clientVideoMetadataForRequest:(id)arg1 withCreationDate:(id)arg2 isEV0ForHDR:(BOOL)arg3 livePhotoIdentifierOverride:(id)arg4 ;
+(id)_pathForIncomingDirectory;
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 ;
+(id)delimiterForIncomingAssetFilenames;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(id)_ensureCoordinationGroupForIdentifier:(id)arg1 ;
-(CGAffineTransform)_affineTransformForRotationDegrees:(int)arg1 mirrored:(BOOL)arg2 ;
-(void)_removeCoordinationGroupForIdentifier:(id)arg1 ;
-(void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg1 filteredLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned)arg5 loggingIdentifier:(id)arg6 ;
-(id)_adjustmentsDataForRequest:(id)arg1 captureDimensions:(SCD_Struct_CA15)arg2 portraitMetadata:(id)arg3 ;
-(CAMLocationController *)_locationController;
-(id)init;
-(id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg1 ;
-(NSMapTable *)_coordinationQueueGroupsByIdentifier;
-(CAMThumbnailGenerator *)_remotePersistenceThumbnailGenerator;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3 ;
-(void)_handleCompletedStillImageJobForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 error:(id)arg5 ;
-(id)_uniformTypeIdentifierForStillImageRequest:(id)arg1 ;
-(NSMutableArray *)_pendingLocalPersistenceWrappers;
-(unsigned)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(BOOL)resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
-(void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3 ;
-(void)dealloc;
-(id)_stillPersistenceUUIDForRequest:(id)arg1 withVideoResult:(id)arg2 ;
-(void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2 ;
-(id)_extensionForUniformTypeIdentifier:(id)arg1 ;
-(id)initWithLocationController:(id)arg1 burstController:(id)arg2 protectionController:(id)arg3 powerController:(id)arg4 irisVideoController:(id)arg5 ;
-(void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(NSMutableDictionary *)_coordinationQueue_videoPersistenceCoordinators;
-(unsigned)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(id)_persistStillImageCaptureSurfaceResult:(id)arg1 withRequest:(id)arg2 ;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_coordinationQueue;
-(void)_remotelyPersistStillImageJob:(id)arg1 forRequest:(id)arg2 loggingIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5 error:(out id*)arg6 ;
-(void)persistBurstWithIdentifier:(id)arg1 result:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CAMProtectionController *)_protectionController;
-(void)_coordinateRemotePersistenceForVideoLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_remotePersistenceQueue;
-(id)_persistVideoCaptureResult:(id)arg1 withRequest:(id)arg2 ;
-(id)_coordinationGroupForIdentifier:(id)arg1 ;
-(id)_jobDictionaryForStillImageLocalResult:(id)arg1 filteredLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)videoPersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 spatialOverCaptureResult:(id)arg3 captureRequest:(id)arg4 powerAssertionReason:(unsigned)arg5 ;
-(CAMPowerController *)_powerController;
-(id<CAMPersistenceResultDelegate>)resultDelegate;
-(NSMutableArray *)_pendingRemotePersistenceWrappers;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 filteredLocalResult:(id)arg3 spatialOverCaptureLocalResult:(id)arg4 request:(id)arg5 powerAssertionReason:(unsigned)arg6 ;
-(void)performDeferredRemotePersistenceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)videoPersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3 ;
-(void)_handleVideoPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_mainThread_handleApplicationDidEnterBackground:(id)arg1 ;
-(CAMBurstController *)_burstController;
-(void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 error:(id)arg3 ;
-(id)_createMetadataForPhysicallyOrientedImage:(id)arg1 ;
-(BOOL)_writeDataToURL:(id)arg1 withData:(id)arg2 duringBurst:(BOOL)arg3 error:(out id*)arg4 ;
-(void)_handleStillImagePersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(id)_spatialOverCaptureIdentifierForVideoURL:(id)arg1 ;
-(void)_handleCompletedVideoJobForRequest:(id)arg1 withReply:(id)arg2 completionHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(id)_videoPersistenceUUIDForRequest:(id)arg1 withResult:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_resultDelegateIsolationQueue;
-(CAMIrisVideoController *)_irisVideoController;
-(void)setResultDelegate:(id<CAMPersistenceResultDelegate>)arg1 ;
-(void)_locallyPersistStillImageResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_remotelyPersistVideoJob:(id)arg1 forRequest:(id)arg2 loggingIdentifier:(id)arg3 withSendHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)persistPlaceholderTimelapseVideoWithResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_locallyPersistVideoCaptureResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(CAMThumbnailGenerator *)_localPersistenceThumbnailGenerator;
-(void)_dispatchRemotePersistenceForLocalVideoPersistenceResult:(id)arg1 spatialOverCaptureLocalVideoResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned)arg4 loggingIdentifier:(id)arg5 ;
-(CFWriteStreamRef)_createOpenWriteStreamWithURL:(id)arg1 forBurst:(BOOL)arg2 ;
-(void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 error:(id)arg4 ;
-(id)_jobDictionaryForVideoLocalResult:(id)arg1 spatialOverCaptureLocalResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(unsigned)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(NSMutableDictionary *)_coordinationQueue_stillImagePersistenceCoordinators;
-(id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_localPersistenceQueue;
-(id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg1 ;
@end

