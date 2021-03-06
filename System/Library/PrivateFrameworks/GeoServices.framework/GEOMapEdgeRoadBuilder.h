/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;

}
-(Matrix<float, 2, 1>)_lastPoint;
-(void)dealloc;
-(unsigned long long)_connectionTypeForEdge:(SCD_Struct_GE86*)arg1 points:(SCD_Struct_GE204*)arg2 connectingTilePoint:(Matrix<float, 2, 1>)arg3 ;
-(id)_lastTile;
-(id)initWithMap:(id)arg1 roadFeature:(SCD_Struct_GE206*)arg2 shouldFlip:(BOOL)arg3 ;
-(Matrix<float, 2, 1>)_firstPoint;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(id)_tileFinderForMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(id)_firstTile;
@end

