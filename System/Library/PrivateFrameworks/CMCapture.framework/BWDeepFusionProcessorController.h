/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWDeepFusionProcessorInputDelegate.h>

@protocol IBPDeepFusionProcessor, IBPDeepFusionPrepareDescriptor;
@class BWDeepFusionProcessorControllerConfiguration, NSSet, FigStateMachine, NSMutableArray, BWDeepFusionProcessorRequest, NSString;

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate> {

	BWDeepFusionProcessorControllerConfiguration* _configuration;
	NSSet* _supportedPortTypes;
	FigStateMachine* _stateMachine;
	id<IBPDeepFusionProcessor> _deepFusionProcessor;
	id<IBPDeepFusionPrepareDescriptor> _prepareDescriptor;
	Class _deepFusionOutputClass;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	opaqueCMFormatDescriptionRef _demosaicedRawFormatDescription;
	opaqueCMFormatDescriptionRef _inferenceAttachedMediaFormatDescription;
	opaqueCMFormatDescriptionRef _gainMapFormatDescription;
	NSMutableArray* _requestQueue;
	BWDeepFusionProcessorRequest* _currentRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_serviceNextRequest;
-(void)dealloc;
-(void)_resetProcessor;
-(void)_setupProcessor;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_propagateDemosaicedRawPixelBuffer:(CVBufferRef)arg1 demosaicedRawMetadata:(id)arg2 outputSampleBuffer:(opaqueCMSampleBufferRef)arg3 error:(int)arg4 ;
-(unsigned long long)type;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)input:(id)arg1 addType:(unsigned long long)arg2 ;
-(void)addInferencesForInput:(id)arg1 ;
-(int)_loadSetupAndPrepareDeepFusionProcessor;
-(void)_propagateInferenceAttachedMedia:(id)arg1 input:(id)arg2 outputSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(void)_updateStateIfNeeded;
-(void)_process;
@end
