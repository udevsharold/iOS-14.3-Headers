/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSArray, NSOperationQueue, NSDictionary;

@interface NSMetadataQuery : NSObject {

	unsigned long long _flags;
	double _interval;
	id _private[11];
	void* _reserved;

}

@property (assign) id<NSMetadataQueryDelegate> delegate; 
@property (copy) NSPredicate * predicate; 
@property (copy) NSArray * sortDescriptors; 
@property (copy) NSArray * valueListAttributes; 
@property (copy) NSArray * groupingAttributes; 
@property (assign) double notificationBatchingInterval; 
@property (copy) NSArray * searchScopes; 
@property (copy) NSArray * searchItems; 
@property (retain) NSOperationQueue * operationQueue; 
@property (getter=isStarted,readonly) BOOL started; 
@property (getter=isGathering,readonly) BOOL gathering; 
@property (getter=isStopped,readonly) BOOL stopped; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
@property (copy,readonly) NSDictionary * valueLists; 
@property (copy,readonly) NSArray * groupedResults; 
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg1 ;
+(void)didEndPossibleFileOperation:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(Class)_stitchingClass;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(unsigned long long)resultCount;
-(BOOL)isStarted;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(BOOL)arg2 ;
-(id)init;
-(NSArray *)results;
-(BOOL)_canModifyQueryOrObserversInCurrentContext;
-(void)stopQuery;
-(id)_externalDocumentsBundleIdentifier;
-(void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2 ;
-(void)setNotificationBatchingInterval:(double)arg1 ;
-(BOOL)startQuery;
-(NSDictionary *)valueLists;
-(BOOL)_isMDQuery;
-(void)dealloc;
-(NSArray *)searchItems;
-(void)_noteNote1:(id)arg1 ;
-(void)_noteNote2:(id)arg1 ;
-(void)_noteNote3:(id)arg1 ;
-(void)_noteNote4:(id)arg1 ;
-(void)_noteNote5:(id)arg1 ;
-(BOOL)isGathering;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_update;
-(NSArray *)searchScopes;
-(void)_setExternalDocumentsBundleIdentifier:(id)arg1 ;
-(void)enableUpdates;
-(void)enumerateResultsUsingBlock:(/*^block*/id)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)_validatePredicate:(id)arg1 withScopes:(id)arg2 ;
-(void)_inOriginalContextInvokeBlock:(/*^block*/id)arg1 ;
-(void)_validateInvocationContext;
-(void)_zapResultArrayIfIdenticalTo:(id)arg1 ;
-(BOOL)isStopped;
-(NSOperationQueue *)operationQueue;
-(void)setSearchItems:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)_recreateQuery;
-(void)disableUpdates;
-(id)_allAttributes;
-(id)searchItemURLs;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(NSArray *)groupedResults;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(double)notificationBatchingInterval;
-(void)_resetQueryState;
-(void)setSearchScopes:(NSArray *)arg1 ;
-(NSArray *)groupingAttributes;
-(void)setGroupingAttributes:(NSArray *)arg1 ;
-(id)_sortingAttributes;
-(void)_setBatchingParams;
-(void)_enableAutoUpdates;
-(void)setSearchItemURLs:(id)arg1 ;
-(id)_queryString;
-(void)setValueListAttributes:(NSArray *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)valueListAttributes;
-(void)_disableAutoUpdates;
-(void)setDelegate:(id<NSMetadataQueryDelegate>)arg1 ;
-(id<NSMetadataQueryDelegate>)delegate;
@end

