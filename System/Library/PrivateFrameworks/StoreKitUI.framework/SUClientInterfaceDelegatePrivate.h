/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegatePrivate <SUClientInterfaceDelegate>
@optional
-(void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
-(void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
-(void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
-(void)clientInterface:(id)arg1 dismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)clientInterface:(id)arg1 presentSafariViewControllerWithURL:(id)arg2 fromViewController:(id)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)clientInterface:(id)arg1 dismissSafariViewControllerAnimated:(BOOL)arg2 fromViewController:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)clientInterface:(id)arg1 isAllowedToOpenExternalURL:(id)arg2;

@end

