/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerViewControllerContentViewDelegate <NSObject>
@required
-(void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2;
-(void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2;
-(BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
-(void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
-(void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)arg1;
-(void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1;
-(BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
-(BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1;
-(UIEdgeInsets*)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1;
-(void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
-(BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1;
-(id)playerViewControllerContentViewOverrideLayoutClass:(id)arg1;
-(void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)arg1;

@end
