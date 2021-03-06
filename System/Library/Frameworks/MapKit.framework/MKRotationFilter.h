/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKRotationFilterDelegate;
#import <MapKit/MapKit-Structs.h>
@class VKMapView;

@interface MKRotationFilter : NSObject {

	VKMapView* _mapLayer;
	double _gestureStartAngle;
	BOOL _userRotatedAwayFromVerticalYaw;
	double _previousVerticalYawOverride;
	BOOL _snappedToNorth;
	BOOL _snappedAtStart;
	BOOL _snappingEnabled;
	double _additionalSnappingAngle;
	id<MKRotationFilterDelegate> _delegate;

}

@property (assign,getter=isSnappedToNorth,nonatomic) BOOL snappedToNorth;               //@synthesize snappedToNorth=_snappedToNorth - In the implementation block
@property (assign,nonatomic) double additionalSnappingAngle;                            //@synthesize additionalSnappingAngle=_additionalSnappingAngle - In the implementation block
@property (assign,nonatomic,__weak) id<MKRotationFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)updateSnappedToNorth;
-(double)additionalSnappingAngle;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 withSnapping:(BOOL)arg2 ;
-(void)setAdditionalSnappingAngle:(double)arg1 ;
-(void)setDelegate:(id<MKRotationFilterDelegate>)arg1 ;
-(void)setSnappedToNorth:(BOOL)arg1 ;
-(id)initWithMapLayer:(id)arg1 ;
-(BOOL)isSnappedToNorth;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(BOOL)hasAdditionalSnappingAngle;
-(id<MKRotationFilterDelegate>)delegate;
-(void)snapToNorthAnimated:(BOOL)arg1 forceTrueNorth:(BOOL)arg2 ;
@end

