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

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying> {

	long long _comparisonType;
	id _value;
	BOOL _influenceIndexUsage;

}

@property (nonatomic,readonly) long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,readonly) id value;                              //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 containsString:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 beginsWithString:(id)arg2 ;
+(id)predicateWithCoalescedProperties:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 ifNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
+(id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 influenceIndexUsage:(BOOL)arg4 ;
+(id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 likeValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 likeValue:(id)arg2 escapeCharacter:(id)arg3 ;
+(id)predicateWithProperty:(id)arg1 endsWithString:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 likePattern:(id)arg2 ;
-(id)_comparisonTypeString;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)value;
-(long long)comparisonType;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3 influenceIndexUsage:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end
