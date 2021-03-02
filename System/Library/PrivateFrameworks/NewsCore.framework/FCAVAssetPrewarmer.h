/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCKeyedOperationQueueDelegate.h>
#import <libobjc.A.dylib/FCAVAssetPrewarming.h>

@protocol FCAVAssetResourceLoaderType;
@class FCKeyedOperationQueue, NSCountedSet, NSMutableDictionary, NSTimer, NSString;

@interface FCAVAssetPrewarmer : NSObject <FCKeyedOperationQueueDelegate, FCAVAssetPrewarming> {

	id<FCAVAssetResourceLoaderType> _assetResourceLoader;
	FCKeyedOperationQueue* _prefetchQueue;
	NSCountedSet* _interestedAssets;
	NSMutableDictionary* _interestModificationDates;
	NSMutableDictionary* _interestTokensByAsset;
	unsigned long long _highWaterMark;
	NSTimer* _reprocessTimer;

}

@property (nonatomic,retain) id<FCAVAssetResourceLoaderType> assetResourceLoader;              //@synthesize assetResourceLoader=_assetResourceLoader - In the implementation block
@property (nonatomic,retain) FCKeyedOperationQueue * prefetchQueue;                            //@synthesize prefetchQueue=_prefetchQueue - In the implementation block
@property (nonatomic,retain) NSCountedSet * interestedAssets;                                  //@synthesize interestedAssets=_interestedAssets - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestModificationDates;                  //@synthesize interestModificationDates=_interestModificationDates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestTokensByAsset;                      //@synthesize interestTokensByAsset=_interestTokensByAsset - In the implementation block
@property (assign,nonatomic) unsigned long long highWaterMark;                                 //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (nonatomic,retain) NSTimer * reprocessTimer;                                         //@synthesize reprocessTimer=_reprocessTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_revisitSuspendedState;
-(NSCountedSet *)interestedAssets;
-(void)_flushIfNeeded;
-(NSMutableDictionary *)interestModificationDates;
-(void)_didChangeInterestedAssets;
-(NSMutableDictionary *)interestTokensByAsset;
-(void)_prewarmAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSTimer *)reprocessTimer;
-(void)setReprocessTimer:(NSTimer *)arg1 ;
-(void)_reprocessInterestedAssets;
-(FCKeyedOperationQueue *)prefetchQueue;
-(void)addInterestInAsset:(id)arg1 ;
-(void)removeInterestInAsset:(id)arg1 ;
-(id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAssetResourceLoader:(id<FCAVAssetResourceLoaderType>)arg1 ;
-(void)setPrefetchQueue:(FCKeyedOperationQueue *)arg1 ;
-(void)setInterestedAssets:(NSCountedSet *)arg1 ;
-(void)setInterestTokensByAsset:(NSMutableDictionary *)arg1 ;
-(void)setInterestModificationDates:(NSMutableDictionary *)arg1 ;
-(id<FCAVAssetResourceLoaderType>)assetResourceLoader;
-(unsigned long long)highWaterMark;
-(void)setHighWaterMark:(unsigned long long)arg1 ;
@end
