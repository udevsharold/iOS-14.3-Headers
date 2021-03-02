/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAWorkerConfiguration.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@protocol PHAAssetResourceDataLoading;
@class PHAManager, PFSerialQueue, PHAServiceCancelableOperation, PHPhotoLibrary, NSURL, NSString;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling> {

	PHAManager* _photoAnalysisManager;
	PFSerialQueue* _userInitiatedRequestQueue;
	BOOL _shutdownHasBeenCalled;
	BOOL _warmedUp;
	id<PHAAssetResourceDataLoading> _dataLoader;
	PHAServiceCancelableOperation* _currentOperation;

}

@property (assign,getter=isWarmedUp,nonatomic) BOOL warmedUp;                         //@synthesize warmedUp=_warmedUp - In the implementation block
@property (nonatomic,retain) id<PHAAssetResourceDataLoading> dataLoader;              //@synthesize dataLoader=_dataLoader - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (readonly) PHAManager * photoAnalysisManager; 
@property (readonly) NSURL * persistentStorageDirectoryURL; 
@property (readonly) BOOL isEnabled; 
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (retain) PHAServiceCancelableOperation * currentOperation;                  //@synthesize currentOperation=_currentOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)persistsState;
+(long long)applicationDataFolderIdentifier;
+(BOOL)runsExclusively;
+(short)workerType;
+(void)configureXPCConnection:(id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(void)shutdown;
-(PHPhotoLibrary *)photoLibrary;
-(BOOL)canRunWhenGraphIsLoaded;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(id)init;
-(PHAServiceCancelableOperation *)currentOperation;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(BOOL)isEnabled;
-(void)startup;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)handleOperation:(id)arg1 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(void)cooldown;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)operationWillStart:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(id)statusAsDictionary;
-(PHAManager *)photoAnalysisManager;
-(BOOL)isQuiescent;
-(void)setCurrentOperation:(PHAServiceCancelableOperation *)arg1 ;
-(BOOL)isWarmedUp;
-(NSURL *)persistentStorageDirectoryURL;
-(id<PHAAssetResourceDataLoading>)dataLoader;
-(void)dispatchSyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)dispatchAsyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(void)assertUserInitiatedRequestQueue;
-(id)libraryScopedWorkerPreferences;
-(void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2 ;
-(id)libraryScopedWorkerPreferencesURL;
-(void)pingWorkerWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setWarmedUp:(BOOL)arg1 ;
-(void)setDataLoader:(id<PHAAssetResourceDataLoading>)arg1 ;
@end
