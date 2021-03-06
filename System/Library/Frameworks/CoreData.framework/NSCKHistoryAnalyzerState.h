/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/PFHistoryAnalyzerObjectState.h>

@class NSNumber, NSManagedObjectID, NSDictionary, NSString;

@interface NSCKHistoryAnalyzerState : NSManagedObject <PFHistoryAnalyzerObjectState>

@property (nonatomic,retain) NSNumber * entityId; 
@property (nonatomic,retain) NSNumber * entityPK; 
@property (nonatomic,retain) NSNumber * originalChangeTypeNum; 
@property (nonatomic,retain) NSNumber * finalChangeTypeNum; 
@property (nonatomic,readonly) NSManagedObjectID * analyzedObjectID; 
@property (nonatomic,readonly) NSNumber * originalTransactionNumber; 
@property (nonatomic,readonly) long long originalChangeType; 
@property (nonatomic,readonly) NSNumber * finalTransactionNumber; 
@property (nonatomic,readonly) long long finalChangeType; 
@property (nonatomic,readonly) NSDictionary * tombstone; 
@property (nonatomic,readonly) NSString * finalChangeAuthor; 
+(id)insertAnalyzerStateForChange:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)countAnalyzerStatesInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)fetchStateForChangedObjectID:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)purgeAnalyzedHistoryFromStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)countAnalyzerStatesInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)entityPath;
-(NSManagedObjectID *)analyzedObjectID;
-(long long)finalChangeType;
-(NSDictionary *)tombstone;
-(void)updateWithChange:(id)arg1 ;
-(long long)originalChangeType;
@end

