/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/CPLForceSyncTask.h>
#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>

@protocol OS_dispatch_queue, CPLEngineForceSyncTaskDelegate;
@class NSObject, CPLEngineSyncTask, CPLSyncSession, NSEnumerator, NSDate, CPLScopeFilter, CPLEngineLibrary, NSString;

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _currentTaskLock;
	BOOL _reallyCancelled;
	CPLEngineSyncTask* _currentTask;
	CPLSyncSession* _fakeSession;
	NSEnumerator* _syncTaskEnumerator;
	BOOL _shouldUpdateScopeList;
	BOOL _bypassForceSyncLimitations;
	NSDate* _creationDate;
	CPLScopeFilter* _filter;
	CPLEngineLibrary* _engineLibrary;
	id<CPLEngineForceSyncTaskDelegate> _delegate;
	/*^block*/id _taskDidFinishWithErrorBlock;

}

@property (nonatomic,readonly) NSDate * creationDate;                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) CPLScopeFilter * filter;                                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) CPLEngineLibrary * engineLibrary;                                //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (assign,nonatomic,__weak) id<CPLEngineForceSyncTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id taskDidFinishWithErrorBlock;                                    //@synthesize taskDidFinishWithErrorBlock=_taskDidFinishWithErrorBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> taskActivity; 
@property (nonatomic,readonly) BOOL forBackup; 
@property (assign,nonatomic) BOOL shouldUpdateScopeList;                                      //@synthesize shouldUpdateScopeList=_shouldUpdateScopeList - In the implementation block
@property (assign,nonatomic) BOOL bypassForceSyncLimitations;                                 //@synthesize bypassForceSyncLimitations=_bypassForceSyncLimitations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setFilter:(CPLScopeFilter *)arg1 ;
-(void)cancelTask;
-(CPLScopeFilter *)filter;
-(id)_phaseDescription;
-(NSString *)description;
-(void)setDelegate:(id<CPLEngineForceSyncTaskDelegate>)arg1 ;
-(id)_currentTask;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id<CPLEngineForceSyncTaskDelegate>)delegate;
-(CPLEngineLibrary *)engineLibrary;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(id)initWithScopeIdentifiers:(id)arg1 engineLibrary:(id)arg2 filter:(id)arg3 delegate:(id)arg4 ;
-(BOOL)forBackup;
-(NSObject*<OS_xpc_object>)taskActivity;
-(void)setTaskActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_dispatchSyncTask:(id)arg1 ;
-(void)_dropCurrentTask;
-(void)_dispatchNextSyncTask;
-(void)launchTask;
-(void)reallyLaunch;
-(void)reallyCancel;
-(void)setEngineLibrary:(CPLEngineLibrary *)arg1 ;
-(id)taskDidFinishWithErrorBlock;
-(void)setTaskDidFinishWithErrorBlock:(id)arg1 ;
-(BOOL)shouldUpdateScopeList;
-(void)setShouldUpdateScopeList:(BOOL)arg1 ;
-(BOOL)bypassForceSyncLimitations;
-(void)setBypassForceSyncLimitations:(BOOL)arg1 ;
@end
