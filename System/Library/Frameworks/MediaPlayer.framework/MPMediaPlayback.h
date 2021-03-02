/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMediaPlayback
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
@required
-(void)pause;
-(void)play;
-(void)endSeeking;
-(void)prepareToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(BOOL)isPreparedToPlay;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1;
-(void)setCurrentPlaybackTime:(double)arg1;
-(double)currentPlaybackTime;
-(void)stop;

@end
