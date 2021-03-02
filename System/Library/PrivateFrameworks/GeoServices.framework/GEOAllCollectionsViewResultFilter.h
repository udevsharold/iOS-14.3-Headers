/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAllCollectionsViewResultFilter, NSArray, GEOAllCollectionsViewResultFilterTypeAddress, GEOAllCollectionsViewResultFilterTypeKeyword;

@interface GEOAllCollectionsViewResultFilter : NSObject {

	GEOPDAllCollectionsViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeAddress * addressFilter; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeKeyword * keywordFilter; 
-(GEOAllCollectionsViewResultFilterTypeAddress *)addressFilter;
-(long long)filterType;
-(GEOAllCollectionsViewResultFilterTypeKeyword *)keywordFilter;
-(id)initWithAllCollectionsViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
@end
