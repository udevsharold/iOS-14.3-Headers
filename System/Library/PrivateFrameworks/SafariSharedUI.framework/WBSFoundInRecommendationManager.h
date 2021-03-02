/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceURLsProtocol, OS_dispatch_queue;
@class NSObject;

@interface WBSFoundInRecommendationManager : NSObject {

	NSObject*<SGSuggestionsServiceURLsProtocol> _suggestionsService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	int _changeNotificationToken;

}
+(id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(/*^block*/id)arg2 ;
+(BOOL)isBundleIdentifierFromMessages:(id)arg1 ;
+(unsigned long long)foundInSourceFromBundleIdentifier:(id)arg1 ;
+(BOOL)isBundleIdentifierFromCalendar:(id)arg1 ;
-(void)beginListeningForURLSuggestionChanges;
-(void)recentRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)_recentURLRecommendationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopListeningForURLSuggestionChanges;
@end
