/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CDPContext;


@protocol CDPDCircleProxy <NSObject>
@property (nonatomic,readonly) CDPContext * cdpContext; 
@required
-(id)requestToResetProtectedData:(id*)arg1;
-(id)peerDeviceNamesByPeerID;
-(BOOL)registerCredentials;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
-(unsigned long long)circleStatus:(id*)arg1;
-(void)didJoinCircleAfterRecovery:(id)arg1;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1;
-(BOOL)registerCredentialsIfMissing;
-(BOOL)hasNonViewAwarePeers;
-(void)reportFailure:(id)arg1;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
-(BOOL)isLastBackupMakingPeer:(id*)arg1;
-(BOOL)tryRegisteringCredentials;
-(void)reportSuccess;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1;
-(id)pairingChannelAcceptor:(id*)arg1;
-(BOOL)synchronizeCircleViews;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
-(id)peerId;
-(BOOL)requestToResetCircle:(id*)arg1;
-(BOOL)removeNonViewAwarePeers:(id*)arg1;
-(CDPContext *)cdpContext;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1;
-(BOOL)requestToJoinCircle:(id*)arg1;
-(void)waitForUpdate;
-(id)pairingChannelInitiator:(id*)arg1;
-(BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id*)arg2;
-(unsigned long long)cachedCliqueStatus:(id*)arg1;
-(id)generateVerifierWithRecoveryKey:(id)arg1 error:(id*)arg2;
-(int)cachedCircleStatus:(id*)arg1;
-(BOOL)canAuthenticate;

@end
