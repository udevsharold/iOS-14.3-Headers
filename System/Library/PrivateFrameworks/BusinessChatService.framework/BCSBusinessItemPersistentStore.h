/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BCSPersistentStore.h>

@interface BCSBusinessItemPersistentStore : BCSPersistentStore
+(const char*)debugQueueName;
-(id)databasePath;
-(const char*)schema;
-(long long)schemaVersion;
-(id)_databasePath;
-(BOOL)_executeDeleteBusinessItemSQLQuery:(const char*)arg1 ;
-(BOOL)_insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 ;
-(BOOL)deleteBusinessItem:(id)arg1 ;
-(BOOL)_insertBusinessItem:(id)arg1 withTTL:(double)arg2 ;
-(BOOL)_updateToLastRetrievedDate:(id)arg1 forBusinessItem:(id)arg2 ;
-(id)_executeFetchPersistentBusinessItemObjectSQLQuery:(const char*)arg1 ;
-(BOOL)deleteBusinessItemWithBizID:(id)arg1 ;
-(BOOL)deleteBusinessItemWithPhoneNumber:(id)arg1 ;
-(BOOL)insertOrReplaceBusinessItem:(id)arg1 withTTL:(double)arg2 ;
-(BOOL)updateTTL:(double)arg1 forBusinessItem:(id)arg2 ;
-(BOOL)updateLastRetrievedDateForBusinessItem:(id)arg1 ;
-(id)fetchPersistentBusinessItemObjectWithBizID:(id)arg1 ;
-(id)fetchPersistentBusinessItemObjectWithPhoneNumber:(id)arg1 ;
@end
