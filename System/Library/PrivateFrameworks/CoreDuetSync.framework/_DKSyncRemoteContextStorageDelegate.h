/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetSync.framework/CoreDuetSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncRemoteContextStorageDelegate <_DKSyncRemoteStorageDelegate>
@required
-(void)remoteContextStorage:(id)arg1 unsubscribeFromChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;
-(id)remoteContextStorage:(id)arg1 archivedObjectsForKeyPaths:(id)arg2;
-(BOOL)remoteContextStorage:(id)arg1 hasKnowledgeOfKeyPath:(id)arg2;
-(void)remoteContextStorage:(id)arg1 registrationIdentifier:(id)arg2 setArchivedObjects:(id)arg3 peer:(id)arg4;
-(void)remoteContextStorage:(id)arg1 subscribeToChangesWithPeer:(id)arg2 registrationIdentifier:(id)arg3 predicate:(id)arg4;

@end
