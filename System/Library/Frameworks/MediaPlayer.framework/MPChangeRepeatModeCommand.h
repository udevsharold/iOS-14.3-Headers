/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	NSArray* _supportedRepeatTypes;
	long long _currentRepeatType;

}

@property (assign,nonatomic) long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(void)setSupportedRepeatTypes:(id)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 ;
-(long long)currentRepeatType;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2 ;
@end

