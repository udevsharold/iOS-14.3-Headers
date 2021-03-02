/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDate;

@interface MapsSuggestionsRelevanceScorer : NSObject {

	NSMutableArray* _scorers;
	NSDate* _scorersUpdatedAt;

}
-(id)init;
-(id)confidenceForContacts:(id)arg1 addresses:(id)arg2 ;
-(id)confidenceForMapItems:(id)arg1 ;
-(void)addScorer:(id)arg1 ;
-(void)preLoadAllScorers;
@end
