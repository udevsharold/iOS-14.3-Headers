/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOfflineArticleManagerType.h>
#import <libobjc.A.dylib/NDDownloadConsumer.h>
#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>

@class NSSet;

@interface NewsUI2.OfflineContentManager : NSObject <FCOfflineArticleManagerType, NDDownloadConsumer, FCBoostableOperationThrottlerDelegate> {

	 downloadedContentIDs;
	 contentContext;
	 _contributors;
	 contributorsReadyGroup;
	 _xpcConnection;
	 _xpcDownloadService;
	 _xpcConnectionRetryBudget;
	 _registeredWithXPCDownloadService;
	 localArticleCacheLookupService;
	 localIssueCacheLookupService;
	 $__lazy_storage_$_localCacheLookupThrottler;
	 _interestTokensByContentID;
	 downloadMonitors;
	 _offlineContentRequests;

}

@property (readonly,nonatomic) NSSet * downloadedArticleIDs; 
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(NSSet *)downloadedArticleIDs;
-(void)downloadProgressedForRequest:(id)arg1 contentArchive:(id)arg2 ;
-(void)downloadProgressedForRequest:(id)arg1 progress:(double)arg2 ;
-(void)downloadFinishedForRequest:(id)arg1 error:(id)arg2 ;
-(id)init;
@end
