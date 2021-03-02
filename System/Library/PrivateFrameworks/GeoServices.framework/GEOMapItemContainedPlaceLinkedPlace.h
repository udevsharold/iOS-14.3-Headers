/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOPDLinkedPlace, GEOMapItemIdentifier, GEOFeatureStyleAttributes;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {

	GEOPDLinkedPlace* _linkedPlace;
	GEOMapItemIdentifier* _identifier;
	GEOFeatureStyleAttributes* _styleAttributes;

}
-(int)_resultProviderID;
-(BOOL)_hasMUID;
-(BOOL)_hasResolvablePartialInformation;
-(int)referenceFrame;
-(BOOL)_hasResultProviderID;
-(id)_identifier;
-(id)_styleAttributes;
-(unsigned long long)_muid;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)isValid;
-(GEOCoarseLocationLatLng)coordinate;
-(id)description;
-(id)name;
-(BOOL)_isInLinkedPlaceRelationship;
-(id)initWithLinkedPlace:(id)arg1 ;
@end
