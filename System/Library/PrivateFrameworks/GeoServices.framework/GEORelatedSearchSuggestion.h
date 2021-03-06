/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject {

	GEOPDRelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * relatedSearchSuggestion;              //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * searchBarDisplayToken; 
-(NSString *)displayString;
-(GEOPDRelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(id)initWithPDRelatedSearchSuggestion:(id)arg1 ;
-(id)_suggestionEntryMetadata;
-(NSString *)searchBarDisplayToken;
@end

