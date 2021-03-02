/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCBasebandCodecNotifications.h>

@protocol OS_dispatch_source;
@class VCAudioRelayIO, NSObject, NSString;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications> {

	BOOL _isRelayRunning;
	OpaqueFigThreadRef _relayThread;
	opaque_pthread_mutex_t _wakeUpMutex;
	opaque_pthread_cond_t _wakeUpCondition;
	double _IOBufferDuration;
	OpaqueAudioConverterRef _clientToRemoteConverter;
	OpaqueAudioConverterRef _remoteToClientConverter;
	VCAudioRelayIO* _remoteIO;
	VCAudioRelayIO* _clientIO;
	opaque_pthread_mutex_t _relayLock;
	opaque_pthread_mutex_t _clientIOLock;
	opaque_pthread_mutex_t _remoteIOLock;
	NSObject*<OS_dispatch_source> _periodicHealthPrintDispatchSource;
	unsigned _blocksRelayedCount;
	float _clientUplinkPowerMovingAverage;
	float _clientDownlinkPowerMovingAverage;
	VCRemoteCodecInfo _remoteCodecInfo;

}

@property (readonly) NSObject*<OS_dispatch_source> periodicHealthPrintDispatchSource;              //@synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource - In the implementation block
@property (readonly) unsigned blocksRelayedCount;                                                  //@synthesize blocksRelayedCount=_blocksRelayedCount - In the implementation block
@property (readonly) float clientUplinkPowerMovingAverage;                                         //@synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage - In the implementation block
@property (readonly) float clientDownlinkPowerMovingAverage;                                       //@synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage - In the implementation block
@property (readonly) OpaqueAudioConverterRef remoteToClientConverter;                              //@synthesize remoteToClientConverter=_remoteToClientConverter - In the implementation block
@property (readonly) OpaqueAudioConverterRef clientToRemoteConverter;                              //@synthesize clientToRemoteConverter=_clientToRemoteConverter - In the implementation block
@property (nonatomic,copy) VCAudioRelayIO * remoteIO;                                              //@synthesize remoteIO=_remoteIO - In the implementation block
@property (nonatomic,copy) VCAudioRelayIO * clientIO;                                              //@synthesize clientIO=_clientIO - In the implementation block
@property (readonly) BOOL isRelayRunning;                                                          //@synthesize isRelayRunning=_isRelayRunning - In the implementation block
@property (readonly) double IOBufferDuration;                                                      //@synthesize IOBufferDuration=_IOBufferDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)setClientIO:(id)arg1 withError:(id*)arg2 ;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(float)clientDownlinkPowerMovingAverage;
-(id)init;
-(VCAudioRelayIO *)remoteIO;
-(BOOL)stopRelayIO:(id)arg1 ;
-(BOOL)canSetPropertyWithError:(id*)arg1 ;
-(void)relayProcessSamples;
-(double)IOBufferDuration;
-(void)unlock;
-(void)setRemoteIO:(VCAudioRelayIO *)arg1 ;
-(void)destroyAudioConverters;
-(void)printStreamFormats;
-(BOOL)isRelayRunning;
-(void)dealloc;
-(void)startPeriodicHealthPrint;
-(void)updateRealTimeStats;
-(BOOL)startRemoteIO;
-(VCAudioRelayIO *)clientIO;
-(unsigned)blocksRelayedCount;
-(BOOL)setRemoteIO:(id)arg1 withError:(id*)arg2 ;
-(NSObject*<OS_dispatch_source>)periodicHealthPrintDispatchSource;
-(void)stopRelayThread;
-(OpaqueAudioConverterRef)remoteToClientConverter;
-(float)rmsPowerOfBuffer:(float*)arg1 numSamples:(unsigned)arg2 ;
-(BOOL)startRelayIO:(id)arg1 name:(id)arg2 recordingsName:(id)arg3 ;
-(BOOL)startRelayThreadWithError:(id*)arg1 ;
-(OpaqueAudioConverterRef)clientToRemoteConverter;
-(void)updateRemoteCodecInfo:(const VCRemoteCodecInfo*)arg1 ;
-(void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(OpaqueAudioConverterRef)arg3 ;
-(void)stopRemoteIO;
-(void)setClientIO:(VCAudioRelayIO *)arg1 ;
-(void)stopClientIO;
-(void)sleepTillTime:(timespec*)arg1 ;
-(BOOL)setIOBufferDuration:(double)arg1 withError:(id*)arg2 ;
-(BOOL)startClientIO;
-(void)relayCallback;
-(void)lock;
-(float)clientUplinkPowerMovingAverage;
-(OpaqueAudioConverterRef)newAudioConverterWithInputFormat:(AudioStreamBasicDescription*)arg1 outputFormat:(AudioStreamBasicDescription*)arg2 withError:(id*)arg3 ;
-(BOOL)createAudioConvertersWithError:(id*)arg1 ;
@end
