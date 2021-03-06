/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKCircle : MKShape <MKOverlay> {

	CLLocationCoordinate2D _coordinate;
	double _radius;
	SCD_Struct_MK6 _boundingMapRect;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                  //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
+(id)circleWithMapRect:(SCD_Struct_MK6)arg1 ;
-(double)radius;
-(id)_initWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1 ;
-(SCD_Struct_MK6)boundingMapRect;
@end

