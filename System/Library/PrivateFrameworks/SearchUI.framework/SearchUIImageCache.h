/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface SearchUIImageCache : NSObject {

	NSCache* _imageCache;

}

@property (retain) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)cachedTlkImageForSFImage:(id)arg1 ;
+(void)cacheTLKImage:(id)arg1 forSFImage:(id)arg2 ;
+(id)sharedCache;
-(NSCache *)imageCache;
-(id)init;
-(void)setImageCache:(NSCache *)arg1 ;
-(void)dateDidChange;
-(void)appIconImageDidChange:(id)arg1 ;
-(void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1 ;
@end
