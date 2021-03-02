/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class QLTGeneratorThumbnailRequest, _QLCacheThread, NSObject;

@interface QLMemoryCacheQueryOperation : NSOperation {

	QLTGeneratorThumbnailRequest* _generatorRequest;
	_QLCacheThread* _cacheThread;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) QLTGeneratorThumbnailRequest * generatorRequest;              //@synthesize generatorRequest=_generatorRequest - In the implementation block
-(void)main;
-(void)cancel;
-(QLTGeneratorThumbnailRequest *)generatorRequest;
-(void)setGeneratorRequest:(QLTGeneratorThumbnailRequest *)arg1 ;
-(id)initWithThumbnailRequest:(id)arg1 cacheThread:(id)arg2 ;
@end
