/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCMediaStream.h>
#import <libobjc.A.dylib/VCTextSender.h>
#import <libobjc.A.dylib/VCTextReceiverDelegate.h>

@protocol VCTextReceiverDelegate;
@class VCTextReceiver, VCTextTransmitter, NSString;

@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate> {

	VCTextReceiver* _textReceiver;
	VCTextTransmitter* _textTransmitter;
	id<VCTextReceiverDelegate> _receiveDelegate;

}

@property (assign,nonatomic) id<VCTextReceiverDelegate> receiveDelegate; 
@property (nonatomic,readonly) double lastReceivedRTPPacketTime; 
@property (nonatomic,readonly) double lastReceivedRTCPPacketTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)sendText:(id)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(id)supportedPayloads;
-(id<VCTextReceiverDelegate>)receiveDelegate;
-(void)didReceiveText:(id)arg1 ;
-(void)setupTextTransmitter;
-(BOOL)setupTextReceiverWithError:(id*)arg1 ;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)setReceiveDelegate:(id<VCTextReceiverDelegate>)arg1 ;
-(void)didReceiveCharacter:(unsigned short)arg1 ;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onSendRTCPPacket;
-(void)onRTPTimeout;
-(void)onRTCPTimeout;
-(double)rtcpHeartbeatLeeway;
@end
