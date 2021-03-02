/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSCoalescingQueue, NSDictionary;

@interface SSMetricsTimingDefaults : NSObject {

	BOOL _runningTests;
	SSCoalescingQueue* _updateQueue;
	NSDictionary* _cachedValues;

}

@property (nonatomic,retain) SSCoalescingQueue * updateQueue;                      //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedValues;                          //@synthesize cachedValues=_cachedValues - In the implementation block
@property (assign,getter=isRunningTests,nonatomic) BOOL runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (readonly) NSDictionary * values; 
@property (readonly) double sessionDurationLoadURL; 
@property (readonly) double samplingPercentageUsersLoadURL; 
@property (readonly) double samplingPercentageCachedResponsesLoadURL; 
@property (readonly) double sessionDurationPageRender; 
@property (readonly) double samplingPercentageUsersPageRender; 
+(id)sharedInstance;
+(id)sharedInstanceWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)values;
-(double)sessionDurationPageRender;
-(double)samplingPercentageUsersLoadURL;
-(void)setCachedValues:(NSDictionary *)arg1 ;
-(id)initWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)cachedValues;
-(void)update;
-(SSCoalescingQueue *)updateQueue;
-(void)setRunningTests:(BOOL)arg1 ;
-(BOOL)isRunningTests;
-(void)setUpdateQueue:(SSCoalescingQueue *)arg1 ;
-(double)samplingPercentageUsersPageRender;
-(double)samplingPercentageCachedResponsesLoadURL;
-(double)sessionDurationLoadURL;
@end
