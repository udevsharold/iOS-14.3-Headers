/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ATXInfoTimelineEntry;

@interface ATXTimelineEntryToInfoSuggestionMapping : NSObject {

	NSString* _suggestionId;
	ATXInfoTimelineEntry* _timelineEntry;
	long long _suggestionMappingReason;

}

@property (nonatomic,readonly) NSString * suggestionId;                           //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,readonly) ATXInfoTimelineEntry * timelineEntry;              //@synthesize timelineEntry=_timelineEntry - In the implementation block
@property (nonatomic,readonly) long long suggestionMappingReason;                 //@synthesize suggestionMappingReason=_suggestionMappingReason - In the implementation block
+(id)entryMappingWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3 ;
-(id)init;
-(NSString *)suggestionId;
-(ATXInfoTimelineEntry *)timelineEntry;
-(id)initWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3 ;
-(long long)suggestionMappingReason;
@end

