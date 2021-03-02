/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DCDataCryptorDelegate, OS_dispatch_queue;
#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSURL, NSObject, DCLRUCache, NSMutableDictionary;

@interface ICDocCamImageCache : NSObject {

	id<DCDataCryptorDelegate> _dataCryptorDelegate;
	NSURL* _cachesDirectoryURL;
	NSURL* _docCamImageDirectoryURL;
	NSObject*<OS_dispatch_queue> _imageCacheQueue;
	DCLRUCache* _inMemoryImageCache;
	NSMutableDictionary* _imageSizeCache;

}

@property (nonatomic,readonly) NSURL * cachesDirectoryURL;                               //@synthesize cachesDirectoryURL=_cachesDirectoryURL - In the implementation block
@property (nonatomic,readonly) NSURL * docCamImageDirectoryURL;                          //@synthesize docCamImageDirectoryURL=_docCamImageDirectoryURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageCacheQueue;               //@synthesize imageCacheQueue=_imageCacheQueue - In the implementation block
@property (nonatomic,retain) DCLRUCache * inMemoryImageCache;                            //@synthesize inMemoryImageCache=_inMemoryImageCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageSizeCache;                       //@synthesize imageSizeCache=_imageSizeCache - In the implementation block
@property (nonatomic,retain) id<DCDataCryptorDelegate> dataCryptorDelegate;              //@synthesize dataCryptorDelegate=_dataCryptorDelegate - In the implementation block
-(id)init;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)dealloc;
-(DCLRUCache *)inMemoryImageCache;
-(NSURL *)cachesDirectoryURL;
-(id<DCDataCryptorDelegate>)dataCryptorDelegate;
-(id)getImageURL:(id)arg1 async:(BOOL)arg2 ;
-(CGSize)getImageSize:(id)arg1 ;
-(id)getImage:(id)arg1 ;
-(id)setImage:(id)arg1 metaData:(id)arg2 ;
-(BOOL)replaceImage:(id)arg1 metaData:(id)arg2 uuid:(id)arg3 ;
-(id)setImage:(id)arg1 metaData:(id)arg2 addToMemoryCache:(BOOL)arg3 ;
-(BOOL)deleteImage:(id)arg1 ;
-(NSMutableDictionary *)imageSizeCache;
-(void)setImageSizeCache:(NSMutableDictionary *)arg1 ;
-(id)initWithDataCryptorDelegate:(id)arg1 ;
-(BOOL)deleteAllImages;
-(id)initWithDataCryptorDelegate:(id)arg1 cachesDirectoryURL:(id)arg2 ;
-(BOOL)makeSureScanDirectoryExists:(id*)arg1 ;
-(id)getImageURL:(id)arg1 ;
-(NSURL *)docCamImageDirectoryURL;
-(NSObject*<OS_dispatch_queue>)imageCacheQueue;
-(id)createNSDataFrom:(id)arg1 metaData:(id)arg2 ;
-(void)clearInMemoryCache;
-(void)setDataCryptorDelegate:(id<DCDataCryptorDelegate>)arg1 ;
-(void)setImageCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInMemoryImageCache:(DCLRUCache *)arg1 ;
@end
