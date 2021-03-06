/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand {

	NSArray* _supportedShuffleTypes;
	long long _currentShuffleType;

}

@property (assign,nonatomic) long long currentShuffleType;              //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
-(id)newCommandEventWithType:(long long)arg1 ;
-(void)setSupportedShuffleTypes:(id)arg1 ;
-(void)setCurrentShuffleType:(long long)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(BOOL)arg2 ;
-(id)_mediaRemoteCommandInfoOptions;
-(long long)currentShuffleType;
@end

