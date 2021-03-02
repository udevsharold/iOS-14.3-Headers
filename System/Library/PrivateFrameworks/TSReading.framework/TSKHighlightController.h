/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, TSUImage, NSString;

@interface TSKHighlightController : NSObject <CALayerDelegate> {

	CALayer* _imageLayer;
	TSUImage* _image;
	CGRect _overallRect;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	CALayer* _containingLayer;
	double _viewScale;
	CGPathRef _path;

}

@property (nonatomic,retain) TSUImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) double viewScale;                         //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                        //@synthesize containingLayer=_containingLayer - In the implementation block
@property (assign,nonatomic) CGPathRef path;                           //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnect;
-(CGAffineTransform)transform;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(TSUImage *)image;
-(void)reset;
-(CGPathRef)path;
-(void)dealloc;
-(void)setImage:(TSUImage *)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(CALayer *)layer;
-(void)setPath:(CGPathRef)arg1 ;
-(void)hide;
-(BOOL)drawRoundedRect;
-(double)viewScale;
-(void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2 ;
-(CGRect)buildLayersForPath:(CGPathRef)arg1 withImage:(id)arg2 ;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
@end
