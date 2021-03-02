/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject {

	TUSoundPlayer* _player;
	long long _currentlyPlayingSoundType;

}

@property (nonatomic,retain) TUSoundPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingSoundType;              //@synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(void)setPlayer:(TUSoundPlayer *)arg1 ;
-(id)init;
-(BOOL)isPlaying;
-(TUSoundPlayer *)player;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)attemptToPlayDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)currentlyPlayingSoundType;
-(void)setCurrentlyPlayingSoundType:(long long)arg1 ;
-(BOOL)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 ;
-(BOOL)attemptToPlayDescriptor:(id)arg1 ;
-(void)stopPlaying;
@end
