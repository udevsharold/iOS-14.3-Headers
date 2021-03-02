/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSMutableOrderedSet, NSMapTable, NFUnfairLock, NSDate;

@interface FCURLRequestScheduler : NSObject {

	NSURLSession* _URLSession;
	NSMutableOrderedSet* _requests;
	NSMapTable* _inFlightURLTasks;
	unsigned long long _maxInFlightURLTasks;
	unsigned long long _maxInFlightLowPriorityURLTasks;
	NFUnfairLock* _lock;
	NSDate* _dateOfLastProgress;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                                      //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * requests;                                 //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) NSMapTable * inFlightURLTasks;                                  //@synthesize inFlightURLTasks=_inFlightURLTasks - In the implementation block
@property (nonatomic,readonly) unsigned long long maxInFlightURLTasks;                         //@synthesize maxInFlightURLTasks=_maxInFlightURLTasks - In the implementation block
@property (nonatomic,readonly) unsigned long long maxInFlightLowPriorityURLTasks;              //@synthesize maxInFlightLowPriorityURLTasks=_maxInFlightLowPriorityURLTasks - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                                            //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastProgress;                                        //@synthesize dateOfLastProgress=_dateOfLastProgress - In the implementation block
-(NSMutableOrderedSet *)requests;
-(NSURLSession *)URLSession;
-(void)_cancelRequest:(id)arg1 ;
-(id)initWithURLSession:(id)arg1 ;
-(void)setDateOfLastProgress:(NSDate *)arg1 ;
-(NSMapTable *)inFlightURLTasks;
-(void)_suspendURLTaskForRequest:(id)arg1 ;
-(id)scheduleURLRequest:(id)arg1 destination:(long long)arg2 priority:(long long)arg3 loggingKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_shouldRetryRequest:(id)arg1 withError:(id)arg2 ;
-(unsigned long long)maxInFlightURLTasks;
-(NSDate *)dateOfLastProgress;
-(unsigned long long)maxInFlightLowPriorityURLTasks;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_isLowPriority:(long long)arg1 ;
-(void)_applyPriority:(long long)arg1 toRequest:(id)arg2 ;
-(void)_resumeURLTaskForRequest:(id)arg1 ;
-(NFUnfairLock *)lock;
-(void)_serviceRequests;
@end
