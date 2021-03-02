/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IBPDeepFusionProcessor <MetalImageBufferProcessor>
@property (nonatomic,retain) id<IBPDeepFusionOutput> output; 
@required
-(id<IBPDeepFusionOutput>)output;
-(int)prepareToProcess:(unsigned)arg1 prepareDescriptor:(id)arg2;
-(int)setupWithOptions:(id)arg1;
-(id)initWithContext:(id)arg1;
-(int)process;
-(int)addBuffer:(CVBufferRef)arg1 metadata:(id)arg2 type:(int)arg3;
-(int)addInferenceResults:(id)arg1;
-(int)resetState;
-(void)setOutput:(id)arg1;

@end
