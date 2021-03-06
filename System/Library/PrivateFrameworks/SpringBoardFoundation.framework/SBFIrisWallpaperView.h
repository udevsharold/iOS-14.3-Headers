/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <libobjc.A.dylib/ISPlayerViewDelegatePrivate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperView.h>
@class NSURL;


@protocol SBFIrisWallpaperView <NSObject>
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate; 
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@property (nonatomic,copy,readonly) NSURL * videoFileURL; 
@property (nonatomic,readonly) double stillTimeInVideo; 
@required
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(double)stillTimeInVideo;
-(NSURL *)videoFileURL;
-(BOOL)isIrisInteracting;
-(long long)irisPlaybackState;
-(void)setIrisDelegate:(id)arg1;
-(id)irisGestureRecognizer;

@end


@protocol SBFIrisWallpaperViewDelegate;
@class NSURL, UIImageView, ISAVPlayer, ISPlayerView, UIGestureRecognizer, NSString;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {

	id<SBFIrisWallpaperViewDelegate> _irisDelegate;
	long long _currentMode;
	UIImageView* _imageView;
	NSURL* _videoFileURL;
	double _stillTimeInVideo;
	BOOL _useRewindPlaybackStyle;
	ISAVPlayer* _prewiredAVPlayer;
	CGSize _prewiredSize;
	ISPlayerView* _playerView;
	long long _playerState;
	long long _playbackState;
	BOOL _isInteracting;
	UIGestureRecognizer* _playerGestureRecognizer;

}

@property (nonatomic,readonly) long long currentIrisMode;                                       //@synthesize currentMode=_currentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate;              //@synthesize irisDelegate=_irisDelegate - In the implementation block
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@property (nonatomic,copy,readonly) NSURL * videoFileURL;                                       //@synthesize videoFileURL=_videoFileURL - In the implementation block
@property (nonatomic,readonly) double stillTimeInVideo;                                         //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
+(void)initialize;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(void)_setImage:(id)arg1 ;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(double)stillTimeInVideo;
-(long long)currentIrisMode;
-(void)switchToIrisMode:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(long long)wallpaperType;
-(void)_resetPrewiredAVPlayer;
-(NSURL *)videoFileURL;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(BOOL)_setupContentViewForMode:(long long)arg1 ;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(void)_setPlayerGestureRecognizer:(id)arg1 ;
-(void)_populateContentView;
-(BOOL)isIrisInteracting;
-(long long)irisPlaybackState;
-(id)videoPlayerForPlayerView:(id)arg1 ;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(void)playerViewGestureRecognizerDidChange:(id)arg1 ;
-(id)irisGestureRecognizer;
@end

