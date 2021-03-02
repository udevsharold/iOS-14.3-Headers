/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol MTLCommandQueue;
@class NSString, FigMetalContext, FigMetalHistogram, NSDictionary;

@interface BWMeteorHeadroomNode : BWNode {

	NSString* _lastCaptureRequestIdentifier;
	float _lastMeteorHeadroom;
	float _gainMapMainImageDownscalingFactor;
	int _headroomProcessingType;
	FigMetalContext* _metalContext;
	id<MTLCommandQueue> _metalCommandQueue;
	FigMetalHistogram* _histogram;
	NSDictionary* _meteorHeadroomParametersByPortType;

}
+(void)initialize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)dealloc;
-(float)gainMapMainImageDownscalingFactor;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setHeadroomProcessingType:(int)arg1 ;
-(int)headroomProcessingType;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
@end
