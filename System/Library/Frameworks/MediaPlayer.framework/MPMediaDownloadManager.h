/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/ATDownloadProgressObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSMutableDictionary, NSXPCConnection, MPStoreDownloadManager, NSHashTable, NSObject, NSArray, NSString;

@interface MPMediaDownloadManager : NSObject <NSXPCListenerDelegate, MPStoreDownloadManagerObserver, ATDownloadProgressObserver> {

	NSMutableOrderedSet* _cachedATDownloads;
	NSMutableDictionary* _cachedProgressMap;
	NSMutableOrderedSet* _cachedATUnEnqueuedDownloads;
	NSMutableDictionary* _cachedATPausedDownloads;
	NSXPCConnection* __downloadProgressConnection;
	NSXPCConnection* __keepLocalTaskConnection;
	MPStoreDownloadManager* _storeDownloadManager;
	NSHashTable* _downloadObservers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	BOOL _hasRequiredAirTrafficEntitlement;

}

@property (nonatomic,readonly) NSArray * allMediaDownloadLibraryIdentifiers; 
@property (nonatomic,readonly) long long activeDownloadsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2 ;
-(id)downloadForIdentifierSet:(id)arg1 downloadState:(long long*)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(id)init;
-(void)_notifyObserversOfAssetDownloadProgress:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)_keepLocalTaskConnection;
-(void)addObserver:(id)arg1 ;
-(NSArray *)allMediaDownloadLibraryIdentifiers;
-(void)atcDidEnqueueAsset:(id)arg1 ;
-(id)_statusChangeObservers;
-(void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2 ;
-(void)_prefectchAllATDownloads;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2 ;
-(id)_updateCacheAndGetItemToReportForATAssetDownloadPauseReasonChange:(id)arg1 ;
-(id)_init;
-(id)_downloadProgressConnection;
-(void)_notifyObserversOfDownloadPauseReasonChangedForAssets:(id)arg1 ;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1 ;
-(BOOL)hasActiveDownloads;
-(void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2 ;
-(BOOL)_isValidMediaAsset:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(id)activeDownloadForStoreID:(long long)arg1 ;
-(void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_notifyObserversOfDownloadCompleteForAssets:(id)arg1 withError:(id)arg2 ;
-(BOOL)_hasRequiredAirTrafficEntitlement;
-(void)cancelDownloads:(id)arg1 ;
-(id)activeDownloadForMediaItemPersistentID:(long long)arg1 ;
-(void)prioritizeDownload:(long long)arg1 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(id)_updateCacheAndItemToReportForATAssetDownloadProgressChange:(id)arg1 ;
-(void)downloadLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg1 ;
-(long long)activeDownloadsCount;
@end
