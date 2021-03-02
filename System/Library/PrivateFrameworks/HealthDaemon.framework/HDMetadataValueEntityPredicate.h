/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/HDMetadataPredicate.h>

@class HDSQLitePredicate, NSString;

@interface HDMetadataValueEntityPredicate : HDSQLitePredicate <HDMetadataPredicate> {

	HDSQLitePredicate* _keyPredicate;
	HDSQLitePredicate* _valuePredicate;
	BOOL _matchObjectsWithoutKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
+(id)predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2 ;
+(id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)_predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)_predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
+(id)_predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(NSString *)description;
-(id)_valuePredicateForValue:(id)arg1 operatorType:(unsigned long long)arg2 ;
@end
