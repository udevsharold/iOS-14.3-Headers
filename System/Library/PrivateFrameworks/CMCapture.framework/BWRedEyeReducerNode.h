/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, CIContext, CIDualRedEyeRepairSession, NSString;

@interface BWRedEyeReducerNode : BWNode {

	NSDictionary* _redEyeReductionParametersByPortType;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	CIContext* _ciContext;
	CIDualRedEyeRepairSession* _redEyeRepairSession;
	opaqueCMSampleBufferRef _primaryImageSampleBuffer;
	BOOL _skipRepair;
	int _redEyeReductionVersion;
	int _inferenceType;
	NSString* _inferenceAttachmentKey;

}
+(void)initialize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)dealloc;
-(void)setInferenceType:(int)arg1 ;
-(id)initWithVersion:(int)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setInferenceAttachmentKey:(id)arg1 ;
-(int)inferenceType;
-(id)inferenceAttachmentKey;
@end
