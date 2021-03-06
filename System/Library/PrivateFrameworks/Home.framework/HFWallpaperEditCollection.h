/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFWallpaper, HFWallpaperSlice;

@interface HFWallpaperEditCollection : NSObject {

	HFWallpaper* _wallpaper;
	HFWallpaperSlice* _originalSlice;
	HFWallpaperSlice* _processedSlice;

}

@property (nonatomic,readonly) HFWallpaper * wallpaper;                        //@synthesize wallpaper=_wallpaper - In the implementation block
@property (nonatomic,readonly) HFWallpaperSlice * originalSlice;               //@synthesize originalSlice=_originalSlice - In the implementation block
@property (nonatomic,readonly) HFWallpaperSlice * processedSlice;              //@synthesize processedSlice=_processedSlice - In the implementation block
-(HFWallpaper *)wallpaper;
-(id)description;
-(HFWallpaperSlice *)originalSlice;
-(HFWallpaperSlice *)processedSlice;
-(id)initWithWallpaper:(id)arg1 originalSlice:(id)arg2 processedSlice:(id)arg3 ;
@end

