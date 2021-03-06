/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setName:(id)arg1 ;
-(void)cancelAllOperations;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(id)init;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
-(void)dealloc;
-(long long)maxConcurrentOperationCount;
-(long long)operationCount;
-(id)name;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
@end

