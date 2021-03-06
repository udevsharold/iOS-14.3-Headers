/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXInfoSuggestion, NSString;

@interface ATXTimelineRelevanceAbuseControlOutcome : NSObject {

	ATXInfoSuggestion* _suggestion;
	NSString* _suggestionId;
	double _timestamp;
	long long _abuseControlOutcome;

}

@property (nonatomic,readonly) ATXInfoSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) NSString * suggestionId;                     //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,readonly) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long abuseControlOutcome;               //@synthesize abuseControlOutcome=_abuseControlOutcome - In the implementation block
+(id)outcomeWithSuggestion:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3 ;
+(id)outcomeWithSuggestionId:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3 ;
+(id)descriptionForOutcome:(long long)arg1 ;
-(double)timestamp;
-(id)init;
-(ATXInfoSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 suggestionId:(id)arg2 timestamp:(double)arg3 abuseControlOutcome:(long long)arg4 ;
-(id)initWithSuggestion:(id)arg1 timestamp:(double)arg2 abuseControlOutcome:(long long)arg3 ;
-(NSString *)suggestionId;
-(long long)abuseControlOutcome;
@end

