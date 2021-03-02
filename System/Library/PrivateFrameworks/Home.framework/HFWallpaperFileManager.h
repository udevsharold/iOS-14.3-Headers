/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface HFWallpaperFileManager : NSObject {

	NSURL* _wallpaperFolderURL;

}

@property (nonatomic,retain) NSURL * wallpaperFolderURL;              //@synthesize wallpaperFolderURL=_wallpaperFolderURL - In the implementation block
-(id)filenameForWallpaper:(id)arg1 ;
-(BOOL)originalImageExistsForWallpaper:(id)arg1 ;
-(id)init;
-(id)originalImageForWallpaper:(id)arg1 ;
-(void)saveOriginalImage:(id)arg1 forWallpaper:(id)arg2 ;
-(void)pruneUnusedOriginalWallpaperImages:(id)arg1 ;
-(NSURL *)wallpaperFolderURL;
-(void)setWallpaperFolderURL:(NSURL *)arg1 ;
@end
