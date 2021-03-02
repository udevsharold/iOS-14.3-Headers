/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject {

	PETScalarEventTracker* _rttSelectionTracker;
	PETScalarEventTracker* _rttFromTracker;

}
+(id)sharedInstance;
+(id)rtOutcomesMapping;
+(id)rtFromMapping;
+(id)stringForRTOutcome:(unsigned long long)arg1 ;
+(id)stringForRTFrom:(unsigned long long)arg1 ;
-(id)init;
-(void)logRealTimeTuningCountFrom:(unsigned long long)arg1 ;
-(void)logRealTimeTuningOutcome:(unsigned long long)arg1 ;
@end
