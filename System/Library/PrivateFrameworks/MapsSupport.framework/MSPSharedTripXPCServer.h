/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPSharedTripXPCServer <NSObject>
@required
-(void)blockSharedTrip:(id)arg1;
-(void)checkinWithCompletion:(/*^block*/id)arg1;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stopSharingTripWithContacts:(id)arg1;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stopSharingTrip;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)stopSharingTripWithMessagesGroup:(id)arg1;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stopSharingTripWithMessagesContacts:(id)arg1;

@end

