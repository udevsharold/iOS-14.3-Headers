/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordIDsToDelete;
	/*^block*/id _deleteRecordsCompletionBlock;
	NSArray* _resultSavedRecords;
	NSArray* _resultDeletedRecordIDs;

}

@property (nonatomic,retain) NSArray * resultSavedRecords;                  //@synthesize resultSavedRecords=_resultSavedRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultDeletedRecordIDs;              //@synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs - In the implementation block
@property (nonatomic,copy) NSArray * recordIDsToDelete;                     //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,copy) id deleteRecordsCompletionBlock;                 //@synthesize deleteRecordsCompletionBlock=_deleteRecordsCompletionBlock - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(id)deleteRecordsCompletionBlock;
-(void)setResultDeletedRecordIDs:(NSArray *)arg1 ;
-(NSArray *)resultDeletedRecordIDs;
-(NSArray *)resultSavedRecords;
-(void)setResultSavedRecords:(NSArray *)arg1 ;
-(void)setDeleteRecordsCompletionBlock:(id)arg1 ;
-(NSArray *)recordIDsToDelete;
@end

