/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol DKInkRenderer <NSObject>
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
@required
-(void)clear;
-(void)setMode:(unsigned long long)arg1;
-(unsigned long long)mode;
-(void)setDrawingEnabled:(BOOL)arg1;
-(void)beginStroke;
-(void)addPoint:(SCD_Struct_DK0)arg1;
-(UIColor *)inkColor;
-(void)teardown;
-(void)force;
-(double)drawingScale;
-(void)flush;
-(id)snapshotImage;
-(void)endStroke;
-(BOOL)initialized;
-(void)setDelegate:(id)arg1;
-(void)display;
-(BOOL)drawingEnabled;
-(void)setInkColor:(id)arg1;
-(id<DKInkRendererDelegate>)delegate;
-(void)setDrawingScale:(double)arg1;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;

@end

