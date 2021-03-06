/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFWorkflowRunCoordinatorObserver.h>

@protocol VCDatabaseProvider, VCTriggerEventRunnerDelegate;
@class WFWorkflowRunEvent, WFConfiguredTrigger, WFWorkflowRunningContext, WFWorkflowRunCoordinator, NSString;

@interface VCTriggerEventRunner : NSObject <WFWorkflowRunCoordinatorObserver> {

	id<VCDatabaseProvider> _databaseProvider;
	id<VCTriggerEventRunnerDelegate> _delegate;
	WFWorkflowRunEvent* _inProgressRunEvent;
	WFConfiguredTrigger* _inProgressTrigger;
	WFWorkflowRunningContext* _inProgressRunningContext;
	WFWorkflowRunCoordinator* _runCoordinator;

}

@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                        //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) id<VCTriggerEventRunnerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * inProgressRunEvent;                          //@synthesize inProgressRunEvent=_inProgressRunEvent - In the implementation block
@property (nonatomic,retain) WFConfiguredTrigger * inProgressTrigger;                          //@synthesize inProgressTrigger=_inProgressTrigger - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * inProgressRunningContext;              //@synthesize inProgressRunningContext=_inProgressRunningContext - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;                      //@synthesize runCoordinator=_runCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInProgressRunEvent:(WFWorkflowRunEvent *)arg1 ;
-(void)setInProgressTrigger:(WFConfiguredTrigger *)arg1 ;
-(WFWorkflowRunEvent *)inProgressRunEvent;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)runCoordinator:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 runningContext:(id)arg3 cancelled:(BOOL)arg4 ;
-(void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
-(void)setInProgressRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(id)initWithDatabaseProvider:(id)arg1 delegate:(id)arg2 runCoordinator:(id)arg3 ;
-(WFConfiguredTrigger *)inProgressTrigger;
-(WFWorkflowRunningContext *)inProgressRunningContext;
-(BOOL)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 ;
-(BOOL)isRunningWorkflowWithIdentifier:(id)arg1 ;
-(id<VCTriggerEventRunnerDelegate>)delegate;
@end

