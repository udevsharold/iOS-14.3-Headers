/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKZoomingGestureControlConfiguration <NSObject>
@property (nonatomic,readonly) double decelerationThreshold; 
@property (nonatomic,readonly) double maximumZoomInVelocity; 
@property (nonatomic,readonly) double maximumZoomOutVelocity; 
@property (nonatomic,readonly) double zoomOutFrictionScale; 
@property (nonatomic,readonly) double zoomDraggingResistance; 
@required
-(double)maximumZoomOutVelocity;
-(double)maximumZoomInVelocity;
-(double)decelerationThreshold;
-(double)zoomDraggingResistance;
-(double)zoomOutFrictionScale;

@end
