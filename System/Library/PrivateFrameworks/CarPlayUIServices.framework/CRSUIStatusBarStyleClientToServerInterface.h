/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRSUIStatusBarStyleClientToServerInterface <NSObject>
@required
-(oneway void)clientAcquireForSiriPresentationWithFenceHandle:(id)arg1 animationSettings:(id)arg2;
-(oneway void)clientAcquireWithInterfaceStyle:(id)arg1 contrast:(id)arg2 fenceHandle:(id)arg3 animationSettings:(id)arg4;
-(oneway void)clientReliquishWithFenceHandle:(id)arg1 animationSettings:(id)arg2;

@end
