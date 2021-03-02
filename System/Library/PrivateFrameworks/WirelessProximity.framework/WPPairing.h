/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPPairingDelegate;
@class NSMutableSet;

@interface WPPairing : WPClient {

	BOOL _allowScreenOffScanning;
	id<WPPairingDelegate> _delegate;
	NSMutableSet* _ignoredDevices;

}

@property (assign,nonatomic,__weak) id<WPPairingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableSet * ignoredDevices;                                //@synthesize ignoredDevices=_ignoredDevices - In the implementation block
@property (assign) BOOL allowScreenOffScanning;                                  //@synthesize allowScreenOffScanning=_allowScreenOffScanning - In the implementation block
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)stateDidChange:(long long)arg1 ;
-(BOOL)allowScreenOffScanning;
-(void)setIgnoredDevices:(NSMutableSet *)arg1 ;
-(void)startProximityPairingServiceScanning;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableSet *)ignoredDevices;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(BOOL)arg2 ;
-(void)ignoreDeviceUntilNextUnlock:(id)arg1 ignoreDevice:(BOOL)arg2 ;
-(void)stopProximityPairingServiceScanning;
-(void)setAllowScreenOffScanning:(BOOL)arg1 ;
-(void)setDelegate:(id<WPPairingDelegate>)arg1 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(BOOL)arg2 scanMode:(long long)arg3 ;
-(void)invalidate;
-(id<WPPairingDelegate>)delegate;
@end
