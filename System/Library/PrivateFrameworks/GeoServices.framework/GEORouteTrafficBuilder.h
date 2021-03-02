/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {

	NSMutableData* _trafficColors;
	NSMutableData* _trafficOffsets;
	unsigned _trafficDistance;

}
-(id)init;
-(void)buildTrafficForRoute:(id)arg1 ;
-(void)buildTrafficForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(id)trafficOffsets;
-(void)addTrafficFromRoute:(id)arg1 withStepRange:(NSRange)arg2 ;
-(void)copyTrafficToRoute:(id)arg1 ;
-(void)_buildTrafficForRoute:(id)arg1 toDistance:(unsigned)arg2 ;
-(void)_buildTrafficForRoute:(id)arg1 etaRoute:(id)arg2 ;
-(void)_buildTrafficForRouteWithGeoRoute:(id)arg1 toDistance:(unsigned)arg2 ;
-(void)_buildTrafficForOldRoute:(id)arg1 etaRoute:(id)arg2 ;
-(void)addTrafficFromETARoute:(id)arg1 ;
-(void)addTrafficFromRoute:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)_removeDuplicateTraffic;
-(id)trafficColors;
@end
