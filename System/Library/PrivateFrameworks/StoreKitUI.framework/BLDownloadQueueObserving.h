/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLDownloadQueueObserving <NSObject>
@optional
-(void)downloadQueue:(id)arg1 purchaseAttemptForRequest:(id)arg2;
-(void)downloadQueue:(id)arg1 purchaseAttemptForID:(id)arg2 buyParams:(id)arg3 isAudioBook:(BOOL)arg4;
-(void)downloadQueueDownloadsDidChange:(id)arg1;
-(void)downloadQueue:(id)arg1 purchasedDidCompleteWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidFailWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;

@end
