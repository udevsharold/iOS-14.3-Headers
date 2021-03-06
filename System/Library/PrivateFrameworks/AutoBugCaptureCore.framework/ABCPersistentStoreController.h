/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ABCPersistentStoreControllerDelegate;
@class AnalyticsWorkspace, NSObject;

@interface ABCPersistentStoreController : NSObject {

	AnalyticsWorkspace* _workspace;
	BOOL workspaceReady;
	AnalyticsWorkspace* tempWorkspace;
	NSObject*<OS_dispatch_queue> storeQueue;
	id<ABCPersistentStoreControllerDelegate> _delegate;

}

@property (nonatomic,readonly) AnalyticsWorkspace * workspace; 
@property (assign,nonatomic,__weak) id<ABCPersistentStoreControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)shutdown;
-(void)save:(BOOL)arg1 ;
-(id)init;
-(void)save;
-(id)initWithDirectory:(id)arg1 ;
-(AnalyticsWorkspace *)workspace;
-(id)initWithName:(id)arg1 inDirectory:(id)arg2 ;
-(void)setDelegate:(id<ABCPersistentStoreControllerDelegate>)arg1 ;
-(id<ABCPersistentStoreControllerDelegate>)delegate;
-(void)cleanupDiagnosticCaseUsage;
-(void)cleanupDiagnosticCaseStorage;
-(void)cleanupDiagnosticCaseSummary;
-(void)cleanupUploadRecord;
-(void)removeCaseStorageWithID:(id)arg1 ;
-(id)caseStorageAnalytics;
-(void)removeCaseStoragesWithCaseIDs:(id)arg1 ;
-(void)caseAttachmentsForDiagnosticCaseIDs:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)prepareDataDirectoryWithName:(id)arg1 containerPath:(id)arg2 ;
-(BOOL)prepareWorkspaceWithDirectoryPath:(id)arg1 ;
-(id)caseUsageAnalytics;
-(id)caseSummaryAnalytics;
-(id)uploadRecordAnalytics;
-(void)removeCaseStoragesWithUUIDs:(id)arg1 ;
-(void)removeAllCaseStorages;
@end

