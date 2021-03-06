/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface PPConnectionsParameters : NSObject {

	NSDictionary* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(double)calendarEventLocationExpirySeconds;
-(id)init;
-(long long)appSwitcherPredictionExpiry;
-(long long)expirySeconds;
-(double)userActivityCandidateScore;
-(double)pasteboardItemExpirySeconds;
-(BOOL)shouldUseAllowedApps;
-(long long)locationAppPredictionInstallHalflife;
-(double)doubleValueForKey:(id)arg1 default:(long long)arg2 ;
-(double)foundInAppsSourceLookBackSeconds;
-(double)namedEntitySourceExpirySeconds;
-(id)locationPredictionBlockedApps;
-(double)locationAppLastUseTimeoutSeconds;
-(long long)locationAppPredictionOverallLaunchFactor;
-(id)assetValueForKey:(id)arg1 ;
-(long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2 ;
-(id)donationBlockedWebsites;
-(BOOL)shouldUseAllowedWebsite;
-(double)userActivityExpirySeconds;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(long long)locationAppPredictionInstallMaxScore;
-(id)donationAllowedWebsites;
-(double)namedEntitySourceLookBackSeconds;
-(double)foundInAppsSourceExpirySeconds;
-(id)donationBlockedApps;
-(unsigned long long)userActivityBatchSize;
-(id)donationAllowedApps;
-(unsigned long long)quickTypePredictionLimit;
-(double)linguisticTriggerExpirySeconds;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(double)calendarEventLocationLookaheadTimeSeconds;
@end

