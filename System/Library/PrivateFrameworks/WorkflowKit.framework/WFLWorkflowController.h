/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/WFSiriUserInterface.h>

@protocol WFLWorkflowControllerDelegate;
@class NSArray, WFWorkflowController, INInteraction, WFWorkflow, NSProgress, NSString;

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFSiriUserInterface> {

	NSArray* _airPlayRouteIDs;
	id<WFLWorkflowControllerDelegate> _delegate;
	long long _executionContext;
	WFWorkflowController* _controller;
	INInteraction* _lastInteraction;

}

@property (nonatomic,readonly) WFWorkflowController * controller;                            //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) INInteraction * lastInteraction;                                //@synthesize lastInteraction=_lastInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<WFLWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) NSProgress * progress; 
@property (assign,nonatomic) long long executionContext;                                     //@synthesize executionContext=_executionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs;                               //@synthesize airPlayRouteIDs=_airPlayRouteIDs - In the implementation block
@property (nonatomic,readonly) NSString * userInterfaceType; 
-(WFWorkflowController *)controller;
-(void)setExecutionContext:(long long)arg1 ;
-(BOOL)isRunning;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)executionContext;
-(id)initWithWorkflow:(id)arg1 ;
-(void)runWithInput:(id)arg1 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(WFWorkflow *)workflow;
-(void)setDelegate:(id<WFLWorkflowControllerDelegate>)arg1 ;
-(NSProgress *)progress;
-(id)runSource;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)stop;
-(id<WFLWorkflowControllerDelegate>)delegate;
-(void)presentAlert:(id)arg1 ;
-(NSString *)userInterfaceType;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureIntent:(id)arg1 ;
-(BOOL)isRunningInSiri;
-(NSArray *)airPlayRouteIDs;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2 ;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showConfirmInteraction:(id)arg1 requireAuthentication:(BOOL)arg2 requireConfirmation:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(INInteraction *)lastInteraction;
-(void)setLastInteraction:(INInteraction *)arg1 ;
@end
