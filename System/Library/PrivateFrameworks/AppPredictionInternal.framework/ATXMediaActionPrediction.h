/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXMediaActionPrediction : NSObject
+(id)getAllUpcomingMedia;
+(id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(BOOL)arg2 ;
+(id)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 ;
+(id)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2 ;
+(id)findTopRankedINPlayMediaIntentFromArray:(id)arg1 ;
+(id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const ATXPredictionItem*)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6 ;
@end

