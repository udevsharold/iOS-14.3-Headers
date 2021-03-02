/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSSQLiteIndexStatistics : NSObject {

	NSString* _storeIdentifier;
	NSString* _indexName;
	long long _executionCount;
	long long _instructionCount;
	long long _rowCount;

}

@property (nonatomic,readonly) NSString * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * indexName;                    //@synthesize indexName=_indexName - In the implementation block
@property (nonatomic,readonly) long long executionCount;                //@synthesize executionCount=_executionCount - In the implementation block
@property (nonatomic,readonly) long long instructionCount;              //@synthesize instructionCount=_instructionCount - In the implementation block
@property (nonatomic,readonly) long long rowCount;                      //@synthesize rowCount=_rowCount - In the implementation block
-(id)init;
-(id)initWithResultDictionary:(id)arg1 storeID:(id)arg2 ;
-(void)addStatistics:(id)arg1 ;
-(id)initWithName:(id)arg1 storeID:(id)arg2 ;
-(void)incrementExecutionCountWithInstructionCount:(long long)arg1 rowCount:(long long)arg2 ;
-(void)dealloc;
-(long long)instructionCount;
-(NSString *)storeIdentifier;
-(NSString *)indexName;
-(long long)executionCount;
-(long long)rowCount;
@end
