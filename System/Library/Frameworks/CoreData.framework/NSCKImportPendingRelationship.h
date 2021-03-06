/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSCKImportOperation;

@interface NSCKImportPendingRelationship : NSManagedObject

@property (nonatomic,retain) NSString * recordName; 
@property (nonatomic,retain) NSString * cdEntityName; 
@property (nonatomic,retain) NSString * relatedRecordName; 
@property (nonatomic,retain) NSString * relatedEntityName; 
@property (nonatomic,retain) NSString * relationshipName; 
@property (nonatomic,retain) NSNumber * needsDelete; 
@property (nonatomic,retain) NSCKImportOperation * operation; 
+(id)insertPendingRelationshipForFailedRelationship:(id)arg1 forOperation:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 ;
+(id)entityPath;
@end

