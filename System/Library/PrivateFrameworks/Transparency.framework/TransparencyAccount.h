/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TransparencyAccount : NSObject
+(id)sharedAccountStore;
+(id)primaryAccount:(id*)arg1 ;
+(unsigned long long)accountLevel:(id)arg1 ;
+(long long)accountLevelErrorCodeForLevel:(id)arg1 ;
+(id)createAuthToken:(id)arg1 authToken:(id)arg2 ;
+(id)createAuthkitSession;
+(id)authToken:(id*)arg1 ;
+(BOOL)eligibleForSelfVerify;
+(BOOL)eligibleForPeerVerify;
+(BOOL)eligibleForEnrollmentVerify;
+(BOOL)initiateCredentialRenewal:(id*)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
