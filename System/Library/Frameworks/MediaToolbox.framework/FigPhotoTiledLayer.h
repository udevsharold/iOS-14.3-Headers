/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol MTLDeviceMTLDeviceSPI, MTLCommandQueue, OS_dispatch_queue;
@class NSObject, MPSImageConversion, NSMutableSet, NSMutableDictionary, CALayer;

@interface FigPhotoTiledLayer : CALayer {

	FigPhotoDecompressionSession* _decodeSession;
	FigPhotoDecompressionContainer* _container;
	int _containerFormat;
	long long _imageIndex;
	CGSize _tileSize;
	BOOL _hasExtendedColorDisplay;
	BOOL _shouldTile;
	unsigned _decodePixelFormat;
	unsigned _conversionPixelFormat;
	id<MTLDevice><MTLDeviceSPI> _metalDevice;
	id<MTLCommandQueue> _metalCmdQueue;
	NSObject*<OS_dispatch_queue> _metalQueue;
	MPSImageConversion* _metalConverter;
	vImageConverterRef _vimageConverter;
	BOOL _hasAlpha;
	int _err;
	FigPhotoCacheRef _tileCache;
	FigPhotoSurfacePoolRef _surfacePool;
	NSMutableSet* _visibleTileKeys;
	NSMutableDictionary* _subLayers;
	NSObject*<OS_dispatch_queue> _updateQueue;
	AI _requestID;
	int _zoomLevel;
	CALayer* _placeholderLayer;
	CGImageRef _placeholderImage;
	double _zoomStartScale;
	os_unfair_lock_s _lock;
	CGRect _lastVisibleRect;
	double _lastZoomScale;
	BOOL _lastAboveZoomThreshold;
	BOOL _showTileBorders;
	long long _imageOrientation;
	CGSize _imageSize;

}

@property (nonatomic,readonly) CGSize imageSize;                        //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
-(CGSize)imageSize;
-(long long)imageOrientation;
-(void)dealloc;
-(void)flushCache;
-(void)sizeToFit;
-(void)_prepareForDecode;
-(void)_updateSubLayers:(id)arg1 ;
-(void)_setupConverterForSourceColorSpace:(CGColorSpaceRef)arg1 destinationColorSpace:(CGColorSpaceRef)arg2 ;
-(double)_zoomStartScaleForImage:(CGSize)arg1 placeholderImageSize:(CGSize)arg2 ;
-(id)initWithContainer:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(CGSize)arg3 screenSize:(CGSize)arg4 ;
-(BOOL)_visibleTileRegionHasChanged:(CGRect)arg1 level:(int)arg2 ;
-(id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(CGSize)arg3 screenSize:(CGSize)arg4 ;
-(void)_removeAllTiles;
-(void)_runMetalConversionOnSurface:(IOSurfaceRef)arg1 cropRect:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_runVImageConversionOnSurface:(IOSurfaceRef)arg1 cropRect:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_decodeImageRectangle:(CGRect)arg1 forLevel:(int)arg2 requestId:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithContainerURL:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(CGSize)arg3 screenSize:(CGSize)arg4 ;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(double)arg2 ;
-(id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 placeholderImage:(CGImageRef)arg3 screenSize:(CGSize)arg4 ;
@end

