/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableSet;

@interface TICounterChangeCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableSet* _referencedCounters;
	BOOL _userModelRateLimitingDisabled;
	double _timeOfLastPersist;

}
-(id)init;
-(void)persistForDate:(id)arg1 ;
-(void)addCounterReferencesForMetric:(id)arg1 withRegistry:(id)arg2 ;
-(void)keyboardDidSuspendForDate:(id)arg1 ;
-(void)addStatisticChanges:(id)arg1 withContext:(id)arg2 ;
-(void)queueCompletionHandler:(/*^block*/id)arg1 ;
-(void)close;
-(void)loadReferencedCounters;
@end

