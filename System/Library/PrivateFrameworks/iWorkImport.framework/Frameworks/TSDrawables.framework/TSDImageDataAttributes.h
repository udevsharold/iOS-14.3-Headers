/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSPersistence/TSPDataAttributes.h>

@interface TSDImageDataAttributes : TSPDataAttributes {

	BOOL _hasPixelSize;
	CGSize _pixelSize;
	BOOL _imageIsSRGB;
	BOOL _hasImageIsSRGB;
	BOOL _shouldBeInterpretedAsGenericIfUntagged;

}

@property (nonatomic,readonly) CGSize pixelSize;                                         //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) BOOL hasPixelSize;                                        //@synthesize hasPixelSize=_hasPixelSize - In the implementation block
@property (nonatomic,readonly) BOOL imageIsSRGB;                                         //@synthesize imageIsSRGB=_imageIsSRGB - In the implementation block
@property (nonatomic,readonly) BOOL hasImageIsSRGB;                                      //@synthesize hasImageIsSRGB=_hasImageIsSRGB - In the implementation block
@property (nonatomic,readonly) BOOL shouldBeInterpretedAsGenericIfUntagged;              //@synthesize shouldBeInterpretedAsGenericIfUntagged=_shouldBeInterpretedAsGenericIfUntagged - In the implementation block
-(CGSize)pixelSize;
-(id)init;
-(id)initWithMessage:(const DataAttributes*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(id)description;
-(void)saveToMessage:(DataAttributes*)arg1 ;
-(BOOL)shouldBeInterpretedAsGenericIfUntagged;
-(id)copyWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)arg1 ;
-(id)initWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)arg1 ;
-(BOOL)hasPixelSize;
-(id)copyWithPixelSize:(CGSize)arg1 ;
-(id)initWithPixelSize:(CGSize)arg1 ;
-(BOOL)hasImageIsSRGB;
-(BOOL)imageIsSRGB;
-(id)initWithIsSRGB:(BOOL)arg1 ;
-(id)copyWithIsSRGB:(BOOL)arg1 ;
@end

