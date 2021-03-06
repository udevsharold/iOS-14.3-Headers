/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSHashTable, RLMSchema, RLMRealmConfiguration;

@interface RLMRealm : NSObject {

	shared_ptr<realm::Realm>* _realm;
	RLMSchemaInfo* _info;
	unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo> >* _resultsSetInfo;
	NSHashTable* _collectionEnumerators;
	BOOL _sendingNotifications;
	BOOL _dynamic;
	RLMSchema* _schema;
	NSHashTable* _notificationHandlers;

}

@property (nonatomic,retain) NSHashTable * notificationHandlers;                   //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (nonatomic,readonly) Group* group; 
@property (nonatomic,readonly) BOOL dynamic;                                       //@synthesize dynamic=_dynamic - In the implementation block
@property (nonatomic,retain) RLMSchema * schema;                                   //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) BOOL inWriteTransaction; 
@property (nonatomic,readonly) RLMRealmConfiguration * configuration; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) BOOL autorefresh; 
+(id)defaultRealm;
+(id)realmWithConfiguration:(id)arg1 error:(id*)arg2 ;
+(BOOL)isCoreDebug;
+(id)realmWithURL:(id)arg1 ;
+(id)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)realmWithSharedRealm:(shared_ptr<realm::Realm>*)arg1 schema:(id)arg2 ;
+(id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id*)arg2 ;
+(void)resetRealmState;
+(unsigned long long)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
+(BOOL)performMigrationForConfiguration:(id)arg1 error:(id*)arg2 ;
-(RLMSchema *)schema;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(id)objects:(id)arg1 where:(id)arg2 args:(char*)arg3 ;
-(id)initPrivate;
-(BOOL)refresh;
-(void)commitWriteTransaction;
-(void)verifyThread;
-(BOOL)inWriteTransaction;
-(BOOL)isEmpty;
-(id)objects:(id)arg1 where:(id)arg2 ;
-(BOOL)dynamic;
-(void)transactionWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(RLMRealmConfiguration *)configuration;
-(void)setSchema:(RLMSchema *)arg1 ;
-(void)addOrUpdateObject:(id)arg1 ;
-(NSHashTable *)notificationHandlers;
-(void)cancelWriteTransaction;
-(void)unregisterEnumerator:(id)arg1 ;
-(void)verifyNotificationsAreSupported:(BOOL)arg1 ;
-(void)setAutorefresh:(BOOL)arg1 ;
-(void)deleteAllObjects;
-(BOOL)compact;
-(void)addOrUpdateObjects:(id)arg1 ;
-(id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2 ;
-(id)allObjects:(id)arg1 ;
-(void)sendNotifications:(id)arg1 ;
-(BOOL)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
-(void)addObjects:(id)arg1 ;
-(void)detachAllEnumerators;
-(Group*)group;
-(id)objects:(id)arg1 withPredicate:(id)arg2 ;
-(id)createObject:(id)arg1 withValue:(id)arg2 ;
-(BOOL)commitWriteTransaction:(id*)arg1 ;
-(BOOL)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id*)arg2 ;
-(void)addObject:(id)arg1 ;
-(void)setNotificationHandlers:(NSHashTable *)arg1 ;
-(BOOL)autorefresh;
-(BOOL)transactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)deleteObject:(id)arg1 ;
-(id)resolveThreadSafeReference:(id)arg1 ;
-(void)deleteObjects:(id)arg1 ;
-(void)beginWriteTransaction;
-(void)invalidate;
-(void)registerEnumerator:(id)arg1 ;
@end

