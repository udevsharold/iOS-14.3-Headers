/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying> {

	BOOL _contains;
	NSArray* _values;

}

@property (nonatomic,readonly) BOOL contains;                      //@synthesize contains=_contains - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
+(id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)_containsPredicateWithProperty:(id)arg1 values:(id)arg2 contains:(BOOL)arg3 ;
+(id)_arrayFromValues:(id)arg1 ;
-(NSArray *)values;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)contains;
-(id)initWithProperty:(id)arg1 values:(id)arg2 contains:(BOOL)arg3 ;
@end

