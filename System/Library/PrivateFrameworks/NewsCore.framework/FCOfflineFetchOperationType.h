/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCOfflineFetchOperationType
@property (assign,nonatomic) BOOL cachedOnly; 
@property (nonatomic,copy) id progressHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressQueue; 
@property (nonatomic,copy) id archiveHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> archiveQueue; 
@property (nonatomic,copy) id fetchCompletionHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchCompletionQueue; 
@required
-(BOOL)cachedOnly;
-(void)setArchiveHandler:(/*^block*/id)arg1;
-(void)setCachedOnly:(BOOL)arg1;
-(void)setProgressHandler:(/*^block*/id)arg1;
-(NSObject*<OS_dispatch_queue>)fetchCompletionQueue;
-(void)setFetchCompletionQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(void)setProgressQueue:(id)arg1;
-(void)setArchiveQueue:(id)arg1;
-(id)progressHandler;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(/*^block*/id)arg1;
-(id)archiveHandler;
-(NSObject*<OS_dispatch_queue>)progressQueue;

@end

