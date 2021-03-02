/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@class NSString;

@interface MapsSuggestionsFakeLocationUpdater : MapsSuggestionsBaseLocationUpdater <MapsSuggestionsLocationUpdater> {

	BOOL _isRunning;
	unsigned long long _calledStartImplementation;
	unsigned long long _calledStopImplementation;

}

@property (nonatomic,readonly) unsigned long long calledStartImplementation;              //@synthesize calledStartImplementation=_calledStartImplementation - In the implementation block
@property (nonatomic,readonly) unsigned long long calledStopImplementation;               //@synthesize calledStopImplementation=_calledStopImplementation - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                                            //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRunning;
-(id)init;
-(void)sendLocation:(id)arg1 ;
-(void)sendVisit:(id)arg1 ;
-(void)onStartImplementation;
-(void)onStopImplementation;
-(unsigned long long)calledStartImplementation;
-(unsigned long long)calledStopImplementation;
@end
