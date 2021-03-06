/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFHistoryAnalyzerContext.h>

@class NSMutableDictionary, NSManagedObjectContext, NSSet;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {

	NSMutableDictionary* _objectIDToAnalyzerStateCache;
	NSManagedObjectContext* _managedObjectContext;
	NSSet* _configuredEntityNames;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSSet * configuredEntityNames;                              //@synthesize configuredEntityNames=_configuredEntityNames - In the implementation block
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 store:(id)arg3 ;
-(id)cloudKitAnalyzerOptions;
-(BOOL)reset:(id*)arg1 ;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)finishProcessing:(id*)arg1 ;
-(id)fetchSortedStates:(id*)arg1 ;
-(BOOL)resetStateForObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)processChange:(id)arg1 error:(id*)arg2 ;
-(id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2 ;
-(id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2 ;
-(NSSet *)configuredEntityNames;
@end

