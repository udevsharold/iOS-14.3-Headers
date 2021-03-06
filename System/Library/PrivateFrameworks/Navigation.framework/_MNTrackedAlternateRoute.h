/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@class MNActiveRouteInfo;

@interface _MNTrackedAlternateRoute : NSObject {

	MNActiveRouteInfo* _alternateRoute;
	MNActiveRouteInfo* _mainRoute;
	PolylineCoordinate _divergenceCoordinate;

}

@property (nonatomic,retain) MNActiveRouteInfo * alternateRoute;                   //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,retain) MNActiveRouteInfo * mainRoute;                        //@synthesize mainRoute=_mainRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate divergenceCoordinate;              //@synthesize divergenceCoordinate=_divergenceCoordinate - In the implementation block
-(MNActiveRouteInfo *)mainRoute;
-(PolylineCoordinate)divergenceCoordinate;
-(MNActiveRouteInfo *)alternateRoute;
-(void)setMainRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setAlternateRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setDivergenceCoordinate:(PolylineCoordinate)arg1 ;
@end

