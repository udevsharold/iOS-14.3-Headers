/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFLWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/WFWorkflowRunnerClientDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol ATXTVIntentHandler;
@class UNUserNotificationCenter, WFLWorkflowController, WFSuggestionsWorkflowRunnerClient, PETScalarEventTracker, NSString;

@interface ATXActionNotificationServer : NSObject <WFLWorkflowControllerDelegate, WFWorkflowRunnerClientDelegate, UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;
	WFLWorkflowController* _currentWorkflowController;
	WFSuggestionsWorkflowRunnerClient* _currentWorkflowRunnerClient;
	id<ATXTVIntentHandler> _tvIntentHandler;
	PETScalarEventTracker* _removeTracker;
	PETScalarEventTracker* _notifyInitTracker;
	PETScalarEventTracker* _notifyErrorTracker;
	PETScalarEventTracker* _notifySuccessTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requestIdentifierForBundleId:(id)arg1 ;
+(id)sharedInstance;
+(id)bundleIdFromRequestIdentifier:(id)arg1 ;
+(id)localizedContentBodyStringWithString:(id)arg1 forAction:(id)arg2 ;
-(BOOL)_isRTL;
-(BOOL)hasLockscreenPrediction;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2 ;
-(void)_setupNotifications;
-(id)_unarchiveActionResponseFromNotification:(id)arg1 ;
-(id)init;
-(id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 languageCode:(id)arg3 ;
-(void)_removeNotificationWithIdentifier:(id)arg1 trackEvent:(BOOL)arg2 ;
-(void)postNotificationForATXActionResponse:(id)arg1 ;
-(void)removeAllActionPredictionNotificationsAndTrackEvent:(BOOL)arg1 recordFeedback:(BOOL)arg2 ;
-(void)_postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2 ;
-(void)removeActionPredictionNotificationsMatchingAction:(id)arg1 ;
-(id)_unarchiveActionFromNotification:(id)arg1 ;
-(void)postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_postTestNotification;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2 ;
-(void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(unsigned long long)deliveredNotificationCount;
-(void)_handleNonBackgroundIntent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_postTestNotificationWithPredictionCount:(long long)arg1 ;
-(void)workflowControllerWillRun:(id)arg1 ;
-(id)_actionKeyFromNotification:(id)arg1 ;
-(void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2 ;
@end

