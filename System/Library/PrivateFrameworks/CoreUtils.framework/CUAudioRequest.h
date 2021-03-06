/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioPlayer, NSString;

@interface CUAudioRequest : NSObject {

	AVAudioPlayer* _audioPlayer;
	/*^block*/id _completion;
	NSString* _label;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;              //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                           //@synthesize label=_label - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

