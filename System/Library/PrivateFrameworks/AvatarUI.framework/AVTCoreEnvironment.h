/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTUILogger, AVTBlockScheduler;
@class NSURL, NSNotificationCenter;

@interface AVTCoreEnvironment : NSObject {

	NSURL* _storeLocation;
	NSURL* _imageStoreLocation;
	NSURL* _stickerImageStoreLocation;
	NSURL* _imageCacheStoreLocation;
	id<AVTUILogger> _logger;
	id<AVTBlockScheduler> _scheduler;
	/*^block*/id _serialQueueProvider;
	/*^block*/id _lockProvider;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTBlockScheduler> scheduler;                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,copy,readonly) id serialQueueProvider;                            //@synthesize serialQueueProvider=_serialQueueProvider - In the implementation block
@property (nonatomic,copy,readonly) id lockProvider;                                   //@synthesize lockProvider=_lockProvider - In the implementation block
@property (nonatomic,copy,readonly) NSURL * storeLocation; 
@property (nonatomic,copy,readonly) NSURL * imageStoreLocation; 
@property (nonatomic,copy,readonly) NSURL * stickerImageStoreLocation; 
@property (nonatomic,copy,readonly) NSURL * imageCacheStoreLocation; 
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
+(void)resetFlushCacheValuesIfNeeded;
+(id)imageCacheStoreLocationWithError:(id*)arg1 ;
+(id)storeLocation;
+(id)defaultEnvironment;
+(id)imageStoreLocation;
+(/*^block*/id)serialQueueProvider;
+(id)stickerImageStoreLocation;
-(NSNotificationCenter *)notificationCenter;
-(NSURL *)storeLocation;
-(id)init;
-(NSURL *)imageStoreLocation;
-(NSURL *)imageCacheStoreLocation;
-(id)serialQueueProvider;
-(id<AVTBlockScheduler>)scheduler;
-(id<AVTUILogger>)logger;
-(id)lockProvider;
-(NSURL *)stickerImageStoreLocation;
@end

