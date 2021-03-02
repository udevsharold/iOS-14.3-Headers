/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@class NSDate, MapsSuggestionsRoutine, NSArray, NSString;

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	NSDate* _fetchEntriesFromDate;
	Queue _queue;
	MapsSuggestionsRoutine* _routine;
	NSArray* _routineLocations;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(void)preLoad;
-(id)initWithRoutine:(id)arg1 ;
-(char)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
