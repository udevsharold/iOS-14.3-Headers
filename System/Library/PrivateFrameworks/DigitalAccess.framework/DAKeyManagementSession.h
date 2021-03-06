/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalAccess/DASession.h>
#import <libobjc.A.dylib/KmlSessionCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DAKeyTrackingUpdate.h>
#import <libobjc.A.dylib/DAKeyBindingAttestationUpdate.h>
#import <libobjc.A.dylib/DAKeyImmobilizerTokenUpdate.h>

@class NSString;

@interface DAKeyManagementSession : DASession <KmlSessionCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyBindingAttestationUpdate, DAKeyImmobilizerTokenUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)setTrackingReceipt:(id)arg1 forKeyWithIdentifier:(id)arg2 ;
-(void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setBindingAttestation:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)didEnd:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)listKeysWithHandler:(/*^block*/id)arg1 ;
-(void)deleteKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)countImmobilizerTokensForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)revokeKeysWithIdentifiers:(id)arg1 sharedByOwnerKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)signAppData:(id)arg1 appBundleIdentifier:(id)arg2 nonce:(id)arg3 auth:(id)arg4 keyIdentifier:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)cancelInvitationsWithIdentifiers:(id)arg1 sentByOwnerKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)endPointPrivacyDecryption:(id)arg1 encryptedData:(id)arg2 publicKey:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)removeSharedKeysWithIdentifiers:(id)arg1 ownerKeyWithIdentifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)listSharingInvitationsForKeyIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)listReceivedSharingInvitationsWithCallback:(/*^block*/id)arg1 ;
-(void)listKeysWithSession:(id)arg1 seid:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setImmobilizerTokens:(id)arg1 publicKey:(id)arg2 forKeyWithIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)didStart:(BOOL)arg1 ;
-(void)cancelAllFriendInvitationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)localDeleteKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 auth:(id)arg2 keyIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
@end

