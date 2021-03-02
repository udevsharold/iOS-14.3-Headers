/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class CLSInputPeopleClue, NSMapTable, CLSMeaningClue;

@interface CLSClueCollection : NSObject {

	unsigned long long _versionCount;
	os_unfair_recursive_lock_s _recursiveLock;
	CLSInputPeopleClue* _mePersonClue;
	NSMapTable* _inputCluesByKey;
	NSMapTable* _outputCluesByKey;
	NSMapTable* _meaningCluesByKey;

}

@property (nonatomic,retain) CLSInputPeopleClue * mePersonClue;              //@synthesize mePersonClue=_mePersonClue - In the implementation block
@property (readonly) unsigned long long versionCount;                        //@synthesize versionCount=_versionCount - In the implementation block
@property (readonly) CLSMeaningClue * locationMobilityClue; 
-(void)prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(long long)year;
-(id)localEndDate;
-(id)mePerson;
-(id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2 ;
-(id)universalEndDate;
-(id)outputClues;
-(id)universalStartDate;
-(id)outputCluesForKey:(id)arg1 ;
-(id)init;
-(id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)localStartDate;
-(id)inputCluesForKey:(id)arg1 ;
-(unsigned long long)numberOfTimes;
-(id)meaningClues;
-(id)peopleDescriptionWithoutPeople:(id)arg1 ;
-(void)_mergeInputClue:(id)arg1 ;
-(id)uniqueMeaningClues;
-(void)_mergeMeaningClue:(id)arg1 ;
-(BOOL)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(id)locationPlacemarks;
-(void)_incrementVersionCount;
-(double)timeInterval;
-(CLSInputPeopleClue *)mePersonClue;
-(id)locations;
-(void)enumeratePeopleClues:(/*^block*/id)arg1 ;
-(id)description;
-(id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2 ;
-(void)_mergeOutputClue:(id)arg1 ;
-(id)outputCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)localDates;
-(id)uniqueOutputCluesForKey:(id)arg1 ;
-(id)uniqueMeaningCluesForKey:(id)arg1 ;
-(id)meaningCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)meaningCluesForKey:(id)arg1 ;
-(void)setMePersonClue:(CLSInputPeopleClue *)arg1 ;
-(id)inputClues;
-(BOOL)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(unsigned long long)numberOfDays;
-(id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)locationRegions;
-(id)uniqueInputClues;
-(void)mergeClues:(id)arg1 ;
-(void)enumerateTimeClues:(/*^block*/id)arg1 ;
-(BOOL)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)peopleDescription;
-(id)uniqueOutputClues;
-(unsigned long long)versionCount;
-(id)locationRegionsInPlacemarks;
-(id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(unsigned long long)numberOfLocations;
-(CLSMeaningClue *)locationMobilityClue;
-(void)enumerateLocationClues:(/*^block*/id)arg1 ;
-(id)peopleNames;
-(void)enumerateTimeOfDayClues:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfPersons;
-(id)universalDates;
@end
