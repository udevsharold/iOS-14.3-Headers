/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;

@interface ATXAnchorModelInferenceEngine : NSObject {

	ATXCoreDuetContextHelper* _contextHelper;
	ATXAnchorModelPredictionScheduler* _predictionScheduler;
	AB _started;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)supportedAnchorsForInference;
-(/*^block*/id)exitCallbackForAnchor:(id)arg1 ;
-(id)exitNotificationIdentifierForAnchor:(id)arg1 ;
-(id)init;
-(void)registerForWakingNotificationForAnchor:(id)arg1 callback:(/*^block*/id)arg2 cdContext:(id)arg3 ;
-(void)registerAnchorEventListenerForAnchor:(id)arg1 ;
-(void)registerForAnchorEntrance:(id)arg1 cdContext:(id)arg2 ;
-(id)notificationIdentifierForAnchor:(id)arg1 ;
-(void)setupContextStoreListenerForAnchor:(id)arg1 context:(id)arg2 ;
-(void)start;
-(void)registerForAnchorExit:(id)arg1 cdContext:(id)arg2 ;
-(id)currentDuetEventForAnchor:(id)arg1 ;
-(void)retryPreviouslyIncompleteInference;
-(void)handleInferenceEvent:(id)arg1 ;
-(void)handleAnchorEventForAnchor:(id)arg1 ;
-(/*^block*/id)entranceCallbackForAnchor:(id)arg1 ;
-(void)registerAnchorEventListeners;
@end
