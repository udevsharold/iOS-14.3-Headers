/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSSQLiteConnectionDelegate;
#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSMutableArray, NSMapTable, AMSSQLiteConnectionOptions, NSError;

@interface AMSSQLiteConnection : NSObject {

	NSMutableArray* _afterTransactionBlocks;
	sqlite3Ref _database;
	id<AMSSQLiteConnectionDelegate> _delegate;
	BOOL _didResetForCorruption;
	NSMapTable* _preparedStatements;
	long long _transactionDepth;
	BOOL _transactionWantsRollback;
	AMSSQLiteConnectionOptions* _options;

}

@property (nonatomic,copy,readonly) NSError * currentError; 
@property (nonatomic,copy,readonly) AMSSQLiteConnectionOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<AMSSQLiteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long lastChangeCount; 
-(id)initWithOptions:(id)arg1 ;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_resetAfterCorruptionError;
-(void)dealloc;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)finalizePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(void)_finalizeAllStatements;
-(BOOL)executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSError *)currentError;
-(BOOL)_close;
-(BOOL)_performResetAfterCorruptionError;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)truncate;
-(BOOL)_openAndAllowRetry:(BOOL)arg1 ;
-(BOOL)_executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<AMSSQLiteConnectionDelegate>)arg1 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)close;
-(void)_flushAfterTransactionBlocks;
-(BOOL)_resetAfterIOError;
-(BOOL)open;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_open;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(long long)lastChangeCount;
-(id<AMSSQLiteConnectionDelegate>)delegate;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(AMSSQLiteConnectionOptions *)options;
@end
