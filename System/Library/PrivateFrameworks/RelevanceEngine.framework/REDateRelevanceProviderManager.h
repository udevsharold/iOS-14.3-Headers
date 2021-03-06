/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REDateRelevanceProviderManagerProperties.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;
	NSDateInterval* _todayInterval;

}

@property (nonatomic,readonly) NSDate * lastDateUpdate; 
@property (nonatomic,readonly) NSDate * todayStart; 
@property (nonatomic,readonly) NSDate * todayEnd; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
+(id)_dependencyClasses;
-(void)pause;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)_addedProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2 ;
-(void)_scheduleUpdatesForDateProvider:(id)arg1 ;
-(void)_scheduleUpdateForDate:(id)arg1 ;
-(NSDate *)lastDateUpdate;
-(NSDate *)todayStart;
-(NSDate *)todayEnd;
@end

