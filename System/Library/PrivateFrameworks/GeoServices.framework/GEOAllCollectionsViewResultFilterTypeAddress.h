/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAllCollectionsViewResultFilterTypeAddress, GEOPDEntity, GEOMapItemIdentifier, NSString;

@interface GEOAllCollectionsViewResultFilterTypeAddress : NSObject {

	GEOPDAllCollectionsViewResultFilterTypeAddress* _filterAddressIdentifier;
	GEOPDEntity* _placeEntity;

}

@property (nonatomic,readonly) GEOMapItemIdentifier * filterAddressIdentifier; 
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) GEOPDAllCollectionsViewResultFilterTypeAddress * addressIdentifier; 
-(NSString *)displayString;
-(GEOPDAllCollectionsViewResultFilterTypeAddress *)addressIdentifier;
-(id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2 ;
-(GEOMapItemIdentifier *)filterAddressIdentifier;
@end
