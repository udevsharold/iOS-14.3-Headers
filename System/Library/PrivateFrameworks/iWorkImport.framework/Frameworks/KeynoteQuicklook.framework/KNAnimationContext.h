/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
@class TSDCapabilities, KNAnimationRegistryWithFallbacks, CALayer;

@interface KNAnimationContext : NSObject {

	TSDCapabilities* _capabilities;
	CGColorSpaceRef _colorSpace;
	double _fieldOfViewInRadians;
	double _pixelAspectRatio;
	KNAnimationRegistryWithFallbacks* _registry;
	CALayer* _showLayer;
	double _viewScale;
	CGRect _slideRect;
	CGRect _unscaledSlideRect;
	CATransform3D _slideProjectionMatrix;

}

@property (nonatomic,readonly) TSDCapabilities * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) CGColorSpaceRef colorSpace;                                 //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,readonly) double fieldOfViewInRadians;                              //@synthesize fieldOfViewInRadians=_fieldOfViewInRadians - In the implementation block
@property (assign,nonatomic) double pixelAspectRatio;                                    //@synthesize pixelAspectRatio=_pixelAspectRatio - In the implementation block
@property (nonatomic,readonly) KNAnimationRegistryWithFallbacks * registry;              //@synthesize registry=_registry - In the implementation block
@property (nonatomic,readonly) CALayer * showLayer;                                      //@synthesize showLayer=_showLayer - In the implementation block
@property (nonatomic,readonly) double showScale; 
@property (nonatomic,readonly) CATransform3D slideProjectionMatrix;                      //@synthesize slideProjectionMatrix=_slideProjectionMatrix - In the implementation block
@property (nonatomic,readonly) CGRect slideRect;                                         //@synthesize slideRect=_slideRect - In the implementation block
@property (nonatomic,readonly) CGRect unscaledSlideRect;                                 //@synthesize unscaledSlideRect=_unscaledSlideRect - In the implementation block
@property (nonatomic,readonly) double viewScale;                                         //@synthesize viewScale=_viewScale - In the implementation block
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(double)pixelAspectRatio;
-(id)init;
-(void)dealloc;
-(TSDCapabilities *)capabilities;
-(KNAnimationRegistryWithFallbacks *)registry;
-(CGRect)slideRect;
-(double)viewScale;
-(CATransform3D)slideProjectionMatrix;
-(double)fieldOfViewInRadians;
-(CALayer *)showLayer;
-(id)initWithShowSize:(CGSize)arg1 viewScale:(double)arg2 showLayer:(id)arg3 ;
-(double)showScale;
-(CGRect)unscaledSlideRect;
-(void)updateGeometryToFitShowLayerAtViewScale:(double)arg1 ;
-(void)setPixelAspectRatio:(double)arg1 ;
@end

