/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFWallpaperDataStore <NSObject>
@required
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1;
-(BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(void)removeWallpaperColorForVariants:(long long)arg1;
-(void)removeWallpaperGradientForVariants:(long long)arg1;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)removeVideoForVariant:(long long)arg1;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
-(void)removeProceduralWallpaperForVariants:(long long)arg1;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
-(id)wallpaperColorNameForVariant:(long long)arg1;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1;
-(id)wallpaperGradientForVariant:(long long)arg1;
-(void)removeWallpaperOptionsForVariants:(long long)arg1;
-(id)wallpaperColorForVariant:(long long)arg1;
-(id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;

@end

