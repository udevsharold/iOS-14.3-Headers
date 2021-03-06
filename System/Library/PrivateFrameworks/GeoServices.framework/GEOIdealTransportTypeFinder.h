/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOIdealTransportTypeFinder : NSObject
+(long long)idealTransportType;
+(id)_transportTypePreferenceAsString:(long long)arg1 ;
+(long long)idealTransportTypeForOrigin:(GEOCoarseLocationLatLng)arg1 destination:(GEOCoarseLocationLatLng)arg2 mapType:(int)arg3 ;
+(long long)idealTransportTypeForMapType:(int)arg1 ;
@end

