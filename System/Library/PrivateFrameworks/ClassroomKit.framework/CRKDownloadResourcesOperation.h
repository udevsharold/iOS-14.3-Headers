/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSURLCredential, NSURLSession, NSArray, NSMutableArray, NSString;

@interface CRKDownloadResourcesOperation : CATOperation <NSURLSessionDownloadDelegate> {

	NSURLCredential* mCredential;
	NSURLSession* mSession;
	NSArray* mDownloadTasks;
	NSMutableArray* mFileURLs;
	NSMutableArray* mCompletedUnitCounts;
	NSArray* _resources;

}

@property (nonatomic,copy,readonly) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)run;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)main;
-(void)operationWillFinish;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(BOOL)isAsynchronous;
-(NSArray *)resources;
-(void)cancel;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedCertificates:(id)arg3 ;
-(void)cancelIfNeeded;
-(id)moveURLToNonEphemeralLocation:(id)arg1 withFileName:(id)arg2 error:(id*)arg3 ;
-(void)unzipOperationDidFinish:(id)arg1 forRequestURL:(id)arg2 ;
-(void)finalizeDownloadedItem:(id)arg1 forRequestURL:(id)arg2 ;
-(id)initWithResources:(id)arg1 clientIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 ;
@end
