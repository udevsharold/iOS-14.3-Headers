/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDASession.h>

@class DAKeyManagementSession;

@interface PKAppletSubcredentialManagementSession : PKDASession

@property (nonatomic,retain) DAKeyManagementSession * session; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)revokeCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)decryptData:(id)arg1 withCredential:(id)arg2 ephemeralPublicKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)listCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)trackSubcredential:(id)arg1 withReceipt:(id)arg2 ;
-(void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)listSharingInvitationsForKeyIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)listReceivedSharingInvitationsWithCompletion:(/*^block*/id)arg1 ;
@end
