/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXScoredPrediction, ATXResponse, ATXProactiveSuggestion;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding> {

	ATXScoredPrediction* _scoredBundleId;
	ATXResponse* _response;
	ATXProactiveSuggestion* _proactiveSuggestion;

}

@property (nonatomic,readonly) ATXScoredPrediction * scoredBundleId;                      //@synthesize scoredBundleId=_scoredBundleId - In the implementation block
@property (nonatomic,readonly) ATXResponse * response;                                    //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) ATXProactiveSuggestion * proactiveSuggestion;              //@synthesize proactiveSuggestion=_proactiveSuggestion - In the implementation block
+(BOOL)supportsSecureCoding;
-(ATXResponse *)response;
-(id)initWithScoredBundleId:(id)arg1 response:(id)arg2 proactiveSuggestion:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXScoredPrediction *)scoredBundleId;
-(ATXProactiveSuggestion *)proactiveSuggestion;
-(void)encodeWithCoder:(id)arg1 ;
@end

