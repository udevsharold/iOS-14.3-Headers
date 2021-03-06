/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_asset;
-(NSDictionary *)outputSettings;
-(AVAssetTrack *)track;
-(id)init;
-(id)mediaType;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_formatDescriptions;
-(unsigned)_getUniformMediaSubtypeIfExists;
-(void)dealloc;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(id)description;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(id)_attachedAdaptor;
-(BOOL)appliesPreferredTrackTransform;
-(BOOL)_isAttachedToAdaptor;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
@end

