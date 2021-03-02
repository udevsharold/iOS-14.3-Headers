/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, CSActivationEvent;

@interface CSActivationEventNotificationHandler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegates;
	CSActivationEvent* _pendingActivationEvent;
	/*^block*/id _pendingCompletion;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMapTable * delegates;                                  //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) CSActivationEvent * pendingActivationEvent;              //@synthesize pendingActivationEvent=_pendingActivationEvent - In the implementation block
@property (nonatomic,copy) id pendingCompletion;                                      //@synthesize pendingCompletion=_pendingCompletion - In the implementation block
+(id)sharedInstance;
-(NSMapTable *)delegates;
-(void)_stopMonitoring;
-(id)init;
-(void)_didReceiveAOPFirstPassTrigger:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPendingCompletion:(id)arg1 ;
-(void)notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_notifyActivationEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasPendingActivationForType:(unsigned long long)arg1 ;
-(void)setDelegates:(NSMapTable *)arg1 ;
-(void)_startMonitoring;
-(BOOL)_isVoiceTriggerEvent:(id)arg1 ;
-(id)pendingCompletion;
-(CSActivationEvent *)pendingActivationEvent;
-(void)setPendingActivationEvent:(CSActivationEvent *)arg1 ;
-(void)start;
-(void)setDelegate:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
@end
