/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * schema; 
-(EFSQLSchema *)schema;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(id)messagesTableStubSchema;
-(id)mailboxesTableStubSchema;
-(id)serverMessagesTableSchema;
-(id)serverLabelsTableSchema;
-(id)localMessageActionsTableSchema;
-(id)actionMessagesTableSchema;
-(id)actionLabelsTableSchema;
-(id)actionFlagsTableSchema;
-(EDPersistenceDatabaseConnection *)connection;
@end

