/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKVideoControllerDelegate <NSObject>
@optional
-(void)videoPlayerControllerIsReadyToPlay:(id)arg1;
-(void)videoPlayerController:(id)arg1 stateDidChange:(unsigned long long)arg2;
-(void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;

@required
-(void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
-(void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;

@end
