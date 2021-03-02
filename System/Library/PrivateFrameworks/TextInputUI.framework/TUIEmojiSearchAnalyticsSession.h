/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TUIAnalyticsSession.h>

@class NSLocale, NSString;

@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {

	NSLocale* _locale;
	NSString* _trackedSearchQuery;
	NSString* _initialInputModeIdentifier;
	unsigned long long _numberOfInitialCharacters;
	unsigned long long _numberOfEmojiInserted;
	unsigned long long _numberOfCharactersInserted;
	unsigned long long _numberOfCharactersDeleted;
	unsigned long long _numberOfClearActions;

}
+(id)emojiSearchEventSpec;
+(id)emojiSearchFieldSpecTuples;
-(id)initWithLocale:(id)arg1 ;
-(void)emojiInserted:(id)arg1 ;
-(void)beginSessionWithInitialSearchQuery:(id)arg1 ;
-(void)searchQueryWasChangedTo:(id)arg1 ;
-(void)clearButtonPressed;
-(void)endSession;
@end
