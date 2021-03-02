/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SiriCoreSQLiteQuery, SiriCoreSQLiteStatement, NSArray, NSDictionary, NSError;

@interface SiriCoreSQLiteQueryResult : NSObject {

	SiriCoreSQLiteQuery* _query;
	unsigned long long _beginMachTime;
	unsigned long long _endMachTime;
	SiriCoreSQLiteStatement* _statement;
	NSArray* _columnNameTuple;
	NSArray* _columnValueTuples;
	NSDictionary* _columnValuesMap;
	NSArray* _rowValueTuples;
	NSArray* _rowValueMaps;
	NSArray* _records;
	NSError* _error;

}

@property (nonatomic,copy,readonly) SiriCoreSQLiteQuery * query;                 //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long beginMachTime;                 //@synthesize beginMachTime=_beginMachTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachTime;                   //@synthesize endMachTime=_endMachTime - In the implementation block
@property (nonatomic,readonly) SiriCoreSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNameTuple;                   //@synthesize columnNameTuple=_columnNameTuple - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnValueTuples;                 //@synthesize columnValueTuples=_columnValueTuples - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * columnValuesMap;              //@synthesize columnValuesMap=_columnValuesMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowValueTuples;                    //@synthesize rowValueTuples=_rowValueTuples - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rowValueMaps;                      //@synthesize rowValueMaps=_rowValueMaps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * records;                           //@synthesize records=_records - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(SiriCoreSQLiteStatement *)statement;
-(NSArray *)records;
-(unsigned long long)beginMachTime;
-(NSError *)error;
-(NSArray *)rowValueMaps;
-(unsigned long long)endMachTime;
-(NSArray *)columnValueTuples;
-(NSDictionary *)columnValuesMap;
-(SiriCoreSQLiteQuery *)query;
-(NSArray *)columnNameTuple;
-(id)description;
-(id)initWithQuery:(id)arg1 beginMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 statement:(id)arg4 columnNameTuple:(id)arg5 columnValueTuples:(id)arg6 columnValuesMap:(id)arg7 rowValueTuples:(id)arg8 rowValueMaps:(id)arg9 records:(id)arg10 error:(id)arg11 ;
-(NSArray *)rowValueTuples;
@end
