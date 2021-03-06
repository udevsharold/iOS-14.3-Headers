/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WCAFetchRequest.h>

@class NSDictionary, NSString, NSArray;

@interface WCAFetchSQLiteRequest : WCAFetchRequest {

	NSDictionary* _parameters;
	NSString* _tableName;
	NSArray* _columnNames;
	long long _limit;

}

@property (nonatomic,copy) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * tableName;                   //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSArray * columnNames;                  //@synthesize columnNames=_columnNames - In the implementation block
@property (assign,nonatomic) long long limit;                      //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)tableName;
-(NSDictionary *)parameters;
-(long long)limit;
-(NSArray *)columnNames;
-(void)setTableName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setLimit:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setColumnNames:(NSArray *)arg1 ;
@end

