/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SidecarCore_Interface
@required
-(void)relaySession:(id)arg1 openedByDevice:(id)arg2 dataLink:(long long)arg3 service:(id)arg4;
-(void)relaySession:(long long)arg1 receivedOPACKData:(id)arg2 dataLink:(long long)arg3;
-(void)relaySession:(long long)arg1 closedWithError:(id)arg2;
-(void)relaySession:(long long)arg1 stream:(id)arg2 status:(unsigned long long)arg3;
-(void)relayPresenterStartServiceExtension:(id)arg1 completion:(/*^block*/id)arg2;
-(void)relayPresenterServiceExtensionReady:(id)arg1;
-(void)relayTerminateService;

@end

