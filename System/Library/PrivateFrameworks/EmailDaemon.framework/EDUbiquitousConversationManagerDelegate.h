/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDUbiquitousConversationManagerDelegate <NSObject>
@required
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;
-(void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;
-(long long)conversationIDForMessageIDs:(id)arg1;
-(id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
-(unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
-(id)syncedConversationIDsBySyncKey;
-(void)pruneConversationTables:(double)arg1;
-(void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;

@end

