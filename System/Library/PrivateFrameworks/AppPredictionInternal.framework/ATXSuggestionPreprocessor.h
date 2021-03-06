/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXActionToWidgetConverter, ATXWidgetPrewarmer, ATXEngagementRecordManager;

@interface ATXSuggestionPreprocessor : NSObject {

	ATXActionToWidgetConverter* _converter;
	ATXWidgetPrewarmer* _prewarmer;
	ATXEngagementRecordManager* _engagementRecordManager;

}
-(id)init;
-(id)preprocessedSuggestionsForMediaControlsConsumer:(id)arg1 ;
-(id)initWithEngagementRecordManager:(id)arg1 ;
-(id)suggestionsByPreprocessingRankedSuggestions:(id)arg1 forConsumerSubType:(unsigned char)arg2 ;
@end

