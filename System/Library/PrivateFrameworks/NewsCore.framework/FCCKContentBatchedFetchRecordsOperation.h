/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	unsigned long long _maxBatchSize;
	/*^block*/id _fetchRecordsCompletionBlock;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableDictionary* _recordsByRecordID;
	NSMutableDictionary* _errorsByRecordID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;              //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByRecordID;                //@synthesize recordsByRecordID=_recordsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                 //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                               //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                      //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchSize;                        //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;                           //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
-(NSMutableArray *)remainingRecordIDBatches;
-(void)prepareOperation;
-(NSMutableDictionary *)errorsByRecordID;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)desiredKeys;
-(BOOL)validateOperation;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setMaxBatchSize:(unsigned long long)arg1 ;
-(void)performOperation;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(void)setOperationError:(NSError *)arg1 ;
-(void)_continueRefreshing;
-(void)resetForRetry;
-(NSError *)operationError;
-(unsigned long long)maxBatchSize;
-(void)setRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableDictionary *)recordsByRecordID;
-(id)fetchRecordsCompletionBlock;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
@end

