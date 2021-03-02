/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/vCard-Structs.h>
#import <vCard/CNVCardImage.h>

@class NSData, NSDictionary, NSValue, NSNumber;

@interface CNVCardMutableImage : CNVCardImage {

	NSData* _originalData;
	NSDictionary* _originalCropRects;
	CGSize _originalSize;
	CGImageRef _CGImage;
	BOOL _attemptedCGImage;
	NSValue* _targetSizeValue;
	NSNumber* _compressionQuality;
	CFStringRef _sourceImageFormatUTI;

}

@property (nonatomic,copy,readonly) NSData * originalData;                    //@synthesize originalData=_originalData - In the implementation block
@property (nonatomic,readonly) NSDictionary * originalCropRects;              //@synthesize originalCropRects=_originalCropRects - In the implementation block
@property (nonatomic,readonly) CGSize originalSize;                           //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                            //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) BOOL attemptedCGImage;                         //@synthesize attemptedCGImage=_attemptedCGImage - In the implementation block
@property (nonatomic,copy) NSValue * targetSizeValue;                         //@synthesize targetSizeValue=_targetSizeValue - In the implementation block
@property (assign,nonatomic) CFStringRef sourceImageFormatUTI;                //@synthesize sourceImageFormatUTI=_sourceImageFormatUTI - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSNumber * compressionQuality;                     //@synthesize compressionQuality=_compressionQuality - In the implementation block
+(id)CGImageCreateWithData:(id)arg1 maxSizeValue:(id)arg2 ;
+(id)scaleCropRects:(id)arg1 factor:(double)arg2 ;
+(CGRect)scaleRect:(CGRect)arg1 byFactor:(double)arg2 ;
-(CGImageRef)CGImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAlphaChannel;
-(id)data;
-(CGSize)originalSize;
-(void)dealloc;
-(NSNumber *)compressionQuality;
-(void)setCompressionQuality:(NSNumber *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGSize)size;
-(id)cropRects;
-(CFStringRef)sourceImageFormatUTI;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 size:(CGSize)arg3 ;
-(void)describePropertiesWithBuilder:(id)arg1 ;
-(NSData *)originalData;
-(NSDictionary *)originalCropRects;
-(void)nts_updateRepresentation;
-(void)nts_initCGImage;
-(void)nts_invalidateImageSize;
-(void)setTargetSizeValue:(NSValue *)arg1 ;
-(void)nts_invalidateImageQuality;
-(id)renderCGImage:(CGImageRef)arg1 ;
-(BOOL)shouldReturnPNG;
-(BOOL)isSourceLossless;
-(BOOL)attemptedCGImage;
-(NSValue *)targetSizeValue;
-(void)setSourceImageFormatUTI:(CFStringRef)arg1 ;
@end
