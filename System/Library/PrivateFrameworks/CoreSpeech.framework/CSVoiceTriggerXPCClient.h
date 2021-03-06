/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;
@class NSObject;

@interface CSVoiceTriggerXPCClient : NSObject {

	id<CSVoiceTriggerXPCClientDelegate> _delegate;
	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerXPCClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)connect;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(id)init;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)dealloc;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)_handleListenerEvent:(id)arg1 ;
-(void)_handleListenerError:(id)arg1 ;
-(void)_handleListenerDisconnectedError:(id)arg1 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)setDelegate:(id<CSVoiceTriggerXPCClientDelegate>)arg1 ;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)fetchVoiceTriggerStats;
-(id<CSVoiceTriggerXPCClientDelegate>)delegate;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
@end

