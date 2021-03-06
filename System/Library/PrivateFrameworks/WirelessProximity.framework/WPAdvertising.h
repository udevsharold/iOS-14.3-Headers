/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAdvertisingDelegate;
@interface WPAdvertising : WPClient {

	id<WPAdvertisingDelegate> _delegate;

}

@property (nonatomic,retain) id<WPAdvertisingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)puckStringToType:(id)arg1 ;
+(id)puckTypeToString:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)setDelegate:(id<WPAdvertisingDelegate>)arg1 ;
-(void)registerService:(id)arg1 ;
-(void)invalidate;
-(id<WPAdvertisingDelegate>)delegate;
-(id)parseCompanyData:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
@end

