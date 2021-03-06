/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKGeodesicPolyline, FUFlightLeg;

@interface FUFLightTrack : NSObject {

	MKGeodesicPolyline* _polyline;
	FUFlightLeg* _leg;

}

@property (retain) MKGeodesicPolyline * polyline;              //@synthesize polyline=_polyline - In the implementation block
@property (retain) FUFlightLeg * leg;                          //@synthesize leg=_leg - In the implementation block
-(FUFlightLeg *)leg;
-(MKGeodesicPolyline *)polyline;
-(void)setLeg:(FUFlightLeg *)arg1 ;
-(void)setPolyline:(MKGeodesicPolyline *)arg1 ;
@end

