/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginCompanionAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginCompanionAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(HMDRemoteLoginCompanionAuthenticationRequest *)request;
-(void)dealloc;
-(id)description;
-(void)_authenticate;
-(void)authenticate;
-(void)_authenticateAccount:(id)arg1 alreadyExists:(BOOL)arg2 withCompanionDevice:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
@end
