/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSegment : NSObject {

	float _sumOfScore;
	float _curationScore;
	unsigned long long _numOfFrames;
	unsigned long long _numOfValidFrames;
	SCD_Struct_VC7 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_VC7 timeRange;                           //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;                   //@synthesize numOfFrames=_numOfFrames - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfValidFrames;              //@synthesize numOfValidFrames=_numOfValidFrames - In the implementation block
@property (assign,nonatomic) float curationScore;                                //@synthesize curationScore=_curationScore - In the implementation block
-(float)curationScore;
-(void)setCurationScore:(float)arg1 ;
-(SCD_Struct_VC7)timeRange;
-(id)init;
-(void)mergeSegment:(id)arg1 ;
-(void)setTimeRange:(SCD_Struct_VC7)arg1 ;
-(void)copyFrom:(id)arg1 ;
-(float)sumOfScore;
-(unsigned long long)numOfValidFrames;
-(id)initWithTimestamp:(SCD_Struct_VC6)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateWithFirstFrame:(SCD_Struct_VC7)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateSegment:(SCD_Struct_VC7)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateDuration:(SCD_Struct_VC6)arg1 ;
-(void)trimSegment:(SCD_Struct_VC6)arg1 fromStart:(BOOL)arg2 ;
-(BOOL)isContentTooShort;
-(float)score;
-(unsigned long long)numOfFrames;
@end
