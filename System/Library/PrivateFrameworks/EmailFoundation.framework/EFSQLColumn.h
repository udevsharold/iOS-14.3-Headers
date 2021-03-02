/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSString, NSData, NSNumber, NSDate;

@interface EFSQLColumn : NSObject {

	long long _index;
	sqlite3_stmtRef _statement;

}

@property (nonatomic,readonly) sqlite3_stmtRef statement;                //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) long long index;                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id objectValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSData * dataValue; 
@property (nonatomic,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) long long databaseIDValue; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) long long integerValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) NSDate * dateValue; 
-(sqlite3_stmtRef)statement;
-(NSDate *)dateValue;
-(id)objectValue;
-(long long)int64Value;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(long long)index;
-(NSString *)stringValue;
-(NSNumber *)numberValue;
-(NSData *)dataValue;
-(id)initWithPreparedStatement:(id)arg1 index:(long long)arg2 ;
-(long long)databaseIDValue;
-(NSString *)name;
-(id)debugDescription;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 index:(long long)arg2 ;
@end
