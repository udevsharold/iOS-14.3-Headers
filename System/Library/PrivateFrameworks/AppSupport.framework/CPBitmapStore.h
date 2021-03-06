/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCache, NSObject;

@interface CPBitmapStore : NSObject {

	NSString* _path;
	NSString* _imagePath;
	NSCache* _cache;
	int _version;
	NSString* _versionPath;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
	BOOL _lockOnRead;

}

@property (nonatomic,readonly) int version; 
@property (assign,nonatomic) BOOL lockOnRead;                                //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
-(void)purge;
-(BOOL)lockOnRead;
-(id)imagePath;
-(id)imageNameForKey:(id)arg1 inGroup:(id)arg2 ;
-(id)cacheNumberForKey:(id)arg1 ;
-(void)commitTxn;
-(BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(unsigned)memContentOffset;
-(BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(CGImageRef)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 scale:(double)arg5 fillMem:(/*^block*/id)arg6 alternateCompletion:(/*^block*/id)arg7 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 formatColor:(CGColorRef)arg5 scale:(double)arg6 data:(id)arg7 ;
-(CGImageRef)copyImageForKey:(id)arg1 ;
-(CGImageRef)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 draw:(/*^block*/id)arg6 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6 ;
-(void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6 ;
-(void)removeImagesInGroups:(id)arg1 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 scale:(double)arg5 data:(id)arg6 ;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)cacheItemLimit;
-(void)setLockOnRead:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 version:(int)arg2 ;
-(void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(CGImageRef)arg4 ;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(id)allGroups;
-(void)commitTransaction;
-(int)version;
-(unsigned long long)imageCount;
-(int)setVersion:(int)arg1 ;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_versionPath;
@end

