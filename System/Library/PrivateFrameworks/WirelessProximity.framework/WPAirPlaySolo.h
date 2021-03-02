/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAirPlaySoloDelegate;
@interface WPAirPlaySolo : WPClient {

	id<WPAirPlaySoloDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPAirPlaySoloDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)puckStringToType:(id)arg1 ;
+(id)puckTypeToString:(unsigned char)arg1 ;
-(void)peerTrackingFull;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)peerTrackingAvailable;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(id)init;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)stopConnectionlessAdvertising;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)setDelegate:(id<WPAirPlaySoloDelegate>)arg1 ;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)invalidate;
-(id<WPAirPlaySoloDelegate>)delegate;
-(void)stopConnectionlessAdvertising:(id)arg1 ;
@end
