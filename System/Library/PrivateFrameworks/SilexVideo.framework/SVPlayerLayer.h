/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class SVImageLayer, AVPlayerLayer, SVLooper, SVKeyValueObserver, SVNonAnimatingDelegate, AVPlayer, NSString;

@interface SVPlayerLayer : CALayer {

	SVImageLayer* _stillImageLayer;
	AVPlayerLayer* _playerLayer;
	SVLooper* _looper;
	SVKeyValueObserver* _readyForDisplayObserver;
	SVKeyValueObserver* _statusObserver;
	SVNonAnimatingDelegate* _nonAnimatingDelegate;
	unsigned long long _currentPlaybackKind;

}

@property (nonatomic,retain) AVPlayerLayer * playerLayer;                                //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) SVLooper * looper;                                          //@synthesize looper=_looper - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * readyForDisplayObserver;               //@synthesize readyForDisplayObserver=_readyForDisplayObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * statusObserver;                        //@synthesize statusObserver=_statusObserver - In the implementation block
@property (nonatomic,retain) SVNonAnimatingDelegate * nonAnimatingDelegate;              //@synthesize nonAnimatingDelegate=_nonAnimatingDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long currentPlaybackKind;                     //@synthesize currentPlaybackKind=_currentPlaybackKind - In the implementation block
@property (readonly) SVImageLayer * stillImageLayer;                                     //@synthesize stillImageLayer=_stillImageLayer - In the implementation block
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)initialize;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)sceneWillEnterForeground;
-(SVLooper *)looper;
-(void)sceneDidEnterBackground;
-(void)pause;
-(id)initWithLayer:(id)arg1 ;
-(id)init;
-(void)layoutSublayers;
-(void)dealloc;
-(void)play;
-(AVPlayer *)player;
-(id)initWithCoder:(id)arg1 ;
-(void)setLooper:(SVLooper *)arg1 ;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)playWithPlaybackKind:(unsigned long long)arg1 looping:(BOOL)arg2 ;
-(SVImageLayer *)stillImageLayer;
-(NSString *)videoGravity;
-(AVPlayerLayer *)playerLayer;
-(void)setStatusObserver:(SVKeyValueObserver *)arg1 ;
-(SVKeyValueObserver *)statusObserver;
-(SVKeyValueObserver *)readyForDisplayObserver;
-(void)setReadyForDisplayObserver:(SVKeyValueObserver *)arg1 ;
-(void)reduceMotionStatusDidChange;
-(void)setCurrentPlaybackKind:(unsigned long long)arg1 ;
-(unsigned long long)currentPlaybackKind;
-(SVNonAnimatingDelegate *)nonAnimatingDelegate;
-(void)setNonAnimatingDelegate:(SVNonAnimatingDelegate *)arg1 ;
@end
