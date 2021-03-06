/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate;

@interface _DRTopicEnumerationQuery : _DKQuery <_DKExecutableQuery> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSPredicate* _predicate;
	unsigned long long _limit;
	/*^block*/id _topicEnumerator;

}

@property (retain) NSPredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (copy) id topicEnumerator;                      //@synthesize topicEnumerator=_topicEnumerator - In the implementation block
+(id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
+(id)enumerationSumExpression;
+(id)enumerationCountExpresion;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(unsigned long long)limit;
-(void)setTopicEnumerator:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)topicEnumerator;
-(id)initWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
@end

