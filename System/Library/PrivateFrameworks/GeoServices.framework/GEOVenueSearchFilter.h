/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>

@protocol GEOVenueIdentifier;
@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter> {

	id<GEOVenueIdentifier> _identifier;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(id<GEOVenueIdentifier>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
@end
