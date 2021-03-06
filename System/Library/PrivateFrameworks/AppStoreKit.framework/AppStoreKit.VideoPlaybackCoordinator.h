/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppStoreKit.VideoPlaybackCoordinator : NSObject {

	 videoViews;
	 videoViewFrameOverrides;
	 playbackQueue;
	 playbackFrame;
	 parentViewController;
	 playbackCoalescingWaitTime;
	??? metricsPipeline;
	 playbackWorkItem;
	 _isGlobalAutoPlayEnabled;
	 isAutoPlayEnabled;
	 isAutoPlayActive;
	 shouldLoopAutoPlayback;
	 shouldLoopSingleVideo;
	 currentPlaybackIndex;
	 activeVideo;

}
-(void)didEnterBackground;
-(id)init;
-(void)didChangeAutoPlayVideoSetting:(id)arg1 ;
-(void)willEnterForeground;
@end

