/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DAEASOAuthClient : NSObject
+(id)clientRedirect;
+(id)clientIDForOAuthType:(unsigned long long)arg1 ;
+(id)_defaultScopeWithoutDomainForOAuthType:(unsigned long long)arg1 ;
+(id)_defaultScopeWithDomainForOAuthType:(unsigned long long)arg1 ;
+(id)defaultScopeForOAuthType:(unsigned long long)arg1 withResourceIdentifier:(id)arg2 ;
+(id)clientRedirectForOAuthType:(unsigned long long)arg1 ;
+(id)scopeForUpgradingFromBasicCreds;
@end

