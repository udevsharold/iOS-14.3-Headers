/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioPCMBuffer, AVAudioTime;

@interface AXHATimedAudioBuffer : NSObject {

	AVAudioPCMBuffer* _buffer;
	AVAudioTime* _time;

}

@property (nonatomic,retain) AVAudioPCMBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) AVAudioTime * time;                     //@synthesize time=_time - In the implementation block
-(void)setTime:(AVAudioTime *)arg1 ;
-(void)setBuffer:(AVAudioPCMBuffer *)arg1 ;
-(AVAudioTime *)time;
-(AVAudioPCMBuffer *)buffer;
-(id)initWithBuffer:(id)arg1 atTime:(id)arg2 ;
@end

