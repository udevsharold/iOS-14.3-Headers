/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _WKWebAuthenticationPanelDelegate <NSObject>
@optional
-(void)panel:(id)arg1 updateWebAuthenticationPanel:(long long)arg2;
-(void)panel:(id)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
-(void)panel:(id)arg1 requestPINWithRemainingRetries:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)panel:(id)arg1 selectAssertionResponse:(id)arg2 source:(long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)panel:(id)arg1 decidePolicyForLocalAuthenticatorWithCompletionHandler:(/*^block*/id)arg2;

@end

