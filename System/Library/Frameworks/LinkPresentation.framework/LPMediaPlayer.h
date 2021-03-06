/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPMediaPlayer <NSObject>
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (nonatomic,readonly) BOOL usesSharedAudioSession; 
@property (nonatomic,readonly) BOOL shouldUnmuteWhenUserAdjustsVolume; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestamp; 
@property (nonatomic,readonly) double unobscuredAreaFraction; 
@optional
-(unsigned long long)lastInteractionTimestamp;
-(double)unobscuredAreaFraction;
-(BOOL)releaseDecodingResourcesIfInactive;

@required
-(BOOL)isFullScreen;
-(BOOL)isMuted;
-(BOOL)shouldUnmuteWhenUserAdjustsVolume;
-(void)setActive:(BOOL)arg1;
-(BOOL)isPlaying;
-(BOOL)isActive;
-(BOOL)usesSharedAudioSession;

@end

