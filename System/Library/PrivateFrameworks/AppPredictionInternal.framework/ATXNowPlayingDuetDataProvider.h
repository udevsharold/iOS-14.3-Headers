/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXDuetDataProvider.h>

@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider
+(long long)supportedCoreDuetStream;
+(Class)supportedDuetEventClass;
-(id)playbackEventsAfterSecondsOfInactivity:(double)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)convertNowPlayingEventsToAppLaunchEvents:(id)arg1 ;
-(id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(double)arg1 ;
@end

