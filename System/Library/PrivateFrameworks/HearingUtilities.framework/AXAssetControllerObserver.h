/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAssetControllerObserver <NSObject>
@optional
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(BOOL)arg5 expectedTimeRemaining:(double)arg6;
-(void)assetController:(id)arg1 willUpdateCatalogForPolicy:(id)arg2;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5;
-(void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;
-(void)assetController:(id)arg1 didUpdateCatalogForPolicy:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4;

@end
