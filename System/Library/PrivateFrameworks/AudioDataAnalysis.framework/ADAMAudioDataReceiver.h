/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioDataAnalysis/AudioDataAnalysis-Structs.h>
#import <libobjc.A.dylib/ADAMClientDelegate.h>

@protocol ADAMAudioDataReceiverDelegate;
@class NSString, NSMutableDictionary, NSXPCConnection;

@interface ADAMAudioDataReceiver : NSObject <ADAMClientDelegate> {

	NSString* _name;
	NSMutableDictionary* _sensorStatus;
	NSMutableDictionary* _callbacks;
	NSMutableDictionary* _configs;
	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _connectionDidInvalidate;
	id<ADAMAudioDataReceiverDelegate> delegate;

}

@property (assign) BOOL connectionDidInvalidate;                                             //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (assign,nonatomic,__weak) id<ADAMAudioDataReceiverDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reconnect;
-(void)startReceivingAudioSampleType:(unsigned)arg1 ;
-(void)stopMeasuringAudioSampleType:(unsigned)arg1 ;
-(void)stopReceivingAudioSampleType:(unsigned)arg1 ;
-(void)reset;
-(void)dealloc;
-(void)receiveAudioSample:(id)arg1 ;
-(void)startMeasuringAudioSampleType:(unsigned)arg1 withConfiguration:(id)arg2 ;
-(void)startReceivingAudioSampleType:(unsigned)arg1 withCallback:(/*^block*/id)arg2 ;
-(BOOL)isMeasurementOnForAudioSampleType:(unsigned)arg1 ;
-(void)receiveAudioSample:(id)arg1 type:(unsigned)arg2 metadata:(id)arg3 ;
-(void)handleAndLogError:(id)arg1 ;
-(BOOL)verifyInvariants;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(void)setDelegate:(id<ADAMAudioDataReceiverDelegate>)arg1 ;
-(void)configureAudioSampleType:(unsigned)arg1 configuration:(id)arg2 ;
-(BOOL)connectionDidInvalidate;
-(id)initWithIdentifier:(id)arg1 ;
-(id)setupConnection;
-(id<ADAMAudioDataReceiverDelegate>)delegate;
-(id)getCurrentConfigurationForAudioSampleType:(unsigned)arg1 ;
@end

