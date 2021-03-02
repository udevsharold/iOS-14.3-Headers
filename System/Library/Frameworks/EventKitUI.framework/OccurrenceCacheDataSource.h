/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OccurrenceCacheDataSourceProtocol.h>

@class EKEventStore, NSSet, NSArray, NSString;

@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol> {

	EKEventStore* _eventStore;
	NSSet* _calendars;
	NSArray* _cachedDays;
	int _cachedDaysSeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchWithTerm:(id)arg1 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(BOOL)cachedOccurrencesAreLoaded;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(void)invalidateCachedOccurrences;
-(long long)cachedDayCount;
-(id)_cachedDays;
-(id)dateAtDayIndex:(long long)arg1 ;
-(void)stopSearching;
-(void)invalidate;
-(void)fetchDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
@end
