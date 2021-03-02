/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegatePrivate.h>

@class AVURLAsset, NSArray, NSString, NSData, NSDictionary, NSURLSession;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate> {

	BOOL _sentWillDownloadToURL;
	BOOL _sentWillBeginDelayedRequest;
	AVURLAsset* _URLAsset;
	unsigned long long _AVAssetDownloadToken;
	NSArray* _mediaSelections;
	NSString* _assetTitle;
	NSData* _assetArtworkData;
	NSDictionary* _options;
	NSString* _childAssetDownloadTasksSessionIdentifier;
	NSURLSession* _childAssetDownloadSession;
	NSArray* _childAssetDownloadTasks;

}

@property (retain) AVURLAsset * URLAsset;                           //@synthesize URLAsset=_URLAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentRequest;
-(AVURLAsset *)URLAsset;
-(id)originalRequest;
-(id)response;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)_onqueue_cancel;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)_onqueue_resume;
-(void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_NS45)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_NS45)arg5 ;
-(void)_onqueue_suspend;
-(BOOL)_isAVAssetTask;
-(id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3 ;
-(void)setURLAsset:(AVURLAsset *)arg1 ;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
@end
