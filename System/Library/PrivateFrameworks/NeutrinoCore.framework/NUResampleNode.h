/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NUSubsampleNode;

@interface NUResampleNode : NUAbstractScaleNode {

	long long _subsampleFactor;
	long long _sampleMode;
	NUSubsampleNode* _subsampleNode;

}

@property (readonly) long long subsampleFactor;                    //@synthesize subsampleFactor=_subsampleFactor - In the implementation block
@property (readonly) long long sampleMode;                         //@synthesize sampleMode=_sampleMode - In the implementation block
@property (readonly) NUSubsampleNode * subsampleNode;              //@synthesize subsampleNode=_subsampleNode - In the implementation block
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(long long)sampleMode;
-(BOOL)isGeometryNode;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(long long)subsampleFactor;
-(id)initWithPreparedInput:(id)arg1 subsampleNode:(id)arg2 ;
-(id)initWithSubsampleFactor:(long long)arg1 sampleMode:(long long)arg2 source:(id)arg3 subsampleNode:(id)arg4 ;
-(SCD_Struct_NU7)_additionalScale;
-(NUSubsampleNode *)subsampleNode;
@end

