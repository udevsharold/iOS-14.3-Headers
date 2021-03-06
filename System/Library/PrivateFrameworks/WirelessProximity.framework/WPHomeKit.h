/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPHomeKitDelegate;
@interface WPHomeKit : WPClient {

	id<WPHomeKitDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHomeKitDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)checkAllowDuplicate;
-(unsigned char)clientTypeFromHomeKitType:(long long)arg1 ;
-(void)startScanningWithData:(id)arg1 forType:(long long)arg2 ;
-(void)setDelegate:(id<WPHomeKitDelegate>)arg1 ;
-(long long)homeKitTypeFromClientType:(unsigned char)arg1 ;
-(SCD_Struct_WP0)dutyCycleToScanningRates:(long long)arg1 ;
-(void)invalidate;
-(id<WPHomeKitDelegate>)delegate;
@end

