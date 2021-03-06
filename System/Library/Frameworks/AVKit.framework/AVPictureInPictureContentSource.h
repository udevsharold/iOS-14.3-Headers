/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIWindow;


@protocol AVPictureInPictureContentSource <NSObject>
@property (nonatomic,readonly) CGRect avkit_videoRectInWindow; 
@property (nonatomic,readonly) BOOL avkit_isVisible; 
@property (nonatomic,readonly) UIWindow * avkit_window; 
@required
-(id)avkit_makePlayerControllerIfNeeded:(id)arg1;
-(id)avkit_pictureInPictureViewController;
-(CGRect)avkit_videoRectInWindow;
-(BOOL)avkit_isVisible;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(UIWindow *)avkit_window;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;

@end

