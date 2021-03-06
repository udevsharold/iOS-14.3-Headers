/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPAssetCacheClientCache;

@interface SPCompanionAssetCache : NSObject {

	SPAssetCacheClientCache* _permanentCache;
	SPAssetCacheClientCache* _transientCache;

}

@property (nonatomic,retain) SPAssetCacheClientCache * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPAssetCacheClientCache * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)cachedImages;
-(id)keyFromImageData:(id)arg1 ;
-(BOOL)imageInTransientCache:(id)arg1 ;
-(void)addImageReferenceToTransientCache:(id)arg1 withName:(id)arg2 ;
-(id)dataForImageWithName:(id)arg1 ;
-(BOOL)addImageToPermanentCache:(id)arg1 withName:(id)arg2 ;
-(void)removeImageFromPermanentCacheWithName:(id)arg1 ;
-(void)removeAllImagesFromPermanentCache;
-(SPAssetCacheClientCache *)permanentCache;
-(void)setPermanentCache:(SPAssetCacheClientCache *)arg1 ;
-(SPAssetCacheClientCache *)transientCache;
-(void)setTransientCache:(SPAssetCacheClientCache *)arg1 ;
-(void)handleCacheMessage:(id)arg1 ;
-(void)addedAsset:(id)arg1 ;
-(void)deletedAsset:(id)arg1 ;
-(void)clearedCache:(id)arg1 ;
-(void)syncCache:(id)arg1 ;
-(BOOL)imageInPermanentCache:(id)arg1 ;
@end

