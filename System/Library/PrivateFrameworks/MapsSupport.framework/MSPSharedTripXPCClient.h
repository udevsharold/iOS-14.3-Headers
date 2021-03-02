/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPSharedTripXPCClient <NSObject>
@required
-(void)sharedTripDidUpdateRecipients:(id)arg1;
-(void)routeDidUpdateForSharedTrip:(id)arg1;
-(void)sharingIdentityDidChange:(id)arg1;
-(void)destinationDidUpdateForSharedTrip:(id)arg1;
-(void)etaDidUpdateForSharedTrip:(id)arg1;
-(void)sharedTripDidClose:(id)arg1;
-(void)destinationReachedDidUpdateForSharedTrip:(id)arg1;
-(void)sharedTripDidBecomeUnavailable:(id)arg1;
-(void)sharedTripDidBecomeAvailable:(id)arg1;
-(void)sharedTripInvalidatedWithError:(id)arg1;

@end
