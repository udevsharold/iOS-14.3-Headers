/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolyline.h>

@class MKRoutePolyline;

@interface MKRouteStepPolyline : MKPolyline {

	MKRoutePolyline* _fullRoute;

}
-(void)dealloc;
-(CLLocationCoordinate2D)coordinate;
-(id)_initWithRoute:(id)arg1 range:(NSRange)arg2 ;
@end
