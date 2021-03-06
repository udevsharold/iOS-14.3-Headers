/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableSet, NSMutableDictionary, NSObject, MapsSuggestionsSuppressor, NSString;

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate> {

	NSMutableSet* _sources;
	NSMutableDictionary* _nextUpdateTimes;
	Queue _queue;
	NSObject*<OS_dispatch_source> _updateTimer;
	MapsSuggestionsSuppressor* _suppressor;
	BOOL _running;

}

@property (assign) BOOL running;                                                             //@synthesize running=_running - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(BOOL)attachSource:(id)arg1 ;
-(BOOL)detachSource:(id)arg1 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)dealloc;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(BOOL)removeChildSource:(id)arg1 ;
-(void)test_resetSuppressions;
-(BOOL)running;
-(id)children;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)start;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(double)test_suppressionDurationForBehavior:(long long)arg1 type:(long long)arg2 ;
-(void)test_sync;
-(BOOL)addChildSource:(id)arg1 ;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(void)stop;
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
@end

