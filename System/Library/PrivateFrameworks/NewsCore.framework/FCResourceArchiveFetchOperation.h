/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSURL, NSURLSessionDownloadTask, NSArray;

@interface FCResourceArchiveFetchOperation : FCOperation {

	unsigned long long _maxConcurrentFetchCount;
	/*^block*/id _progressHandler;
	/*^block*/id _interestTokenHandler;
	/*^block*/id _archiveHandler;
	/*^block*/id _fetchCompletionHandler;
	NSURL* _archiveURL;
	id<FCContentContext> _context;
	NSURLSessionDownloadTask* _downloadTask;
	NSArray* _resultResources;

}

@property (nonatomic,copy) NSURL * archiveURL;                                        //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * downloadTask;                 //@synthesize downloadTask=_downloadTask - In the implementation block
@property (nonatomic,retain) NSArray * resultResources;                               //@synthesize resultResources=_resultResources - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrentFetchCount;              //@synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id interestTokenHandler;                                   //@synthesize interestTokenHandler=_interestTokenHandler - In the implementation block
@property (nonatomic,copy) id archiveHandler;                                         //@synthesize archiveHandler=_archiveHandler - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                 //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setArchiveHandler:(id)arg1 ;
-(NSURL *)archiveURL;
-(void)setProgressHandler:(id)arg1 ;
-(id)interestTokenHandler;
-(void)setInterestTokenHandler:(id)arg1 ;
-(void)setArchiveURL:(NSURL *)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)progressHandler;
-(void)setResultResources:(NSArray *)arg1 ;
-(void)_ensureResourcesAreReadyForUse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unzipResourcesFromArchiveFileURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDownloadTask:(NSURLSessionDownloadTask *)arg1 ;
-(NSURLSessionDownloadTask *)downloadTask;
-(NSArray *)resultResources;
-(id)initWithArchiveURL:(id)arg1 context:(id)arg2 ;
-(id)fetchCompletionHandler;
-(void)setMaxConcurrentFetchCount:(unsigned long long)arg1 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)archiveHandler;
-(unsigned long long)maxConcurrentFetchCount;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<FCContentContext>)context;
@end
