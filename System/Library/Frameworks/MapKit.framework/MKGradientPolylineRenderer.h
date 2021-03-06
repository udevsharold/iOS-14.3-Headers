/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolylineRenderer.h>

@class NSArray;

@interface MKGradientPolylineRenderer : MKPolylineRenderer {

	NSArray* _colors;
	NSArray* _externallySetColors;
	NSArray* _locations;
	NSArray* _externallySetLocations;

}

@property (nonatomic,copy,readonly) NSArray * locations; 
@property (nonatomic,copy,readonly) NSArray * colors; 
+(Class)_mapkitLeafClass;
-(NSArray *)locations;
-(BOOL)_canProvideVectorGeometry;
-(void)_updateVectorGeometry:(id)arg1 ;
-(void)_updateColorStops;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)setColors:(id)arg1 atLocations:(id)arg2 ;
-(NSArray *)colors;
@end

