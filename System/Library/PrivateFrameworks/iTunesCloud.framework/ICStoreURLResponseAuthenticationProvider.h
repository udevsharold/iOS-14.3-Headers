/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

