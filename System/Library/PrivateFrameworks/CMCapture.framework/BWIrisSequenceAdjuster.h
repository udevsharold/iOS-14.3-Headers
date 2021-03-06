/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {

	NSMutableArray* _discontinuities;
	SCD_Struct_BW8 _firstIrisAudioOffset;
	NSMutableArray* _interleavingQueues;
	SCD_Struct_BW8 _nextAdjustedVideoTime;
	unsigned* _mediaTypes;
	NSMutableArray* _timeSkews;
	SCD_Struct_BW8 _masterMovieOriginalStartTime;
	SCD_Struct_BW8 _previewFrameDuration;
	SCD_Struct_BW8 _lastVideoAdjustedTime;
	BWMotionDataPreserver* _motionDataPreserver;
	int _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;

}

@property (assign,nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;              //@synthesize audioOffsetForOriginalStillImageTimeMaximumFrameLatency=_audioOffsetForOriginalStillImageTimeMaximumFrameLatency - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 masterMovieOriginalStartTime; 
@property (readonly) BOOL readyToReleaseAudio; 
+(void)initialize;
-(void)enqueueVideoBufferTime:(SCD_Struct_BW8)arg1 nativeTime:(SCD_Struct_BW8)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(SCD_Struct_BW8)masterMovieOriginalStartTime;
-(void)adjustMovieInfoTimes:(id)arg1 ;
-(SCD_Struct_BW8)_originalDurationForVideoBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(void)setMasterMovieOriginalStartTime:(SCD_Struct_BW8)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:(int)arg1 ;
-(BOOL)readyToReleaseAudio;
-(id)initWithMediaTypes:(id)arg1 visMotionMetadataPreloadingEnabled:(BOOL)arg2 ;
-(BOOL)_getPreviousTimeSkewOut:(id*)arg1 andNextTimeSkewOut:(id*)arg2 forTime:(SCD_Struct_BW8)arg3 ;
-(void)_adjustTimesInAudioInterleavingQueues;
-(SCD_Struct_BW8)adjustedTimeForStillImageTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)adjustedTimeForTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)_adjustedTimeForVideoBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(long long)_indexOfTime:(SCD_Struct_BW8)arg1 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forMediaTypeWithIndex:(long long)arg2 ;
-(id)_timeSkewsDescription;
-(int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
-(SCD_Struct_BW8)_audioOffsetForOriginalStillImageTime:(SCD_Struct_BW8)arg1 adjustedStillImageTime:(SCD_Struct_BW8)arg2 ;
-(SCD_Struct_BW8)_adjustedTimeForAudioBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)audioOffsetForOriginalStillImageTime:(SCD_Struct_BW8)arg1 ;
-(opaqueCMSampleBufferRef)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1 ;
-(SCD_Struct_BW8)_adjustedTimeForMetadataBufferWithTime:(SCD_Struct_BW8)arg1 ;
@end

