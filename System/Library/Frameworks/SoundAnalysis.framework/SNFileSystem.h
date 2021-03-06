/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface SNFileSystem : NSObject {

	NSMutableArray* _requests;
	NSMutableDictionary* _taskCompletionMap;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * requests;                            //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskCompletionMap;              //@synthesize taskCompletionMap=_taskCompletionMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
-(NSMutableArray *)requests;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_removeRequest:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)taskCompletionMap;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setTaskCompletionMap:(NSMutableDictionary *)arg1 ;
@end

