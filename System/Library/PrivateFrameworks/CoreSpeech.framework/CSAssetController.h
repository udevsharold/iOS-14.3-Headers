/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary, NSString;

@interface CSAssetController : NSObject <CSEventMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _assetsMigrationQueue;
	NSDictionary* _csAssetsDictionary;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetsMigrationQueue;              //@synthesize assetsMigrationQueue=_assetsMigrationQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * csAssetsDictionary;                              //@synthesize csAssetsDictionary=_csAssetsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                                //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getLanguageDetectorAssetTypeString;
+(id)getEndpointAssetTypeString;
+(unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;
+(void)addKeyValuePairForQuery:(id*)arg1 assetType:(unsigned long long)arg2 ;
+(id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2 ;
+(id)getVoiceTriggerAssetTypeString;
+(id)sharedController;
+(unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+(id)getAdBlockerAssetTypeString;
+(unsigned long long)getAdBlockerCurrentCompatibilityVersion;
+(unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+(id)getAssetTypeStringForType:(unsigned long long)arg1 ;
+(unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+(id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3 ;
+(id)getSpeakerRecognitionAssetTypeString;
-(id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(void)setCsAssetsDictionary:(NSDictionary *)arg1 ;
-(void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)fetchRemoteMetaOfType:(unsigned long long)arg1 ;
-(id)_findLatestInstalledAsset:(id)arg1 ;
-(NSMutableDictionary *)observers;
-(void)_downloadAsset:(id)arg1 withComplete:(/*^block*/id)arg2 ;
-(void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_defaultDownloadOptions;
-(void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_assetQueryForAssetType:(unsigned long long)arg1 ;
-(id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(NSDictionary *)csAssetsDictionary;
-(void)_startDownloadingAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(BOOL)arg2 ;
-(BOOL)_isReadyToUse;
-(void)CSEventMonitorDidReceiveEvent:(id)arg1 ;
-(id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 ;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAssetsMigrationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(/*^block*/id)arg2 ;
-(id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanUpMobileAssetV1Directory;
-(void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)assetOfType:(unsigned long long)arg1 language:(id)arg2 ;
-(BOOL)_isRetryRecommendedWithResult:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetsMigrationQueue;
@end

