/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKSessionDelegate <NSObject>
@required
-(void)sessionDidInvalidate:(id)arg1;
-(void)sessionDidDisconnect:(id)arg1;
-(id)clientIdentityForSession:(id)arg1;
-(id)trustedAnchorCertificatesForSession:(id)arg1;
-(void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
-(void)sessionDidLoseBeacon:(id)arg1;
-(void)sessionDidBecomeConnectable:(id)arg1;
-(void)sessionDidBecomeNotConnectable:(id)arg1;
-(void)session:(id)arg1 didConnectWithTransport:(id)arg2;
-(void)session:(id)arg1 encounteredUntrustedConnection:(/*^block*/id)arg2;

@end

