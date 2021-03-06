/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechConnectionDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSString, VSSpeechConnectionDelegateWrapper, NSObject, VSSpeechRequest, VSPresynthesizedAudioRequest;

@interface VSSpeechConnection : NSObject {

	NSXPCConnection* _xpcConnection;
	NSString* _identifier;
	id<VSSpeechConnectionDelegate> _delegate;
	VSSpeechConnectionDelegateWrapper* _delegateWrapper;
	NSObject*<OS_dispatch_queue> _threadSafeQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) VSSpeechConnectionDelegateWrapper * delegateWrapper;                      //@synthesize delegateWrapper=_delegateWrapper - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> threadSafeQueue;                             //@synthesize threadSafeQueue=_threadSafeQueue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VSSpeechRequest * request; 
@property (nonatomic,readonly) VSPresynthesizedAudioRequest * presynthesizedAudioRequest; 
-(void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
-(void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(VSSpeechRequest *)request;
-(void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_remoteObject;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
-(void)invokeDaemon:(/*^block*/id)arg1 ;
-(void)startPresynthesizedAudioRequest:(id)arg1 ;
-(void)_connectionInvalidated;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)endAudioPowerUpdate;
-(BOOL)queryPhaticCapabilityWithRequest:(id)arg1 ;
-(void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1 ;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)startSpeechRequest:(id)arg1 ;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(BOOL)isSystemSpeaking;
-(void)continueCurrentSpeechRequest;
-(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(NSString *)identifier;
-(VSSpeechConnectionDelegateWrapper *)delegateWrapper;
-(id)concurrentSynthesisRequests;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(id)_remoteObjectSync;
-(void)setDelegateWrapper:(VSSpeechConnectionDelegateWrapper *)arg1 ;
-(NSObject*<OS_dispatch_queue>)threadSafeQueue;
-(void)setThreadSafeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)cleanUnusedAssets:(/*^block*/id)arg1 ;
-(id)_remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)prewarmIfNeededWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startSynthesisRequest:(id)arg1 ;
-(void)killDaemon;
-(void)cachePresynthesizedAudioRequest:(id)arg1 ;
-(void)cancelDownloads:(/*^block*/id)arg1 ;
-(void)updateWithConnectionIdentifier:(id)arg1 ;
-(void)estimateDurationWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(void)stopPresynthesizedAudioRequest;
-(void)forwardStreamObject:(id)arg1 ;
-(id<VSSpeechConnectionDelegate>)delegate;
@end

