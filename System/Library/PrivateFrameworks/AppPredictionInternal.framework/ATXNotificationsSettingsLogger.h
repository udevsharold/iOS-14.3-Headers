/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXNotificationsSettingsLogger : NSObject
+(id)getAppGenreFromBundleId:(id)arg1 ;
-(void)logNotificationSettingsWithActivity:(id)arg1 ;
-(id)convertToPBFormat:(id)arg1 setting:(id)arg2 ;
-(id)createPBSettingForBundleID:(id)arg1 settings:(id)arg2 ;
-(id)retrieveSettingsForBundleIDs:(id)arg1 ;
-(id)getAggregatedData:(id)arg1 totalApps:(int)arg2 ;
-(id)getAppUsageDataForBundleID:(id)arg1 ;
-(double)getSamplingRate;
-(id)retrieveLogWithActivity:(id)arg1 ;
-(id)wrapLog:(id)arg1 ;
@end

