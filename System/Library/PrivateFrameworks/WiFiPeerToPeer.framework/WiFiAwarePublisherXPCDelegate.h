/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwarePublisherXPCDelegate <NSObject>
@required
-(void)publishStartedWithInstanceID:(unsigned char)arg1;
-(void)publishFailedToStartWithError:(long long)arg1;
-(void)publishTerminatedWithReason:(long long)arg1;
-(void)publishReceivedMessage:(id)arg1 fromSubscriberID:(unsigned char)arg2 subscriberAddress:(id)arg3;
-(void)publishDataConfirmedForHandle:(id)arg1 localInterfaceIndex:(unsigned)arg2 serviceSpecificInfo:(id)arg3;
-(void)publishDataTerminatedForHandle:(id)arg1 reason:(long long)arg2;

@end
