/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDPublisherViewResultFilterKeyword, GEORelatedSearchSuggestion;

@interface GEOPublisherViewResultFilterKeyword : NSObject {

	GEOPDPublisherViewResultFilterKeyword* _filterKeywordIdentifier;

}

@property (nonatomic,readonly) GEORelatedSearchSuggestion * searchSuggestion; 
@property (nonatomic,readonly) GEOPDPublisherViewResultFilterKeyword * keywordIdentifier; 
-(GEORelatedSearchSuggestion *)searchSuggestion;
-(id)initWithFilterKeywordIdentifier:(id)arg1 ;
-(GEOPDPublisherViewResultFilterKeyword *)keywordIdentifier;
@end

