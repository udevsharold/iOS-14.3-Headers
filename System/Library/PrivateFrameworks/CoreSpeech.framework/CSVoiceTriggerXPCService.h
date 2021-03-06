/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSVoiceTriggerXPCClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSVoiceTriggerXPCClient, NSString;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSVoiceTriggerXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerXPCClient * xpcClient;              //@synthesize xpcClient=_xpcClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(id)init;
-(void)setXpcClient:(CSVoiceTriggerXPCClient *)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(CSVoiceTriggerXPCClient *)xpcClient;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_teardownXPCClientIfNeeded;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(id)_createXPCClientConnectionIfNeeded:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 xpcClient:(id)arg3 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 xpcClient:(id)arg3 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 xpcClient:(id)arg3 ;
-(void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg1 ;
-(void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(id)fetchVoiceTriggerDailyStats;
@end

