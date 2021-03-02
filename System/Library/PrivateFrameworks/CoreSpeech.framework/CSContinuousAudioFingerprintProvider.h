/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, CSAudioStream, NSObject, CSAudioCircularBuffer, CSPlainAudioFileWriter, NSMutableDictionary, NSString;

@interface CSContinuousAudioFingerprintProvider : NSObject <CSAudioStreamProvidingDelegate, CSAudioServerCrashMonitorDelegate> {

	BOOL _isListenPollingStarting;
	float _currentMaximumBufferSize;
	NSHashTable* _observers;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioLoggingBuffer;
	CSPlainAudioFileWriter* _audioFileWriter;
	NSMutableDictionary* _inUseServices;

}

@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                             //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isListenPollingStarting;                            //@synthesize isListenPollingStarting=_isListenPollingStarting - In the implementation block
@property (nonatomic,retain) CSAudioCircularBuffer * audioLoggingBuffer;              //@synthesize audioLoggingBuffer=_audioLoggingBuffer - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inUseServices;                     //@synthesize inUseServices=_inUseServices - In the implementation block
@property (assign,nonatomic) float currentMaximumBufferSize;                          //@synthesize currentMaximumBufferSize=_currentMaximumBufferSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(CSAudioStream *)audioStream;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)_reset;
-(NSHashTable *)observers;
-(void)reset;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsListenPollingStarting:(BOOL)arg1 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(BOOL)isListenPollingStarting;
-(void)_stopListening;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(void)_setMaximumBufferSizeFromInUseServices;
-(void)_startListenPolling;
-(void)startWithUUID:(id)arg1 withMaximumBufferSize:(float)arg2 ;
-(void)stopWithUUID:(id)arg1 ;
-(void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(CSAudioCircularBuffer *)audioLoggingBuffer;
-(void)setAudioLoggingBuffer:(CSAudioCircularBuffer *)arg1 ;
-(NSMutableDictionary *)inUseServices;
-(void)setInUseServices:(NSMutableDictionary *)arg1 ;
-(float)currentMaximumBufferSize;
-(void)setCurrentMaximumBufferSize:(float)arg1 ;
@end
