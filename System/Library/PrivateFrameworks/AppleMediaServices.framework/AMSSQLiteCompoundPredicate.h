/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSSQLitePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate <NSCopying> {

	NSString* _combinationOperation;
	NSArray* _predicates;

}

@property (nonatomic,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
+(id)predicateMatchingAnyPredicates:(id)arg1 ;
+(id)predicateMatchingAllPredicates:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3 ;
-(NSArray *)predicates;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
@end
