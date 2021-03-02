/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPSImageDownloader, CPSMapsImageLoader, CPSImageStore;

@interface CPSImageLoader : NSObject {

	CPSImageDownloader* _imageDownloader;
	CPSMapsImageLoader* _mapsImageLoader;
	CPSImageStore* _imageStore;

}

@property (nonatomic,retain) CPSImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) CPSMapsImageLoader * mapsImageLoader;              //@synthesize mapsImageLoader=_mapsImageLoader - In the implementation block
@property (nonatomic,retain) CPSImageStore * imageStore;                        //@synthesize imageStore=_imageStore - In the implementation block
-(id)init;
-(CPSImageStore *)imageStore;
-(void)setImageStore:(CPSImageStore *)arg1 ;
-(void)loadImageWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CPSImageDownloader *)imageDownloader;
-(CPSMapsImageLoader *)mapsImageLoader;
-(void)setImageDownloader:(CPSImageDownloader *)arg1 ;
-(void)setMapsImageLoader:(CPSMapsImageLoader *)arg1 ;
@end
