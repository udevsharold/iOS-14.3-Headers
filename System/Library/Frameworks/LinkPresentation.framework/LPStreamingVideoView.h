/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideoView.h>

@class AVQueuePlayer, AVPlayerLooper, AVPlayerLayer;

@interface LPStreamingVideoView : LPVideoView {

	AVQueuePlayer* _player;
	AVPlayerLooper* _looper;
	AVPlayerLayer* _playerLayer;
	/*^block*/id _readyForDisplayCallback;
	BOOL _hasCreatedVideoPlayerView;
	BOOL _isWaitingToRetryAfterFailingToPlay;
	unsigned _playbackRetryCountWithoutSuccess;
	BOOL _desiredPlayingState;
	float _desiredVolume;

}
-(void)setMuted:(BOOL)arg1 ;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)isMuted;
-(void)setPlaying:(BOOL)arg1 ;
-(void)dealloc;
-(void)destroyPlayer;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToPlaceholderView;
-(void)didFailToPlay;
-(void)createPlayerIfNeeded;
-(void)layoutComponentView;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(void)beginLoadingMediaForPreroll;
-(BOOL)releaseDecodingResourcesIfInactive;
-(BOOL)usesSharedAudioSession;
-(BOOL)shouldShowMuteButton;
-(id)createFullScreenVideoViewController;
-(BOOL)usesCustomFullScreenImplementation;
-(id)createVideoPlayerView;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)shouldAutoPlay;
@end

