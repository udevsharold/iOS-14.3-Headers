/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _LTOfflineAssetManager : NSObject
+(void)initialize;
+(id)fallBackAssetResourcePath;
-(id)init;
-(void)_removeOldAssetDirectory;
-(id)configAssetInAssets:(id)arg1 ;
-(void)updateAllAssets:(/*^block*/id)arg1 ;
-(void)_refreshAllAssets:(/*^block*/id)arg1 ;
-(void)_refreshCatalogIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)assetsSortedByVersion:(id)arg1 ;
-(id)_speechTranslationAssetInfoForLocalePair:(id)arg1 installedAssets:(id)arg2 catalogAssets:(id)arg3 config:(id)arg4 error:(id*)arg5 ;
-(void)downloadAsset:(id)arg1 downloadOptions:(id)arg2 progressCallback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queryLanguagePairStatus:(/*^block*/id)arg1 ;
-(void)_downloadVoiceAsset:(id)arg1 ;
-(id)_assetIdentifiersForLanguagePairDirectory:(id)arg1 ;
-(id)_speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id*)arg2 ;
-(void)debugDumpAssets:(id)arg1 ;
-(void)updateSpeechTranslationAssetSymLinks:(id)arg1 ;
-(void)downloadVoiceAssetsForLanguagePair:(id)arg1 ;
-(void)refreshAllIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadPassthroughAssetForLocale:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)getEndpointerAssetWithType:(long long)arg1 error:(id*)arg2 ;
-(id)configurationPropertyListWithURL:(id)arg1 ;
-(id)configAssetURL;
-(void)offlineLanguageStatus:(/*^block*/id)arg1 ;
-(void)purgeAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)purgeAllAssetsExcludingConfig:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadAssetsForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)speechTranslationAssetInfoForLocalePair:(id)arg1 error:(id*)arg2 ;
-(void)assetSize:(/*^block*/id)arg1 ;
-(id)languageDetectorAssetWithError:(id*)arg1 ;
-(id)configurationPropertyListWithName:(id)arg1 ;
-(id)CDN_propertyList;
-(id)endpointAssetInfoWithContext:(id)arg1 error:(id*)arg2 ;
-(void)_clearCaches;
-(id)_configPlistWithFileName:(id)arg1 ;
-(void)downloadAsset:(id)arg1 userInitiated:(BOOL)arg2 useCellular:(BOOL)arg3 progressCallback:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)catalogAssets;
-(id)installedAssets;
-(id)_voiceAssetForLocaleIdentifier:(id)arg1 ;
-(id)matchingASRAssetForLocale:(id)arg1 inAssets:(id)arg2 ;
-(id)modelURLForLanguagePair:(id)arg1 ;
-(id)assetDirectory;
-(id)configAsset;
-(void)downloadAsset:(id)arg1 userInitiated:(BOOL)arg2 progressCallback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)assetIdentifierReferenceCountDictionary;
-(void)deleteAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
