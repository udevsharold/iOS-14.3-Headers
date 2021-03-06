/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue;
@class NSObject, MPStoreDownloadManager, NSMutableDictionary, NSString;

@interface ATMPStoreAssetLink : NSObject <MPStoreDownloadManagerObserver, ATAssetLink> {

	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	MPStoreDownloadManager* _downloadManager;
	NSMutableDictionary* _assetMap;
	NSMutableDictionary* _downloadsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(id)init;
-(id)_assetTypeForStoreKind:(id)arg1 ;
-(BOOL)isOpen;
-(void)cancelAssets:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3 ;
-(unsigned long long)maximumBatchSize;
-(void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3 ;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(id)_dataClassForStoreKind:(id)arg1 ;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(void)close;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(BOOL)open;
-(void)_enqueueAssets:(id)arg1 ;
-(unsigned long long)priority;
-(id<ATAssetLinkDelegate>)delegate;
-(id)_errorForFinishedDownload:(id)arg1 ;
@end

