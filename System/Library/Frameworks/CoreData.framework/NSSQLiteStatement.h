/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSString, NSCachedFetchRequestInfo;

@interface NSSQLiteStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	BOOL _isImpossibleCondition;
	BOOL _trackChangedRowCount;
	NSSQLEntity* _fakeEntityForFetch;
	NSCachedFetchRequestInfo* _cachedStatementInfo;
	sqlite3_stmtRef _cachedSQLiteStatement;
	void* _owner;

}

@property (nonatomic,retain) NSCachedFetchRequestInfo * cachedStatementInfo;              //@synthesize cachedStatementInfo=_cachedStatementInfo - In the implementation block
@property (assign,nonatomic) BOOL trackChangedRowCount;                                   //@synthesize trackChangedRowCount=_trackChangedRowCount - In the implementation block
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(void)setTrackChangedRowCount:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(BOOL)trackChangedRowCount;
-(id)initWithEntity:(id)arg1 ;
-(void)dealloc;
-(void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg1 ;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 forConnection:(id)arg2 ;
-(id)entity;
-(unsigned)addBindIntarray:(id)arg1 ;
-(id)description;
-(id)bindIntarrays;
-(void)setImpossibleCondition:(BOOL)arg1 ;
-(void)clearCaches:(BOOL)arg1 ;
-(id)bindVariables;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)setBindVariables:(id)arg1 ;
-(void)setSQLString:(id)arg1 ;
-(void)setBindIntarrays:(id)arg1 ;
-(id)fakeEntityForFetch;
-(NSCachedFetchRequestInfo *)cachedStatementInfo;
-(void)removeAllBindIntarrays;
-(void)removeAllBindVariables;
-(BOOL)isImpossibleCondition;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(id)sqlString;
-(unsigned)addBindVariable:(id)arg1 ;
@end
