/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUDTMFSoundPlayer : NSObject {

	/*^block*/id _playSystemSoundHandler;

}

@property (nonatomic,copy) id playSystemSoundHandler;              //@synthesize playSystemSoundHandler=_playSystemSoundHandler - In the implementation block
-(id)init;
-(id)playSystemSoundHandler;
-(BOOL)attemptToPlayKey:(unsigned char)arg1 ;
-(void)setPlaySystemSoundHandler:(id)arg1 ;
-(void)attemptToPlaySoundType:(long long)arg1 ;
@end

