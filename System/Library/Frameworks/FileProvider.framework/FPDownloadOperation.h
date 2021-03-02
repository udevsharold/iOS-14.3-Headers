/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>
#import <libobjc.A.dylib/FPDaemonActionOperationClient.h>

@protocol OS_dispatch_source, NSXPCProxyCreatingFPDaemonActionOperation;
@class NSArray, FPDownloadInfo, NSMutableSet, NSObject, NSMutableDictionary, NSObservation;

@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient> {

	NSArray* _items;
	FPDownloadInfo* _info;
	NSMutableSet* _itemsPendingDownload;
	NSObject*<OS_dispatch_source> _stitchingTimer;
	id<NSXPCProxyCreating><FPDaemonActionOperation> _remoteMoveOperation;
	NSMutableDictionary* _progressByRoot;
	NSObservation* _observation;
	NSMutableDictionary* _childProxies;
	NSMutableDictionary* _globalChildProxies;
	BOOL _recursively;
	/*^block*/id _downloadCompletionBlock;
	/*^block*/id __t_patchActionOperationInfo;

}

@property (nonatomic,copy) id _t_patchActionOperationInfo;              //@synthesize _t_patchActionOperationInfo=__t_patchActionOperationInfo - In the implementation block
@property (assign,nonatomic) BOOL recursively;                          //@synthesize recursively=_recursively - In the implementation block
@property (nonatomic,copy) id downloadCompletionBlock;                  //@synthesize downloadCompletionBlock=_downloadCompletionBlock - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(BOOL)recursively;
-(void)setRecursively:(BOOL)arg1 ;
-(void)actionMain;
-(void)presendNotifications;
-(id)_t_patchActionOperationInfo;
-(void)_setupParentProgress;
-(void)showItemsAsDownloadingEvenIfDownloaded:(BOOL)arg1 ;
-(void)_recomputeDownloadInfoIfNecessary;
-(void)_runWithRemoteOperation:(id)arg1 ;
-(void)_removeProgressWithItemID:(id)arg1 ;
-(id)downloadCompletionBlock;
-(void)setDownloadCompletionBlock:(id)arg1 ;
-(void)_updateProgressWithUpdatedFileCountForItem:(id)arg1 ;
-(void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3 ;
-(void)_updateParentProgressForItem:(id)arg1 ;
-(void)_updateGlobalParentProgressForItem:(id)arg1 ;
-(void)_retrieveChildProgressForItem:(id)arg1 childProxies:(id)arg2 parentSetup:(/*^block*/id)arg3 ;
-(void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remoteOperationProgressesAreReady;
-(id)initWithRemoteOperation:(id)arg1 info:(id)arg2 ;
-(void)remoteOperationFinishedSendingPastUpdates;
-(void)set_t_patchActionOperationInfo:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fp_prettyDescription;
-(void)completedWithResult:(id)arg1 error:(id)arg2 ;
@end
