/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDateInterval;


@protocol BMEventTimeElapsing <BMStreamValidating>
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@required
-(void)setDateInterval:(id)arg1;
-(NSDateInterval *)dateInterval;
-(void)setDuration:(double)arg1;
-(void)setAbsoluteTimestamp:(double)arg1;
-(double)absoluteTimestamp;
-(double)duration;

@end

