/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolylineGroup, MKMultiPolyline;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolylineGroup* _vectorGeometry;
	double _strokeStart;
	double _strokeEnd;

}

@property (assign,setter=_setStrokeStart:,getter=_strokeStart,nonatomic) double strokeStart; 
@property (assign,setter=_setStrokeEnd:,getter=_strokeEnd,nonatomic) double strokeEnd; 
@property (nonatomic,readonly) MKMultiPolyline * multiPolyline; 
+(Class)_mapkitLeafClass;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)_strokeEnd;
-(double)_strokeStart;
-(id)_vectorGeometry;
-(void)_setStrokeStart:(double)arg1 ;
-(void)_setStrokeEnd:(double)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(MKMultiPolyline *)multiPolyline;
-(id)initWithMultiPolyline:(id)arg1 ;
-(void)createPath;
-(BOOL)_canProvideVectorGeometry;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_performInitialConfiguration;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_updateRenderColors;
@end
