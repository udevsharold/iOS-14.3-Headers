/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSObject;

@interface PPEventStorage : NSObject {

	_PASLock* _lock;
	atomic_flag _pendingReset;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)defaultStorage;
-(void)clearCaches;
-(void)setCalendarVisibilityChangeHandler:(/*^block*/id)arg1 ;
-(BOOL)_isSuggestedEvent:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)_isAllDayOrMultiDayEvent:(id)arg1 guardedData:(id)arg2 ;
-(id)init;
-(BOOL)shouldIngestEvent:(id)arg1 ;
-(id)_predicateForRange:(NSRange)arg1 ;
-(void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)resetAfterQueryWithCompletion:(/*^block*/id)arg1 ;
-(id)_init;
-(id)suggestedEventsInRange:(NSRange)arg1 ;
-(void)_loadCalendars;
-(id)resolveEventFromEKChange:(id)arg1 ;
-(id)eventWithExternalID:(id)arg1 ;
-(BOOL)eventKitChangeIsEvent:(id)arg1 ;
-(id)eventWithIdentifier:(id)arg1 ;
-(id)eventsInRange:(NSRange)arg1 ;
@end

