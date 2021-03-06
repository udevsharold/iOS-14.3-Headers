/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface PKIconImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheAccessQueue;
	NSDictionary* _iconCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheAccessQueue;              //@synthesize cacheAccessQueue=_cacheAccessQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * iconCache;                                   //@synthesize iconCache=_iconCache - In the implementation block
+(id)settingsIconCache;
+(id)settingsIconCacheWithScale:(double)arg1 ;
-(NSDictionary *)iconCache;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(id)initWithPath:(id)arg1 scale:(double)arg2 ;
-(id)allImageIconKeys;
-(void)setIconCache:(NSDictionary *)arg1 ;
-(void)setCacheAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)imageForKey:(id)arg1 ;
@end

