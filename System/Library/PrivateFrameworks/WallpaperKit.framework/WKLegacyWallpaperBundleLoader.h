/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSFileManager, NSDictionary;

@interface WKLegacyWallpaperBundleLoader : NSObject {

	NSObject*<OS_dispatch_queue> __loadingQueue;
	NSFileManager* __fileManager;
	NSDictionary* __wallpaperBundleLookup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _loadingQueue;              //@synthesize _loadingQueue=__loadingQueue - In the implementation block
@property (nonatomic,retain) NSFileManager * _fileManager;                            //@synthesize _fileManager=__fileManager - In the implementation block
@property (nonatomic,retain) NSDictionary * _wallpaperBundleLookup;                   //@synthesize _wallpaperBundleLookup=__wallpaperBundleLookup - In the implementation block
+(id)legacyWallpaperDirectories;
+(id)defaultWallpaperBundleLoader;
-(id)init;
-(NSFileManager *)_fileManager;
-(NSObject*<OS_dispatch_queue>)_loadingQueue;
-(void)_loadAllValidWallpaperBundlesFromLegacyLocation;
-(void)set_wallpaperBundleLookup:(NSDictionary *)arg1 ;
-(NSDictionary *)_wallpaperBundleLookup;
-(id)wallpaperBundleForIdentifier:(long long)arg1 ;
-(void)set_loadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_fileManager:(NSFileManager *)arg1 ;
@end

