/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface ATXActionStatistics : NSObject {

	NSMutableDictionary* _statisticsForParameters;
	double _totalLaunches;
	double _totalTimeOfDayCount;
	double _totalThirtyMinuteWindowCount;
	double _totalHourWindowCount;
	double _totalEightHourWindowCount;
	double _totalCoarseTimeOfDayCount;
	double _totalDayOfWeekCount;
	double _totalPartOfWeekCount;
	double _totalLocationCount;
	double _totalMotionTypeCount;
	double _totalPrevLocationCount;
	double _totalTimeAndLocationCount;
	double _totalTimeAndDayCount;
	double _totalDayAndLocationCount;
	double _totalTimeAndDayAndLocationCount;
	double _totalPrevLocationAndMotionTypeCount;
	double _totalPrevLocationAndLocationCount;
	double _totalTimeAndPrevLocationCount;
	double _totalDayAndPrevLocationCount;
	double _totalPartOfWeekAndLocationCount;
	double _totalPartOfWeekAndTimeCount;
	double _totalTimeOfDayOccurrences;
	double _totalDayOfWeekOccurrences;
	double _totalLocationOccurrences;
	double _totalMotionTypeOccurrences;
	double _totalPreviousLocationOccurrences;
	double _totalPartOfWeekOccurrences;
	double _totalTimeAndDayOccurrences;
	double _totalTimeAndLocationOccurrences;
	double _totalDayAndLocationOccurrences;
	double _totalTimeAndDayAndLocationOccurrences;
	double _totalPrevLocationAndLocationOccurrences;
	double _totalPrevLocationAndMotionTypeOccurrences;
	double _totalTimeAndPrevLocationOccurrences;
	double _totalDayAndPrevLocationOccurrences;
	double _totalPartOfWeekAndLocationOccurrences;
	double _totalPartOfWeekAndTimeOccurrences;
	double _totalConfirms;
	double _totalRejects;
	double _totalExplicitRejectsNoDecay;
	double _totalConfirmsInSpotlight;
	double _totalRejectsInSpotlight;
	double _totalConfirmsInSpotlightWithinMeanWindow;
	double _totalRejectsInSpotlightWithinMeanWindow;
	NSMutableSet* _totalUniqueDaysConfirmedOrRejectedInSpotlightWithinMeanWindow;
	double _totalConfirmsTodayInLockscreen;
	double _totalRejectsTodayInLockscreen;
	double _totalConfirmsInLockscreen;
	double _totalRejectsInLockscreen;
	double _totalCoarseTimePOWLocationCount;
	double _totalCoarseTimePOWLocationOccurrences;
	double _totalConfirmsCoarseTimePOWLocationCount;
	double _totalConfirmsCoarseTimePOWLocationOccurrences;
	double _totalRejectsCoarseTimePOWLocationCount;
	double _totalRejectsCoarseTimePOWLocationOccurrences;
	double _totalSpecificTimeDOWLocationCount;
	double _totalSpecificTimeDOWLocationOccurrences;
	double _totalConfirmsSpecificTimeDOWLocationCount;
	double _totalConfirmsSpecificTimeDOWLocationOccurrences;
	double _totalRejectsSpecificTimeDOWLocationCount;
	double _totalRejectsSpecificTimeDOWLocationOccurrences;
	double _launchesDayOfWeekInContext;
	double _launchesCoarseGeoHashInContext;
	double _launchesSpecificGeoHashInContext;
	double _launchesTimeOfDayInContext;
	double _confirmsTimeOfDayInContext;
	double _rejectsTimeOfDayInContext;
	double _confirmsDayOfWeekInContext;
	double _rejectsDayOfWeekInContext;
	double _confirmsCoarseGeoHashInContext;
	double _rejectsCoarseGeoHashInContext;
	double _confirmsSpecificGeoHashInContext;
	double _rejectsSpecificGeoHashInContext;
	double _homeScreenActionConfirmsOnDayOfWeekInContext;
	double _homeScreenActionRejectsOnDayOfWeekInContext;
	double _homeScreenActionConfirmsAtTimeOfDayInContext;
	double _homeScreenActionRejectsAtTimeOfDayInContext;
	double _homeScreenActionConfirmsAtCoarseGeohashInContext;
	double _homeScreenActionRejectsAtCoarseGeohashInContext;
	double _homeScreenActionConfirmsAtSpecificGeohashInContext;
	double _homeScreenActionRejectsAtSpecificGeohashInContext;
	double _homeScreenActionConfirmsAtCoarseTimePOWLocationInContext;
	double _homeScreenActionRejectsAtCoarseTimePOWLocationInContext;
	double _homeScreenActionConfirmsAtSpecificTimeDOWLocationInContext;
	double _homeScreenActionRejectsAtSpecificTimeDOWLocationInContext;

}
-(void)updateActionStatisticsForSlotResolutionStatistics:(id)arg1 candidateActionPredictions:(id)arg2 ;
-(id)init;
@end
