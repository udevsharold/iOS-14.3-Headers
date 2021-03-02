/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/FCAVAssetResourceLoaderType.h>

@class FCAssetManager, FCThreadSafeMutableSet, NSString;

@interface FCAVAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType> {

	FCAssetManager* _assetManager;
	FCThreadSafeMutableSet* _whitelistedMasterPlaylistURLs;

}

@property (nonatomic,readonly) FCAssetManager * assetManager;                                       //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableSet * whitelistedMasterPlaylistURLs;              //@synthesize whitelistedMasterPlaylistURLs=_whitelistedMasterPlaylistURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCAssetManager *)assetManager;
-(id)init;
-(FCThreadSafeMutableSet *)whitelistedMasterPlaylistURLs;
-(void)registerAVURLAssetForAutomaticResourceManagement:(id)arg1 ;
-(void)prefetchMasterPlaylistForAssetURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(BOOL)_isHLSURL:(id)arg1 ;
@end
