/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@class NSDictionary;

@interface BWVideoFormat : BWFormat {

	unsigned long long _width;
	unsigned long long _height;
	unsigned _pixelFormat;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _extendedWidth;
	unsigned long long _extendedHeight;
	unsigned _cacheMode;
	BOOL _prewireBuffers;
	BOOL _memoryPoolUseAllowed;
	NSDictionary* _pixelBufferAttributes;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                 //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long extendedWidth;                     //@synthesize extendedWidth=_extendedWidth - In the implementation block
@property (assign,nonatomic) unsigned long long extendedHeight;                    //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (assign,nonatomic) unsigned cacheMode;                                   //@synthesize cacheMode=_cacheMode - In the implementation block
@property (assign,nonatomic) BOOL prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) BOOL memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes;               //@synthesize pixelBufferAttributes=_pixelBufferAttributes - In the implementation block
@property (nonatomic,readonly) int colorSpaceProperties;                           //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
+(void)initialize;
+(id)colorInfoWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW2)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(int)colorSpacePropertiesForPixelBufferAttachments:(id)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned)arg3 sourceDimensions:(SCD_Struct_BW2)arg4 requestedPixelFormat:(unsigned)arg5 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW2)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 printErrors:(BOOL)arg3 ;
-(BOOL)prewireBuffers;
-(NSDictionary *)pixelBufferAttributes;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(unsigned)pixelFormat;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(void)setCacheMode:(unsigned)arg1 ;
-(int)colorSpaceProperties;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)setPixelFormat:(unsigned)arg1 ;
-(BOOL)memoryPoolUseAllowed;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(unsigned long long)planeAlignment;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRowAlignment;
-(unsigned long long)width;
-(void)setExtendedHeight:(unsigned long long)arg1 ;
-(void)setExtendedWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned)mediaType;
-(id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 memoryPoolUseAllowed:(BOOL)arg3 ;
-(unsigned long long)height;
-(void)dealloc;
-(unsigned long long)extendedHeight;
-(id)description;
-(unsigned long long)extendedWidth;
-(unsigned)cacheMode;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHLGColorSpace;
-(id)debugDescription;
@end
