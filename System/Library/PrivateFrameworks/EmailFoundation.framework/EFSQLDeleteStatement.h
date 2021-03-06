/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFSQLValueExpressable;
@class NSString, NSMutableArray;

@interface EFSQLDeleteStatement : NSObject {

	unsigned long long _limit;
	NSString* _table;
	id<EFSQLValueExpressable> _whereClause;
	NSMutableArray* _orderExpressions;

}

@property (assign,nonatomic) unsigned long long limit;                   //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(NSString *)queryString;
-(void)orderBy:(id)arg1 ascending:(BOOL)arg2 ;
-(unsigned long long)limit;
-(id)initWithTable:(id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)initWithTable:(id)arg1 where:(id)arg2 ;
@end

