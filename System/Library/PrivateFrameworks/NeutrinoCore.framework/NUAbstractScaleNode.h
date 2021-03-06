/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NURenderNode;

@interface NUAbstractScaleNode : NURenderNode

@property (nonatomic,readonly) NURenderNode * inputNode; 
-(NURenderNode *)inputNode;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(id)_scaleImage:(id)arg1 by:(SCD_Struct_NU7)arg2 sampleMode:(long long)arg3 ;
@end

