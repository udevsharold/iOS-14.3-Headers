/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRouteInfo.h>

@interface VKAlternateRouteInfo : VKRouteInfo {

	PolylineCoordinate _divergenceCoordinate;
	PolylineCoordinate _convergenceCoordinate;
	unsigned char _etaComparisonToMain;

}

@property (nonatomic,readonly) PolylineCoordinate divergenceCoordinate;               //@synthesize divergenceCoordinate=_divergenceCoordinate - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate convergenceCoordinate;              //@synthesize convergenceCoordinate=_convergenceCoordinate - In the implementation block
@property (assign,nonatomic) unsigned char etaComparisionToMain;                      //@synthesize etaComparisonToMain=_etaComparisonToMain - In the implementation block
-(void)setEtaComparisionToMain:(unsigned char)arg1 ;
-(id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 divergenceRouteCoordinate:(PolylineCoordinate)arg3 convergenceRouteCoordinate:(PolylineCoordinate)arg4 ;
-(unsigned char)etaComparisionToMain;
-(PolylineCoordinate)divergenceCoordinate;
-(id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2 divergenceRouteCoordinate:(PolylineCoordinate)arg3 convergenceRouteCoordinate:(PolylineCoordinate)arg4 ;
-(PolylineCoordinate)convergenceCoordinate;
@end

