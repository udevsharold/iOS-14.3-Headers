/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBBridgeCompanionProtocol <NSObject>
@optional
-(void)gizmoBecameAvailableWantsConfirmation:(id)arg1;

@required
-(void)sendProxyActivationRequest:(id)arg1;
-(void)gizmoDidBeginActivating:(id)arg1;
-(void)gizmoDidFinishActivating:(id)arg1;
-(void)getCompanionLanguage:(id)arg1;
-(void)getCompanionRegion:(id)arg1;
-(void)gizmoDidEndPasscodeCreation:(id)arg1;
-(void)getSiriState:(id)arg1;
-(void)handleWarrantySentinelResponse:(id)arg1;
-(void)enableSiriForGizmo:(id)arg1;

@end
