/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController, NSString;


@protocol MPCVideoOutput <NSObject>
@property (assign,nonatomic,__weak) id<MPCVideoOutputDelegate> videoOutputDelegate; 
@property (nonatomic,readonly) UIViewController * playerViewController; 
@property (assign,nonatomic) BOOL showsPlaybackControls; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@required
-(void)setVideoGravity:(id)arg1;
-(void)showFullScreenPresentationFromView:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)showsPlaybackControls;
-(UIViewController *)playerViewController;
-(BOOL)isReadyForDisplay;
-(void)exitFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)enterFullScreenWithCompletion:(/*^block*/id)arg1;
-(void)setShowsPlaybackControls:(BOOL)arg1;
-(NSString *)videoGravity;
-(CGRect)videoBounds;
-(id<MPCVideoOutputDelegate>)videoOutputDelegate;
-(void)setVideoOutputDelegate:(id)arg1;

@end

