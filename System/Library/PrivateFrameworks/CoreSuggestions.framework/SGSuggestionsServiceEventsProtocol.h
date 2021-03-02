/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(/*^block*/id)arg3;
-(void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 containsSchemaOrg:(BOOL)arg3 withCompletion:(/*^block*/id)arg4;
-(void)keysForSchemas:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eventFromUniqueId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 error:(id*)arg2;
-(id)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 error:(id*)arg4;

@end
