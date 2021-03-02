/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class NSPointerArray, AVSpeechSynthesizer, NSString;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {

	SCNetworkReachabilityRef _reachability;
	NSPointerArray* _delegates;
	AVSpeechSynthesizer* _samplePlayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)_assetTypeForVoiceId:(id)arg1 ;
-(void)cleanUpExtraInstalledAssetsIfNecessary:(id)arg1 ;
-(void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(id)init;
-(void)removeSiriVoiceUsage:(id)arg1 ;
-(void)replaceTestAsset:(id)arg1 withAsset:(id)arg2 ;
-(id)mobileAssetDownloadQueue;
-(void)dealloc;
-(void)_updateAllowedToDownload;
-(id)_allInstalledAssetsForVoiceId:(id)arg1 ;
-(BOOL)allowedToDownloadVoiceAssets;
-(id)selectedIdsForTesting;
-(BOOL)_voiceIdIsVocalizerVoice:(id)arg1 ;
-(void)setAssetsForTesting:(id)arg1 ;
-(void)stopDownloadingAlternateVoice:(id)arg1 ;
-(void)_handleAssetProgress:(id)arg1 voiceId:(id)arg2 diskSize:(long long)arg3 asset:(id)arg4 ;
-(long long)diskSizeForAsset:(id)arg1 ;
-(void)playSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_allAssetsForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(void)clientUpdateAvailableSpeechAssets;
-(void)setSelectedIdsForTesting:(id)arg1 ;
-(id)mobileAssetWorkQueue;
-(void)updateAvailableSpeechAssetsSynchronously;
-(void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(id)_assetForVoiceId:(id)arg1 forDeletion:(BOOL)arg2 ;
-(id)_assetUpdaterClient;
-(void)deleteDownloadAlternateVoice:(id)arg1 ;
-(void)startDownloadingAlternateVoice:(id)arg1 ;
-(void)_startDownloadingAlternateVoice:(id)arg1 ;
-(id)_cachedAssetForVoiceId:(id)arg1 ;
-(id)assetForVoiceId:(id)arg1 ;
-(id)allInstalledAssetsForVoiceId:(id)arg1 ;
-(id)_mobileAssetDownloadOptions;
-(id)_currentDelegates;
-(id)assetsForTesting;
-(BOOL)inUnitTestMode;
@end
