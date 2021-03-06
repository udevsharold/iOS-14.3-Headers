/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFColorBoxes, UIImage, NSData, NSString;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	double _overallContrast;
	SBFColorBoxes* _colorBoxes;
	UIImage* _displayedImage;
	UIImage* _sampleImage;
	NSData* _displayedImageHashData;
	NSString* _displayedImageHashString;

}

@property (setter=_setDisplayedImage:,getter=_displayedImage,nonatomic,retain) UIImage * displayedImage;              //@synthesize displayedImage=_displayedImage - In the implementation block
@property (setter=_setSampleImage:,getter=_sampleImage,nonatomic,retain) UIImage * sampleImage;                       //@synthesize sampleImage=_sampleImage - In the implementation block
@property (nonatomic,copy) NSData * displayedImageHashData;                                                           //@synthesize displayedImageHashData=_displayedImageHashData - In the implementation block
@property (nonatomic,copy) NSString * displayedImageHashString;                                                       //@synthesize displayedImageHashString=_displayedImageHashString - In the implementation block
@property (nonatomic,retain) SBFColorBoxes * colorBoxes; 
+(BOOL)_allowsRasterization;
+(BOOL)_canCacheImages;
+(BOOL)_allowsParallax;
+(BOOL)_canDownscaleSampleImage;
-(void)_setupWallpaperImageFromConfiguration:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(id)_sampleImage;
-(NSString *)displayedImageHashString;
-(id)_wallpaperImageForAnalysis;
-(void)_generateImageForImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 downsampleFactor:(double)arg4 needsDimmingTreatment:(BOOL)arg5 averageColor:(id)arg6 generationHandler:(/*^block*/id)arg7 ;
-(void)_updateColorBoxesWithKey:(id)arg1 image:(id)arg2 ;
-(NSData *)displayedImageHashData;
-(void)_setDisplayedImage:(id)arg1 ;
-(id)_computeAverageColor;
-(void)setDisplayedImageHashData:(NSData *)arg1 ;
-(CGSize)_imageSize;
-(SBFColorBoxes *)colorBoxes;
-(void)_setUpStaticImageContentView:(id)arg1 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(void)_setSampleImage:(id)arg1 ;
-(id)_createColorBoxes;
-(void)setDisplayedImageHashString:(NSString *)arg1 ;
-(void)setColorBoxes:(SBFColorBoxes *)arg1 ;
-(void)_displayImage:(id)arg1 ;
-(float)_zoomScale;
-(BOOL)imageRequiresLuminanceTreatment;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(id)wallpaperImage;
-(double)cropZoomScale;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)preheatImageData;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(id)cacheUniqueIdentifier;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(double)contrast;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(double)arg2 ;
-(BOOL)hasContentOutsideVisibleBounds;
-(long long)wallpaperType;
-(double)_contrastInContentViewRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
-(id)snapshotImage;
-(id)_displayedImage;
@end

