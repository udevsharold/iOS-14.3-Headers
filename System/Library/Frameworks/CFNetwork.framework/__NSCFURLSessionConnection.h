/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, __NSCFURLSessionConnectionDelegate, OS_dispatch_data;
@class NSURLSessionTask, NSObject, NSURLResponse;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {

	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<__NSCFURLSessionConnectionDelegate> _delegate;
	NSURLResponse* _cacheResponse;
	NSObject*<OS_dispatch_data> _cacheData;
	unsigned long long _cacheDataMax;
	long long _maxCacheEntrySize;

}
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)expectedProgressTargetChanged;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)setPoolPriority:(long long)arg1 ;
-(void)setPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)suspend;
-(void)resume;
@end
