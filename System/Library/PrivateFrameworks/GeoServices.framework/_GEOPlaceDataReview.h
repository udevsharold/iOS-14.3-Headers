/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemReview.h>

@class NSString, NSDate, GEOPDPlace, GEOPDReview;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {

	GEOPDPlace* _placeData;
	GEOPDReview* _review;

}

@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_localizedSnippetLocale,nonatomic,readonly) NSString * localizedSnippetLocale; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURLString,nonatomic,readonly) NSString * reviewerImageURLString; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_score;
-(id)_identifier;
-(double)_normalizedScore;
-(id)_date;
-(double)_maxScore;
-(id)initWithPlaceData:(id)arg1 review:(id)arg2 ;
-(id)_reviewerName;
-(id)_localizedSnippet;
-(id)_localizedSnippetLocale;
-(id)_reviewerImageURLString;
@end

