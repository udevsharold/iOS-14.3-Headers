/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class EFSQLPreparedStatement, NSDictionary;

@interface EFSQLRow : NSObject {

	BOOL _namedColumnsInitialized;
	sqlite3_stmtRef _statement;
	EFSQLPreparedStatement* _preparedStatement;
	NSDictionary* _columns;
	unsigned long long _columnCount;

}

@property (nonatomic,readonly) sqlite3_stmtRef statement;                             //@synthesize statement=_statement - In the implementation block
@property (nonatomic,retain) EFSQLPreparedStatement * preparedStatement;              //@synthesize preparedStatement=_preparedStatement - In the implementation block
@property (nonatomic,readonly) NSDictionary * columns;                                //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) BOOL namedColumnsInitialized;                            //@synthesize namedColumnsInitialized=_namedColumnsInitialized - In the implementation block
@property (assign,nonatomic) unsigned long long columnCount;                          //@synthesize columnCount=_columnCount - In the implementation block
-(sqlite3_stmtRef)statement;
-(unsigned long long)columnCount;
-(BOOL)namedColumnsInitialized;
-(NSDictionary *)columns;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 ;
-(void)setPreparedStatement:(EFSQLPreparedStatement *)arg1 ;
-(id)columnNames;
-(BOOL)columnExistsWithName:(id)arg1 ;
-(BOOL)columnExistsAtIndex:(unsigned long long)arg1 ;
-(EFSQLPreparedStatement *)preparedStatement;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(id)initWithPreparedStatement:(id)arg1 ;
-(id)_queryString;
-(void)setNamedColumnsInitialized:(BOOL)arg1 ;
-(id)initWithColumns:(id)arg1 ;
-(id)debugDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
@end

