/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SLWebAuthRequest.h>

@class NSString;

@interface SLGoogleWebAuthRequest : NSObject <SLWebAuthRequest>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 codeChallenge:(id)arg6 ;
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 ;
+(id)requestForURL:(id)arg1 ;
+(void)clearCookiesFromStorage:(id)arg1 authRequestURL:(id)arg2 ;
+(id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 ;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg1 ;
+(id)authCodeFromWebPageTitle:(id)arg1 ;
+(id)authCodeFromRedirectURL:(id)arg1 ;
+(id)_parametersForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 codeChallenge:(id)arg5 ;
@end
