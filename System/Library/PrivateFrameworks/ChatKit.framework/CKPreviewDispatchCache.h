/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {

	CKDispatchCache* _dispatchCache;
	CKMultiDict* _pendingBlocks;

}

@property (nonatomic,retain) CKDispatchCache * dispatchCache;              //@synthesize dispatchCache=_dispatchCache - In the implementation block
@property (nonatomic,retain) CKMultiDict * pendingBlocks;                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(id)snapshotCache;
+(id)detailsPreviewCache;
+(id)transcriptPreviewCache;
+(id)mapThumbnailQueue;
+(id)previewPrewarmQueue;
+(id)stickerPreviewCache;
+(void)_invalidateStickerPreviewCache;
-(id)notificationCenter;
-(void)didReceiveMemoryWarning;
-(id)init;
-(void)dealloc;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3 ;
-(void)flush;
-(void)transferRemoved:(id)arg1 ;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(BOOL)isGeneratingPreviewForKey:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)endGeneratingForKey:(id)arg1 ;
-(void)clearQueueAndCachedPreviews;
-(CKDispatchCache *)dispatchCache;
-(CKMultiDict *)pendingBlocks;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(void)transferFinished:(id)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(id)mediaObjectManager;
-(void)suspend;
-(void)systemApplicationDidSuspend;
-(void)resume;
@end
