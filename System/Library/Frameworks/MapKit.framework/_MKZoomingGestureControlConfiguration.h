/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKZoomingGestureControlConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MKZoomingGestureControlConfiguration : NSObject <MKZoomingGestureControlConfiguration, NSCopying> {

	double _decelerationThreshold;
	double _maximumZoomInVelocity;
	double _maximumZoomOutVelocity;
	double _zoomOutFrictionScale;
	double _zoomDraggingResistance;

}

@property (nonatomic,readonly) double decelerationThreshold;               //@synthesize decelerationThreshold=_decelerationThreshold - In the implementation block
@property (nonatomic,readonly) double maximumZoomInVelocity;               //@synthesize maximumZoomInVelocity=_maximumZoomInVelocity - In the implementation block
@property (nonatomic,readonly) double maximumZoomOutVelocity;              //@synthesize maximumZoomOutVelocity=_maximumZoomOutVelocity - In the implementation block
@property (nonatomic,readonly) double zoomOutFrictionScale;                //@synthesize zoomOutFrictionScale=_zoomOutFrictionScale - In the implementation block
@property (nonatomic,readonly) double zoomDraggingResistance;              //@synthesize zoomDraggingResistance=_zoomDraggingResistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
+(id)configurationForDigitalCrown;
+(id)configurationForCarPlay;
-(double)maximumZoomOutVelocity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maximumZoomInVelocity;
-(double)decelerationThreshold;
-(double)zoomDraggingResistance;
-(double)zoomOutFrictionScale;
-(id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 zoomDraggingResistance:(double)arg5 ;
-(id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 ;
@end
