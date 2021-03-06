/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDResumable, EFScheduler;
#import <EmailDaemon/EmailDaemon-Structs.h>
@class NSMutableArray, NSString, NSDate, EFDebouncer;

@interface EDUpdateThrottler : NSObject {

	os_unfair_lock_s _updatesLock;
	NSMutableArray* _unacknowledgedUpdates;
	BOOL _hasChangesSinceLastUpdate;
	NSString* _name;
	double _delayInterval;
	long long _scalingFactor;
	NSDate* _lastUpdateDate;
	NSDate* _lastAcknowledgementDate;
	long long _updateCounter;
	id<EDResumable> _resumable;
	EFDebouncer* _resumeClientDebouncer;
	id<EFScheduler> _resumeClientScheduler;

}

@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double delayInterval;                             //@synthesize delayInterval=_delayInterval - In the implementation block
@property (nonatomic,readonly) long long scalingFactor;                          //@synthesize scalingFactor=_scalingFactor - In the implementation block
@property (assign,nonatomic) BOOL hasChangesSinceLastUpdate;                     //@synthesize hasChangesSinceLastUpdate=_hasChangesSinceLastUpdate - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                            //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * lastAcknowledgementDate;                   //@synthesize lastAcknowledgementDate=_lastAcknowledgementDate - In the implementation block
@property (assign,nonatomic) long long updateCounter;                            //@synthesize updateCounter=_updateCounter - In the implementation block
@property (nonatomic,retain) id<EDResumable> resumable;                          //@synthesize resumable=_resumable - In the implementation block
@property (nonatomic,retain) EFDebouncer * resumeClientDebouncer;                //@synthesize resumeClientDebouncer=_resumeClientDebouncer - In the implementation block
@property (nonatomic,retain) id<EFScheduler> resumeClientScheduler;              //@synthesize resumeClientScheduler=_resumeClientScheduler - In the implementation block
+(void)_registerInstance:(id)arg1 ;
+(id)instances;
+(void)resetAllInstances;
-(NSDate *)lastUpdateDate;
-(NSDate *)lastAcknowledgementDate;
-(void)_reset;
-(BOOL)hasChangesSinceLastUpdate;
-(id<EDResumable>)resumable;
-(void)dealloc;
-(unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double*)arg1 ;
-(double)delayInterval;
-(long long)scalingFactor;
-(id)initWithName:(id)arg1 delayInterval:(double)arg2 scalingFactor:(long long)arg3 ;
-(id)initWithName:(id)arg1 delayInterval:(double)arg2 resumable:(id)arg3 ;
-(void)setResumable:(id<EDResumable>)arg1 ;
-(id)updateWithBlock:(/*^block*/id)arg1 unacknowledgedUpdatesCount:(unsigned long long*)arg2 ;
-(void)setResumeClientScheduler:(id<EFScheduler>)arg1 ;
-(void)setHasChangesSinceLastUpdate:(BOOL)arg1 ;
-(NSString *)name;
-(void)setUpdateCounter:(long long)arg1 ;
-(void)setResumeClientDebouncer:(EFDebouncer *)arg1 ;
-(long long)updateCounter;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)setLastAcknowledgementDate:(NSDate *)arg1 ;
-(id)initWithDelayInterval:(double)arg1 scalingFactor:(long long)arg2 ;
-(id<EFScheduler>)resumeClientScheduler;
-(EFDebouncer *)resumeClientDebouncer;
@end

