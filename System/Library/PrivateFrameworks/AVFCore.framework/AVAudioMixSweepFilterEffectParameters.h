/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {

	AVAudioMixSweepFilterEffectParametersInternal* _sweepFilterAudioEffect;

}

@property (nonatomic,readonly) int minimumCutOffFrequency; 
@property (nonatomic,readonly) int maximumCutOffFrequency; 
@property (nonatomic,readonly) float bypassThreshold; 
@property (nonatomic,readonly) float sweepValue; 
+(id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(float)sweepValue;
-(int)minimumCutOffFrequency;
-(int)maximumCutOffFrequency;
-(float)bypassThreshold;
-(id)init;
-(void)dealloc;
-(id)initWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(id)sweepFilterEffectWithSweepValue:(float)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

