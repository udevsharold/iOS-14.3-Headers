/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface MSConnection : NSObject {

	NSXPCConnection* _center;
	NSMutableDictionary* _serverSideConfig;
	NSObject*<OS_dispatch_queue> _serverSideConfigQueue;
	int _serverSideConfigNotificationToken;

}
+(id)sharedConnection;
-(id)pause;
-(id)init;
-(void)dealloc;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)forgetPersonID:(id)arg1 ;
-(void)resume:(id)arg1 ;
-(void)_waitForMessageToBeSent;
-(void)checkForOutstandingActivities;
-(void)handleSubscriptionPushForPersonID:(id)arg1 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(void)abortActivitiesForPersonID:(id)arg1 ;
-(id)_machErrorWithUnderlyingError:(id)arg1 ;
@end
