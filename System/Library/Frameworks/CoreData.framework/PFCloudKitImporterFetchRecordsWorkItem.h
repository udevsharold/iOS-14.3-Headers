/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImportRecordsWorkItem {

	NSMutableArray* _updatedObjectIDs;
	NSMutableDictionary* _failedObjectIDsToError;
	NSMutableDictionary* _recordIDToObjectID;
	NSMutableDictionary* _operationsToExecute;

}

@property (nonatomic,readonly) NSArray * updatedObjectIDs;                         //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * failedObjectIDsToError;              //@synthesize failedObjectIDsToError=_failedObjectIDsToError - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordIDToObjectID;                  //@synthesize recordIDToObjectID=_recordIDToObjectID - In the implementation block
@property (nonatomic,readonly) NSDictionary * operationsToExecute;                 //@synthesize operationsToExecute=_operationsToExecute - In the implementation block
-(NSDictionary *)failedObjectIDsToError;
-(id)fetchRecordsRequest;
-(id)batchRecordIDsIfNecessary:(id)arg1 ;
-(void)fetchFinishedForRecord:(id)arg1 withID:(id)arg2 error:(id)arg3 ;
-(void)fetchRecordsOperationWithID:(id)arg1 finishedWithError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createMirroringResultForRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(id)entityNameToAttributesToUpdate;
-(id)entityNameToRelationshipsToUpdate;
-(NSDictionary *)recordIDToObjectID;
-(NSDictionary *)operationsToExecute;
-(void)dealloc;
-(id)description;
-(id)initWithOptions:(id)arg1 request:(id)arg2 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)updatedObjectIDs;
@end

