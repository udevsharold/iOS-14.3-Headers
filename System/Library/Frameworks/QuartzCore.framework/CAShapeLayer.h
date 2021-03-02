/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property (assign) const CGPathRef path; 
@property (assign) CGColorRef fillColor; 
@property (copy) NSString * fillRule; 
@property (assign) CGColorRef strokeColor; 
@property (assign) double strokeStart; 
@property (assign) double strokeEnd; 
@property (assign) double lineWidth; 
@property (assign) double miterLimit; 
@property (copy) NSString * lineCap; 
@property (copy) NSString * lineJoin; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)mt_applyVisualStying:(id)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(CGColorRef)strokeColor;
-(CGColorRef)fillColor;
-(NSString *)lineCap;
-(const CGPathRef)path;
-(void)setLineCap:(NSString *)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(double)miterLimit;
-(NSString *)fillRule;
-(NSString *)lineJoin;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)_colorSpaceDidChange;
-(double)strokeEnd;
-(void)setFillRule:(NSString *)arg1 ;
-(void)setPath:(const CGPathRef)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setLineJoin:(NSString *)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(double)strokeStart;
-(void)setStrokeStart:(double)arg1 ;
-(NSArray *)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
@end
