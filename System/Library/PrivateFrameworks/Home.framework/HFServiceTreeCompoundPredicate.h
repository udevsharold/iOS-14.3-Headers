/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFServiceTreeMatching.h>

@protocol HFServiceTreeMatching;
@class NSArray, NSString;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching> {

	id<HFServiceTreeMatching> _rootServicePredicate;
	NSArray* _childServicePredicates;

}

@property (nonatomic,readonly) id<HFServiceTreeMatching> rootServicePredicate;              //@synthesize rootServicePredicate=_rootServicePredicate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childServicePredicates;                       //@synthesize childServicePredicates=_childServicePredicates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2 ;
-(id)matchingServicesForRootService:(id)arg1 ;
-(id<HFServiceTreeMatching>)rootServicePredicate;
-(NSArray *)childServicePredicates;
@end

