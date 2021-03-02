/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {

	float _preferredRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(NSArray *)supportedPlaybackRates;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(float)preferredRate;
-(id)newCommandEventWithPlaybackRate:(float)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredRate:(float)arg1 ;
@end
