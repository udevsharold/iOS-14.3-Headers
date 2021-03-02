/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPCompanionLinkXPCClientInterface
@optional
-(void)companionLinkLostDevice:(id)arg1;
-(void)companionLinkChangedDevice:(id)arg1 changes:(unsigned)arg2;
-(void)companionLinkHandleDisconnect;
-(void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;
-(void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned)arg2 throttleSeconds:(int)arg3;
-(void)companionLinkLocalDeviceUpdated:(id)arg1;
-(void)companionLinkAuthCompleted:(id)arg1;
-(void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
-(void)xpcServerHidePassword:(unsigned)arg1;
-(void)xpcServerAcceptSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)companionLinkFoundDevice:(id)arg1;
-(void)xpcServerShowPassword:(id)arg1 flags:(unsigned)arg2;
-(void)xpcDiscoveryFoundEndpoint:(id)arg1;
-(void)xpcDiscoveryLostEndpoint:(id)arg1;
-(void)xpcDiscoveryChangedEndpoint:(id)arg1;

@end
