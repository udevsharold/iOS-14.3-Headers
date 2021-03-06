/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString, EFSQLDisqualifiedColumnExpression;

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLValueExpressable> {

	NSString* _name;
	NSString* _tableName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                                     //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) EFSQLDisqualifiedColumnExpression * disqualified; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
+(id)column:(id)arg1 ;
+(id)table:(id)arg1 column:(id)arg2 ;
+(id)allColumns;
-(id)glob:(id)arg1 ;
-(id)in:(id)arg1 ;
-(id)beginsWith:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)greaterThanEqualTo:(id)arg1 ;
-(id)cachedSelf;
-(NSString *)tableName;
-(id)notEqualTo:(id)arg1 ;
-(id)notGlob:(id)arg1 ;
-(EFSQLDisqualifiedColumnExpression *)disqualified;
-(id)lessThan:(id)arg1 ;
-(id)is:(id)arg1 ;
-(id)notLike:(id)arg1 ;
-(id)between:(id)arg1 ;
-(id)isNull;
-(id)isNotNull;
-(id)doesNotContain:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)notLike:(id)arg1 patternType:(unsigned long long)arg2 ;
-(id)plus:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)ef_SQLIsolatedExpression;
-(id)concatenate:(id)arg1 ;
-(id)endsWith:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)equalTo:(id)arg1 ;
-(unsigned long long)hash;
-(id)isNot:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(id)contains:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)like:(id)arg1 patternType:(unsigned long long)arg2 ;
-(id)notBetween:(id)arg1 ;
-(id)greaterThan:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)like:(id)arg1 ;
-(id)notIn:(id)arg1 ;
-(id)expressionForPredicateOperatorType:(unsigned long long)arg1 constValue:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(id)lessThanEqualTo:(id)arg1 ;
-(id)minus:(id)arg1 ;
-(id)initWithName:(id)arg1 table:(id)arg2 ;
-(id)doesNotMatchMask:(id)arg1 ;
-(id)matchesMask:(id)arg1 ;
@end

