/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REFeatureProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REFeature : NSObject <REFeatureProperties, NSCopying>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long featureType; 
+(id)featureWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
+(id)priorityFeature;
+(id)noContentFeature;
+(id)dateFeature;
+(id)dateOccursTodayFeature;
+(id)appUsageFeature;
+(id)sentimentAnalysisFeature;
+(id)negativeSentimentAnalysisFeature;
+(id)sentimentAnalysisCertaintyFeature;
+(id)portraitFeature;
+(id)groupFeature;
+(id)activeEnergyCompletionFeature;
+(id)exerciseTimeCompletionFeature;
+(id)standHourCompletionFeature;
+(id)locationFeature;
+(id)activeWorkoutFeature;
+(id)dailyAverageWorkoutCountFeature;
+(id)performedWorkoutCountFeature;
+(id)coreBehaviorTimePredictionFeature;
+(id)coreBehaviorTimeCoarsePredictionFeature;
+(id)coreBehaviorDayPredictionFeature;
+(id)coreBehaviorDayCoarsePredictionFeature;
+(id)coreBehaviorLocationPredictionFeature;
+(id)coreBehaviorLocationCoarsePredictionFeature;
+(id)coreBehaviorShortcutTypeFeature;
+(id)coreBehaviorEventIdentifierHashFeature;
+(id)coreBehaviorAppIdentifierHashFeature;
+(id)workoutStateFeature;
+(id)forcedFeature;
+(id)relevanceThresholdFeature;
+(id)siriDomainFeature;
+(id)geofenceFeature;
+(id)motionFeature;
+(id)recentSiriActionFeature;
+(id)siriActionPerformedCountFeature;
+(id)dataSourceFeature;
+(id)dailyRoutineFeature;
+(id)isInDailyRoutineFeature;
+(id)crossedFeatureWithFeatures:(id)arg1 ;
+(id)transformedFeatureWithTransformer:(id)arg1 features:(id)arg2 ;
+(id)isWeekendFeature;
+(id)dayOfWeekFeature;
+(id)currentTimeFeature;
+(id)sectionFeature;
+(id)interactionFeature;
+(id)conditionalFeature;
+(id)sessionFeature;
+(id)locationOfInterestFeature;
+(id)knownLocationOfInterestFeature;
+(id)travelingFeature;
+(id)isStationaryFeature;
+(id)deviceMotionFeature;
+(id)itemIdentifierFeature;
+(id)isSiriActionFeature;
+(id)isDeveloperDonationFeature;
+(id)siriActionHasRelevanceProvidersFeature;
+(id)siriActionDailyAveragePerformedCountFeature;
+(id)nowPlayingStateFeature;
+(id)currentlyPlayingMediaDonationFeature;
+(id)currentlyPlayingFromAppFeature;
+(id)siriActionRoleFeature;
+(id)activitySummaryFeature;
+(id)bulletinFeature;
+(id)companionAppUsageFeature;
+(id)isConnectedToCarFeature;
+(id)isConnectedToBluetoothSpeakerFeature;
+(id)bluetoothDeviceFeature;
+(id)systemFeatureNames;
+(id)featuresFromSource:(id)arg1 ;
+(id)featuresFromSource:(id)arg1 withNames:(id)arg2 ;
+(id)featuresFromSourceAtPath:(id)arg1 ;
+(id)featuresFromSourceAtPath:(id)arg1 withNames:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)featureType;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(id)featureByUsingTransformer:(id)arg1 ;
@end

