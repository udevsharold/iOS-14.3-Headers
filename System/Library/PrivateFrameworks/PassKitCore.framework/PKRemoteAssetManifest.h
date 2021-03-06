/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, NSArray, NSDictionary;

@interface PKRemoteAssetManifest : NSObject {

	NSURL* _fileURL;
	NSURL* _passURL;
	NSMutableDictionary* _remoteAssets;
	NSArray* _encryptedDeviceSpecificRemoteAssetFilenames;

}

@property (nonatomic,readonly) NSURL * fileURL;                                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * remoteAssets;                                        //@synthesize remoteAssets=_remoteAssets - In the implementation block
@property (nonatomic,readonly) NSArray * encryptedDeviceSpecificRemoteAssetFilenames;              //@synthesize encryptedDeviceSpecificRemoteAssetFilenames=_encryptedDeviceSpecificRemoteAssetFilenames - In the implementation block
+(Class)_remoteAssestManifestItemClassWithValues:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 deviceSEIDs:(id)arg3 error:(id*)arg4 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificAsset;
-(NSDictionary *)remoteAssets;
-(id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(NSArray *)encryptedDeviceSpecificRemoteAssetFilenames;
@end

