/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICUserIdentityStoreBackend <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate; 
@required
-(void)synchronize;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1;
-(BOOL)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
-(id)localStoreAccountPropertiesWithError:(id*)arg1;
-(BOOL)updateActiveAccountDSID:(id)arg1 error:(id*)arg2;
-(id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2;
-(BOOL)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2;
-(id)verificationContextForAccountEstablishmentWithError:(id*)arg1;
-(id)verificationContextForDSID:(id)arg1 error:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
-(id)activeLockerAccountDSIDWithError:(id*)arg1;
-(id)activeAccountDSIDWithError:(id*)arg1;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(BOOL)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2;

@end
