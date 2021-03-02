/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>
#import <libobjc.A.dylib/BWMRCSceneObserver.h>

@class BWNodeOutput, BWMRCGatingOutputController, NSMutableArray, BWPixelBufferPool, BWSceneStabilityMonitor, NSString;

@interface BWMRCGatingNode : BWFanOutNode <BWMRCSceneObserver> {

	BWNodeOutput* _mrcOutput;
	BWNodeOutput* _appClipCodeOutput;
	BWMRCGatingOutputController* _mrcOutputController;
	BWMRCGatingOutputController* _appClipCodeOutputController;
	NSMutableArray* _outputControllers;
	BOOL _lowPowerModeEnabled;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _outputBufferPool;
	SCD_Struct_BW2 _outputBufferPoolDimensions;
	os_unfair_lock_s _sceneLock;
	BWSmartCameraScene _qrCodeScene;
	BWSmartCameraScene _appClipCodeScene;
	BWSmartCameraScene _qrCodeSceneForAppClipCode;
	BWSmartCameraScene _appClipCodeSceneWithQRCodes;
	BWSmartCameraScene _documentScene;
	BWSceneStabilityMonitor* _sceneStabilityMonitor;

}

@property (nonatomic,readonly) BWNodeOutput * mrcOutput;                                                 //@synthesize mrcOutput=_mrcOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * appClipCodeOutput;                                         //@synthesize appClipCodeOutput=_appClipCodeOutput - In the implementation block
@property (nonatomic,readonly) id<BWMRCDetectedResultsObserver> mrcResultsObserver; 
@property (nonatomic,readonly) id<BWMRCDetectedResultsObserver> appClipCodeResultsObserver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)dealloc;
-(int)_ensureTransferSession;
-(BWNodeOutput *)mrcOutput;
-(id)initWithMRCEnabled:(BOOL)arg1 appClipCodeEnabled:(BOOL)arg2 lowPowerModeEnabled:(BOOL)arg3 ;
-(void)_updateOutputRequirementsIfNecessary;
-(id)_pixelFormatsSupportedByMRCAlgorithm;
-(CVBufferRef)_createOutputPixelBufferFromSbuf:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_anyOutputShouldApplySceneMotion;
-(BOOL)_anyOutputShouldRunDetection;
-(id<BWMRCDetectedResultsObserver>)mrcResultsObserver;
-(BWNodeOutput *)appClipCodeOutput;
-(int)_ensureOutputBufferPoolWithDimensions:(SCD_Struct_BW2)arg1 ;
-(id)initWithSceneClassifierVersion:(SCD_Struct_BW57)arg1 mrcEnabled:(BOOL)arg2 appClipCodeEnabled:(BOOL)arg3 lowPowerModeEnabled:(BOOL)arg4 ;
-(id<BWMRCDetectedResultsObserver>)appClipCodeResultsObserver;
-(void)sceneDidChangeQRConfidence:(float)arg1 appClipCodeConfidence:(float)arg2 documentConfidence:(float)arg3 ;
-(void)_updateInputRequirements;
@end
