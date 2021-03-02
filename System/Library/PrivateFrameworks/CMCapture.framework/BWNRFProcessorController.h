/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWNRFProcessorInputDelegate.h>
#import <libobjc.A.dylib/NRFProcessorDelegate.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorController.h>

@protocol OS_dispatch_queue;
@class BWNRFProcessorControllerConfiguration, NSSet, FigStateMachine, NRFProcessor, NRFPrepareDescriptor, NSDictionary, NSObject, NSMutableArray, BWNRFProcessorRequest, NSString;

@interface BWNRFProcessorController : BWStillImageProcessorController <BWNRFProcessorInputDelegate, NRFProcessorDelegate, BWNoiseReductionAndFusionProcessorController> {

	BWNRFProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	NRFProcessor* _nrfProcessor;
	NRFPrepareDescriptor* _prepareDescriptor;
	Class _nrfUBFusionOutputClass;
	Class _nrfProgressiveBracketingStatisticsClass;
	Class _nrfProgressiveBracketingParametersClass;
	NSDictionary* _adaptiveBracketingCaptureParametersByPortType;
	Class _nrfDeepFusionOutputClass;
	NRFPrepareDescriptor* _deepFusionPrepareDescriptor;
	Class _nrfCompletionStatusClass;
	NSObject*<OS_dispatch_queue> _completionStatusQueue;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	opaqueCMFormatDescriptionRef _inferenceInputFormatDescription;
	opaqueCMFormatDescriptionRef _demosaicedRawFormatDescription;
	opaqueCMFormatDescriptionRef _gainMapFormatDescription;
	NSMutableArray* _requestQueue;
	BWNRFProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)lazilyAllocatesDeepFusionOutputBuffers;
-(void)_serviceNextRequest;
-(void)dealloc;
-(void)input:(id)arg1 addFrame:(opaqueCMSampleBufferRef)arg2 isReferenceFrame:(BOOL)arg3 ;
-(void)inputReceivedAllFrames:(id)arg1 ;
-(void)_processOriginalImage;
-(void)_resetProcessor;
-(int)_setupProcessorForProcessingType:(unsigned)arg1 ;
-(int)_singleImageProcessSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferOut:(opaqueCMSampleBuffer*)arg2 ;
-(void)_processUBFusion;
-(opaqueCMSampleBufferRef)_newOutputSampleBufferWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 pixelBuffer:(CVBufferRef)arg2 formatDescriptionInOut:(const opaqueCMFormatDescription*)arg3 metadataToMerge:(id)arg4 ;
-(void)processor:(id)arg1 outputReadyWithFrameType:(int)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputMetadata:(id)arg4 error:(int)arg5 ;
-(void)_setupProcessor;
-(id)processorGetInferenceResults:(id)arg1 ;
-(void)processor:(id)arg1 didSelectFusionMode:(int)arg2 ;
-(void)processor:(id)arg1 didEnqueueProcessingForSurfaceID:(unsigned)arg2 ;
-(void)processor:(id)arg1 didCompleteProcessingForSurfaceID:(unsigned)arg2 ;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 processErrorRecoveryFrame:(BOOL)arg3 processOriginalImage:(BOOL)arg4 clientBracketSequenceNumber:(int)arg5 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 detectedObjects:(id)arg4 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg1 ;
-(void)_processSingleImage;
-(void)_processDeepFusion;
-(int)_loadSetupAndPrepareNRFProcessor;
-(BOOL)finishProcessingCurrentInputNow;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_logCompletionStatus:(id)arg1 processingType:(unsigned)arg2 request:(id)arg3 ;
-(void)_propagateDemosaicedRawPixelBuffer:(CVBufferRef)arg1 demosaicedRawMetadata:(id)arg2 outputSampleBuffer:(opaqueCMSampleBufferRef)arg3 error:(int)arg4 ;
-(void)processor:(id)arg1 didSelectProgressiveFusionReferenceFrameIndex:(int)arg2 ;
-(void)_processUBLowLightFusion;
-(unsigned long long)type;
-(void)cancelProcessing;
-(void)_updateStateIfNeeded;
@end
