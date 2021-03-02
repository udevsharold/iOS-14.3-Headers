/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@class PKDirectoryCoordinator, PKRemoteAssetManager, NSArray, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	PKDirectoryCoordinator* _coordinator;
	BOOL _remoteAssetManagerAccessed;
	PKRemoteAssetManager* _remoteAssetManager;
	NSArray* _seids;
	BOOL _ownsFileURL;
	NSURL* _fileURL;

}

@property (assign,nonatomic) BOOL ownsFileURL;               //@synthesize ownsFileURL=_ownsFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(id)content;
-(id)bundle;
-(id)init;
-(void)dealloc;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)archiveData;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(BOOL)ownsFileURL;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 coordinator:(id)arg3 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)manifestHash;
-(BOOL)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3 ;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(void)setOwnsFileURL:(BOOL)arg1 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)serializedFileWrapper;
-(id)remoteAssetManager;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(id)displayProfileOfType:(long long)arg1 ;
-(id)dictionary;
@end
