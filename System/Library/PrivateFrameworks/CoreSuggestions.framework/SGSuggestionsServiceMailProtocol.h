/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol,_SGSuggestionsServiceContactsObserverProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)prepareForRealtimeExtraction:(id*)arg1;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

