/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSUIWebActionRunnerDelegate <NSObject>
@required
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleAuthenticateRequest:(id)arg3;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleDialogRequest:(id)arg3;
-(void)actionDidFinishPurchaseWithResult:(id)arg1 error:(id)arg2;
-(id)action:(id)arg1 handleActionObject:(id)arg2;
-(void)action:(id)arg1 didEncodeNetworkRequest:(id)arg2;

@end

