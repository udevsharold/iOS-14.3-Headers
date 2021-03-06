/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSSQLiteStatement, NSMutableDictionary;

@interface NSSQLiteStatementCache : NSObject {

	NSSQLEntity* _entity;
	NSSQLiteStatement* _insertStatementCache;
	NSSQLiteStatement* _batchInsertStatementCache;
	NSSQLiteStatement* _deletionStatementCache;
	NSSQLiteStatement* _faultingStatementCache;
	NSMutableDictionary* _toManyRelationshipStatementCache;
	CFDictionaryRef _correlationInsertCache;
	CFDictionaryRef _correlationDeleteCache;
	CFDictionaryRef _correlationMasterReorderCache;
	CFDictionaryRef _correlationMasterReorderCachePart2;
	CFDictionaryRef _correlationReorderCache;

}
-(void)clearCachedStatements;
-(id)correlationInsertStatementForRelationship:(id)arg1 ;
-(id)faultingStatement;
-(id)correlationMasterReorderStatementForRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(id)insertStatement;
-(void)dealloc;
-(CFDictionaryRef)createCorrelationCacheDictionary;
-(id)deletionStatement;
-(id)correlationDeleteStatementForRelationship:(id)arg1 ;
-(void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(CFDictionaryRef)arg3 ;
-(void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)batchInsertStatement;
-(void)cacheBatchInsertStatement:(id)arg1 ;
-(void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2 ;
-(void)cacheFaultingStatement:(id)arg1 ;
-(void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3 ;
-(id)correlationReorderStatementForRelationship:(id)arg1 ;
-(void)_clearSaveGeneratedCachedStatements;
-(void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(void)cacheDeletionStatement:(id)arg1 ;
-(void)cacheInsertStatement:(id)arg1 ;
-(id)preparedFaultingCachesForRelationship:(id)arg1 ;
@end

