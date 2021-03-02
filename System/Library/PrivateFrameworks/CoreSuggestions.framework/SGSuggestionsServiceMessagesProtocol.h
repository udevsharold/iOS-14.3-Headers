/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceMessagesProtocol
@property (__weak) id<SGMessagesSuggestionsServiceDelegate> delegate; 
@required
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setDelegate:(id)arg1;
-(id<SGMessagesSuggestionsServiceDelegate>)delegate;

@end
