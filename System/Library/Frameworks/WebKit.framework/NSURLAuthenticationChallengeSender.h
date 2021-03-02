/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@required
-(void)cancelAuthenticationChallenge:(id)arg1;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

@end
