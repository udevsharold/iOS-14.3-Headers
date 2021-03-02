/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInputParametersInternal* _inputParameters;

}

@property (nonatomic,readonly) int trackID; 
@property (nonatomic,copy,readonly) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain,readonly) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
-(int)trackID;
-(id)_audioVolumeCurve;
-(id)effectParameters;
-(id)init;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)audioTimePitchAlgorithm;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(unsigned long long)hash;
-(void)_setScheduledAudioParameters:(id)arg1 ;
-(void)setEffectParameters:(id)arg1 ;
-(id)_volumeCurveAsString;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 rampMode:(long long)arg4 ;
-(void)_setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV6)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 rampMode:(long long*)arg5 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_AV6)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(id)description;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(BOOL)isEqual:(id)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setTrackID:(int)arg1 ;
@end
