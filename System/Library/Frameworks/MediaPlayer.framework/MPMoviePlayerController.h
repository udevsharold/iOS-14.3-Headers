/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@class _MPMoviePlayerProxyView, UIView, NSURL, AVPlayerViewController, NSString;

@interface MPMoviePlayerController : NSObject <AVPlayerViewControllerDelegatePrivate, MPMediaPlayback> {

	_MPMoviePlayerProxyView* _proxyView;
	UIView* _backgroundView;
	BOOL _useApplicationAudioSession;
	BOOL _isFullscreen;
	BOOL _shouldAutoplay;
	long long _movieSourceType;
	NSURL* _contentURL;
	long long _controlStyle;
	long long _repeatMode;
	double _initialPlaybackTime;
	double _endPlaybackTime;
	AVPlayerViewController* _playerViewController;

}

@property (nonatomic,readonly) AVPlayerViewController * playerViewController;                    //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                                                   //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) unsigned long long loadState; 
@property (assign,nonatomic) long long controlStyle;                                             //@synthesize controlStyle=_controlStyle - In the implementation block
@property (assign,nonatomic) long long repeatMode;                                               //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoplay;                                                //@synthesize shouldAutoplay=_shouldAutoplay - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long scalingMode; 
@property (nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) unsigned long long movieMediaTypes; 
@property (assign,nonatomic) long long movieSourceType;                                          //@synthesize movieSourceType=_movieSourceType - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double initialPlaybackTime;                                         //@synthesize initialPlaybackTime=_initialPlaybackTime - In the implementation block
@property (assign,nonatomic) double endPlaybackTime;                                             //@synthesize endPlaybackTime=_endPlaybackTime - In the implementation block
@property (assign,nonatomic) BOOL allowsAirPlay; 
@property (getter=isAirPlayVideoActive,nonatomic,readonly) BOOL airPlayVideoActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
-(BOOL)isFullscreen;
-(long long)playbackState;
-(void)pause;
-(id)init;
-(CGSize)naturalSize;
-(unsigned long long)loadState;
-(NSURL *)contentURL;
-(void)setRepeatMode:(long long)arg1 ;
-(UIView *)view;
-(void)dealloc;
-(void)play;
-(long long)repeatMode;
-(UIView *)backgroundView;
-(void)setFullscreen:(BOOL)arg1 ;
-(id)accessLog;
-(void)endSeeking;
-(id)errorLog;
-(void)prepareToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(BOOL)isPreparedToPlay;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(void)setControlStyle:(long long)arg1 ;
-(BOOL)readyForDisplay;
-(long long)controlStyle;
-(void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(id)initWithContentURL:(id)arg1 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(void)setScalingMode:(long long)arg1 ;
-(unsigned long long)movieMediaTypes;
-(double)playableDuration;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(void)setEndPlaybackTime:(double)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)scalingMode;
-(BOOL)allowsAirPlay;
-(void)setAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2 ;
-(void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(long long)arg2 ;
-(void)cancelAllThumbnailImageRequests;
-(id)timedMetadata;
-(BOOL)useApplicationAudioSession;
-(void)setUseApplicationAudioSession:(BOOL)arg1 ;
-(id)_advertisementView;
-(id)_videoViewController;
-(void)_avPlayerItemDidPlayToEndNotification:(id)arg1 ;
-(long long)movieSourceType;
-(void)setMovieSourceType:(long long)arg1 ;
-(BOOL)shouldAutoplay;
-(double)initialPlaybackTime;
-(double)endPlaybackTime;
-(AVPlayerViewController *)playerViewController;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(double)duration;
-(double)currentPlaybackTime;
-(void)stop;
@end

