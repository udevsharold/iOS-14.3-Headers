/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class NSXPCConnection, _PSSuggesterConfiguration;

@interface _PSSuggester : NSObject {

	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	_PSSuggesterConfiguration* _configuration;

}

@property (nonatomic,readonly) _PSSuggesterConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)suggesterWithDaemon;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 ;
-(id)init;
-(id)rankedZKWSuggestionsFromContext:(id)arg1 ;
-(id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1 ;
-(id)initWithDaemonUsingConfiguration:(id)arg1 ;
-(id)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3 ;
-(id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(_PSSuggesterConfiguration *)configuration;
-(id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(BOOL)arg2 ;
-(void)provideFeedbackForSuggestions:(id)arg1 ;
-(void)provideFeedbackForMessagesZkwSuggestions:(id)arg1 ;
-(void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)arg1 ;
-(id)suggestInteractionsFromContext:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)shareExtensionSuggestionsFromContext:(id)arg1 ;
-(id)shareSheetInteractionsFromContext:(id)arg1 maximumNumberOfSuggestions:(long long)arg2 ;
-(id)shareSheetInteractionsFromContext:(id)arg1 ;
-(id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1 ;
-(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 ;
-(id)rankedFamilySuggestions;
@end
