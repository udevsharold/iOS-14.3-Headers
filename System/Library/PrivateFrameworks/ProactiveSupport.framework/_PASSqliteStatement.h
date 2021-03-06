/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASSqliteDatabase, _PASSQLColumnMapping;

@interface _PASSqliteStatement : NSObject <NSCopying> {

	_PASSqliteDatabase* _owner;
	_PASSQLColumnMapping* _columnMapping;
	sqlite3_stmtRef _stmt;

}

@property (nonatomic,readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(sqlite3_stmtRef)stmt;
-(long long)getIntegerForColumnAlias:(const char*)arg1 ;
-(id)getNSStringForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)bindParam:(int)arg1 toNSString:(id)arg2 ;
-(id)getNSStringForColumnAlias:(const char*)arg1 ;
-(void)prepareForRowDeserialization;
-(id)init;
-(int)bindNamedParam:(const char*)arg1 toNSIndexSet:(id)arg2 ;
-(id)getNSStringForColumn:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)getIntegerForColumn:(int)arg1 ;
-(void)dealloc;
-(int)bindNamedParam:(const char*)arg1 toNSSet:(id)arg2 ;
-(int)bindParam:(int)arg1 toNSOrderedSet:(id)arg2 ;
-(long long)getInt64ForColumnAlias:(const char*)arg1 ;
-(int)_bindParam:(int)arg1 toCollection:(id)arg2 sqliteMethodName:(const char*)arg3 ;
-(int)bindParam:(int)arg1 toInt64:(long long)arg2 ;
-(id)getInt64AsNSNumberForColumn:(int)arg1 ;
-(int)bindParam:(int)arg1 toDoubleAsNSNumber:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toInt64:(long long)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toNSString:(id)arg2 ;
-(id)description;
-(BOOL)isNullForColumnAlias:(const char*)arg1 ;
-(int)bindParamToNull:(int)arg1 ;
-(id)getDoubleAsNSNumberForColumnAlias:(const char*)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toNSOrderedSet:(id)arg2 ;
-(long long)getIntegerForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toInteger:(long long)arg2 ;
-(id)getNSDataForColumnAlias:(const char*)arg1 ;
-(id)getInt64AsNSNumberForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getNSDataForColumn:(int)arg1 ;
-(void)finalize;
-(BOOL)isNullForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(double)getDoubleForColumnAlias:(const char*)arg1 ;
-(int)bindParam:(int)arg1 toInt64AsNSNumber:(id)arg2 ;
-(double)getDoubleForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getDoubleAsNSNumberForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getNSDataForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)bindParam:(int)arg1 toNSIndexSet:(id)arg2 ;
-(long long)getInt64ForColumn:(int)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toDouble:(double)arg2 ;
-(double)getDoubleForColumn:(int)arg1 ;
-(int)bindParam:(int)arg1 toDouble:(double)arg2 ;
-(int)bindNamedParamToNull:(const char*)arg1 ;
-(int)bindParam:(int)arg1 toInteger:(long long)arg2 ;
-(id)getDoubleAsNSNumberForColumn:(int)arg1 ;
-(id)getInt64AsNSNumberForColumnAlias:(const char*)arg1 ;
-(int)bindParam:(int)arg1 toNSSet:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toNSData:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toNSArray:(id)arg2 ;
-(long long)getInt64ForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)bindParam:(int)arg1 toNSData:(id)arg2 ;
-(BOOL)isColumnNull:(int)arg1 ;
-(int)bindParam:(int)arg1 toNSDictionary:(id)arg2 ;
-(int)bindParam:(int)arg1 toNSArray:(id)arg2 ;
-(id)initWithStatementPointer:(sqlite3_stmtRef)arg1 owner:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toDoubleAsNSNumber:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toNSDictionary:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toInt64AsNSNumber:(id)arg2 ;
@end

