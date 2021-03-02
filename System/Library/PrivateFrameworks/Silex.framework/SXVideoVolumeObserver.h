/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>
#import <libobjc.A.dylib/SXVideoVolumeObserving.h>

@class SXPlaybackCoordinator, AVAudioSession, SVKeyValueObserver, NSString;

@interface SXVideoVolumeObserver : NSObject <SXVideoPlaybackObserver, SXVideoVolumeObserving> {

	BOOL _muted;
	float _volume;
	/*^block*/id _volumeChangeBlock;
	/*^block*/id _muteStateChangeBlock;
	SXPlaybackCoordinator* _playbackCoordinator;
	AVAudioSession* _audioSession;
	SVKeyValueObserver* _outputVolumeObserver;

}

@property (nonatomic,__weak,readonly) SXPlaybackCoordinator * playbackCoordinator;              //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) AVAudioSession * audioSession;                            //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * outputVolumeObserver;                       //@synthesize outputVolumeObserver=_outputVolumeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted;                                                      //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) float volume;                                                    //@synthesize volume=_volume - In the implementation block
@property (setter=onVolumeChange:,nonatomic,copy) id volumeChangeBlock;                         //@synthesize volumeChangeBlock=_volumeChangeBlock - In the implementation block
@property (setter=onMuteStateChange:,nonatomic,copy) id muteStateChangeBlock;                   //@synthesize muteStateChangeBlock=_muteStateChangeBlock - In the implementation block
-(float)volume;
-(BOOL)muted;
-(SXPlaybackCoordinator *)playbackCoordinator;
-(AVAudioSession *)audioSession;
-(void)volumeChanged:(float)arg1 ;
-(void)playbackCoordinatorMuteStateChanged:(id)arg1 ;
-(void)updateWithVolume:(float)arg1 muted:(BOOL)arg2 ;
-(id)volumeChangeBlock;
-(id)muteStateChangeBlock;
-(void)onVolumeChange:(/*^block*/id)arg1 ;
-(void)onMuteStateChange:(/*^block*/id)arg1 ;
-(id)initWithPlaybackCoordinator:(id)arg1 audioSession:(id)arg2 ;
-(SVKeyValueObserver *)outputVolumeObserver;
@end
