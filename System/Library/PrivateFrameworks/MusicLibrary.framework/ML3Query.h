/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ML3MusicLibrary, ML3Predicate, NSArray, NSString, ML3AggregateQuery;

@interface ML3Query : NSObject <NSSecureCoding, NSCopying> {

	ML3MusicLibrary* _library;
	Class _entityClass;
	ML3Predicate* _predicate;
	NSArray* _orderingTerms;
	NSString* _propertyToCount;
	ML3AggregateQuery* _nonDirectAggregateQuery;
	BOOL _usingSections;
	long long _options;
	BOOL _filtersOnDynamicProperties;
	unsigned long long _limit;

}

@property (nonatomic,readonly) NSString * selectPersistentIDsSQL; 
@property (nonatomic,readonly) NSString * selectCountSQL; 
@property (nonatomic,readonly) NSString * persistentIDProperty; 
@property (nonatomic,readonly) ML3MusicLibrary * library;                                          //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                                  //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicateIncludingSystemwidePredicates; 
@property (nonatomic,readonly) NSArray * orderingTerms;                                            //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (nonatomic,readonly) NSString * propertyToCount;                                         //@synthesize propertyToCount=_propertyToCount - In the implementation block
@property (nonatomic,readonly) BOOL hasEntities; 
@property (nonatomic,readonly) long long anyEntityPersistentID; 
@property (nonatomic,readonly) unsigned long long countOfEntities; 
@property (nonatomic,readonly) ML3AggregateQuery * nonDirectAggregateQuery;                        //@synthesize nonDirectAggregateQuery=_nonDirectAggregateQuery - In the implementation block
@property (nonatomic,readonly) NSString * sectionProperty; 
@property (nonatomic,readonly) BOOL usingSections;                                                 //@synthesize usingSections=_usingSections - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                             //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) long long options;                                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL filtersOnDynamicProperties;                                    //@synthesize filtersOnDynamicProperties=_filtersOnDynamicProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(ML3MusicLibrary *)library;
-(BOOL)usingSections;
-(void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)nameOrderPropertyForProperty:(id)arg1 ;
-(BOOL)filtersOnDynamicProperties;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 distinct:(BOOL)arg3 ;
-(id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)ignoreRestrictionsPredicates;
-(BOOL)deleteAllEntitiesFromLibrary;
-(id)reverseQuery;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 ;
-(unsigned long long)limit;
-(NSString *)persistentIDProperty;
-(ML3Predicate *)predicateIncludingSystemwidePredicates;
-(BOOL)hasEntities;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)sections;
-(BOOL)ignoreSystemFilterPredicates;
-(NSArray *)orderingTerms;
-(id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(long long)arg8 ;
-(BOOL)hasRowForColumn:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sectionProperty;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 distinct:(BOOL)arg6 limit:(unsigned long long)arg7 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 ;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)description;
-(ML3AggregateQuery *)nonDirectAggregateQuery;
-(NSString *)propertyToCount;
-(Class)entityClass;
-(BOOL)isEqual:(id)arg1 ;
-(ML3Predicate *)predicate;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 ;
-(NSString *)selectPersistentIDsSQL;
-(NSString *)selectCountSQL;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(BOOL)arg3 ;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 ;
-(id)selectUnorderedPersistentIDsSQL;
-(unsigned long long)countOfEntities;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 sectionProperty:(id)arg3 cancelBlock:(/*^block*/id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(long long)anyEntityPersistentID;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(BOOL)arg4 cancelHandler:(/*^block*/id)arg5 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 ;
-(id)selectSectionsSQL;
-(id)countStatementParameters;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2 ;
-(id)persistentIDParameters;
-(id)sectionsParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(long long)options;
@end
