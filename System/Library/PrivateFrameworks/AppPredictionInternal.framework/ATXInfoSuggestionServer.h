/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ATXInfoSuggestionXPCInterface.h>
#import <libobjc.A.dylib/ATXInformationHeuristicsDelegate.h>

@class NSXPCListener, ATXInformationEngine, ATXInfoSuggestionCriterionRegistry, ATXInformationHeuristics, NSString;

@interface ATXInfoSuggestionServer : NSObject <NSXPCListenerDelegate, ATXInfoSuggestionXPCInterface, ATXInformationHeuristicsDelegate> {

	NSXPCListener* _xpcListener;
	ATXInformationEngine* _engine;
	ATXInfoSuggestionCriterionRegistry* _criterionRegistry;
	ATXInformationHeuristics* _informationHeuristics;

}

@property (nonatomic,readonly) ATXInformationEngine * infoEngine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(ATXInformationEngine *)infoEngine;
-(id)init;
-(void)informationHeuristics:(id)arg1 didUpdateSuggestions:(id)arg2 forHeuristic:(id)arg3 ;
-(void)retrieveAvailableCriterionIdentifiersForSourceIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithInfoEngine:(id)arg1 infoHeuristics:(id)arg2 criterionRegistry:(id)arg3 xpcListener:(id)arg4 ;
-(void)dealloc;
-(void)stackDidRotateProactivelyForInfoSuggestion:(id)arg1 isStalenessRotation:(BOOL)arg2 ;
-(void)clearSuggestionsForInfoSourceIdentifier:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)timelineDidReloadForWidget:(id)arg1 parentApp:(id)arg2 withEntries:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)insertSuggesions:(id)arg1 forInfoSourceIdentifier:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)_processIncomingSuggestion:(id)arg1 sourceIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)refreshInfoSuggestionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_attemptToFindCompatibleWidgetKindForSuggestion:(id)arg1 ;
-(void)_addSuggestions:(id)arg1 forSourceIdentifier:(id)arg2 needReset:(BOOL)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)getSuggestionsForInfoSourceIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)overwriteSuggestionsWithProactiveSuggestions:(id)arg1 forClientModelIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_processIncomingSuggestions:(id)arg1 sourceIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)resetSuggestionsTo:(id)arg1 forInfoSourceIdentifier:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)userDidDismissSuggestion:(id)arg1 isDismissalLongTerm:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end
