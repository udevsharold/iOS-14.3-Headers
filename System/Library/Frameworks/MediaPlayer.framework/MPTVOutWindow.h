/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(BOOL)setVideoView:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)videoView;
-(BOOL)_setupTargetScreen:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
@end
