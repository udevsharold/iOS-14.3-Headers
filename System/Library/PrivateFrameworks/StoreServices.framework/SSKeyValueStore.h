/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {

	SSXPCConnection* _connection;
	SSKeyValueStoreDatabase* _database;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}

@property (getter=isLocalReadable,readonly) BOOL localReadable; 
@property (getter=isLocalWritable,readonly) BOOL localWritable; 
+(BOOL)isLocalReadable;
-(void)removeAllValuesForDomain:(id)arg1 ;
-(id)accountDictionaries;
-(id)init;
-(BOOL)isLocalReadable;
-(BOOL)isLocalWritable;
-(id)copyAccounts;
-(void)dealloc;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)_loadDatabaseIfNecessary;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(void)removeAccountDictionaries;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)arg1 ;
@end

