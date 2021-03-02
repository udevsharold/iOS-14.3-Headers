/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMediaDownloadObserver <NSObject>
@optional
-(void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
-(void)downloadManager:(id)arg1 didCancelAssets:(id)arg2;
-(void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;
-(void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
-(void)downloadManager:(id)arg1 didChangeDownloadPausedReasonForAssets:(id)arg2;

@end
