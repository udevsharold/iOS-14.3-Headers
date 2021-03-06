/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSDate, NSObject, NSUserDefaults, PMMPredictionNotification;

@interface ATXMagicalMomentsUpdateMonitor : NSObject {

	NSDictionary* _predictionMap;
	NSDate* _expiration;
	unsigned long long _mmPredictionCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _defaults;
	PMMPredictionNotification* _mmUpdateListener;
	unsigned long long _limit;

}

@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
-(id)init;
-(unsigned long long)limit;
-(void)setupUpdateListener;
-(void)updatePredictionsWith:(id)arg1 consumer:(unsigned long long)arg2 ;
-(void)dropCacheIfExpired;
-(unsigned long long)mmPredictionCount;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)predictionsForBundleId:(id)arg1 ;
-(void)_setPredictions:(id)arg1 expiration:(id)arg2 totalPredictionCount:(unsigned long long)arg3 ;
@end

