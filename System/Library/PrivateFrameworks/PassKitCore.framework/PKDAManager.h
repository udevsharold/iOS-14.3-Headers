/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PKDAPairingSessionManager, PKDASessionManager;

@interface PKDAManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PKDAPairingSessionManager* _pairingSessionManager;
	PKDASessionManager* _managementSessionManager;
	PKDASessionManager* _sharingSessionManager;

}

@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
-(BOOL)isSupported;
-(void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 withSharedCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)updateTrackingAttestation:(id)arg1 forCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)probeTerminalForPairingStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)revokeCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)statusForReceivedSharingInvitationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(void)decryptData:(id)arg1 withCredential:(id)arg2 ephemeralPublicKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)listCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)declineSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prewarmWithIssuerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)statusForSentSharingInvitationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)listCredentialsWithSession:(id)arg1 seid:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
