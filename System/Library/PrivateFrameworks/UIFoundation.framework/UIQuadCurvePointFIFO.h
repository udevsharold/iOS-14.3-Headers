/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector, UIView;

@interface UIQuadCurvePointFIFO : UIPointFIFO {

	float _unitScale;
	BOOL _emitInterpolatedPoints;
	CGPathRef _path;
	double _lineWidth;
	/*^block*/id _emissionHandler;
	_UIPointVector* _prevPoints;
	_UIPointVector* _points;
	_UIPointVector* _controlPoints;
	 _lastPoint;
	UIView* _view;

}

@property (assign,nonatomic) float unitScale;                             //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                 //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (copy) id emissionHandler;                                      //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (assign,nonatomic) CGPathRef path;                              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double lineWidth;                            //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) _UIPointVector * prevPoints;                 //@synthesize prevPoints=_prevPoints - In the implementation block
@property (nonatomic,retain) _UIPointVector * points;                     //@synthesize points=_points - In the implementation block
@property (nonatomic,retain) _UIPointVector * controlPoints;              //@synthesize controlPoints=_controlPoints - In the implementation block
@property (assign,nonatomic)  lastPoint;                                  //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) UIView * view;                               //@synthesize view=_view - In the implementation block
+(6)interpolateFromPoint:(float)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)clear;
-(void)setPoints:(_UIPointVector *)arg1 ;
-(_UIPointVector *)prevPoints;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(UIView *)view;
-(CGPathRef)path;
-(void)addPoint:;
-(void)dealloc;
-(void)setUnitScale:(float)arg1 ;
-(void)setUnitScaleForViewSize:(CGSize)arg1 normalizedSize:(CGSize)arg2 contentScaleFactor:(double)arg3 ;
-(void)enumerateInterpolationFromPoint:(/*^block*/id)arg1 ;
-(id)initWithFIFO:(id)arg1 strokeView:(id)arg2 ;
-(void)setControlPoints:(_UIPointVector *)arg1 ;
-(BOOL)emitInterpolatedPoints;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)flush;
-()lastPoint;
-(_UIPointVector *)points;
-(void)setView:(UIView *)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(_UIPointVector *)controlPoints;
-(float)unitScale;
-(id)initWithFIFO:(id)arg1 ;
-(void)setLastPoint:;
@end

