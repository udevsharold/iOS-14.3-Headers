/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DAEASOAuthTokenRequest : NSObject
+(id)_urlRequestForTokenRequestURI:(id)arg1 params:(id)arg2 clientID:(id)arg3 ;
+(id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 scope:(id)arg5 codeVerifier:(id)arg6 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4 ;
@end

