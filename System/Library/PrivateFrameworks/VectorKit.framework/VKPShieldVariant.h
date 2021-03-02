/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VKPShieldVariant : PBCodable <NSCopying> {

	SCD_Struct_VK210 _textShadow;
	SCD_Struct_VK212* _layers;
	unsigned long long _layersCount;
	unsigned long long _layersSpace;
	SCD_Struct_VK213 _textStroke;
	SCD_Struct_VK208 _fontColor;
	SCD_Struct_VK208 _nonDigitFontColor;
	SCD_Struct_VK214* _centerPoints;
	unsigned _atlasIndex;
	unsigned _backgroundColor;
	unsigned _borderColor;
	float _capWidthLeft;
	float _capWidthRight;
	float _centerOffsetX;
	NSString* _fontName;
	float _fontSize;
	float _lineSpacing;
	unsigned _maxDigits;
	unsigned _minDigits;
	NSString* _nonDigitFontName;
	float _nonDigitFontSize;
	float _paddingLeft;
	float _paddingRight;
	unsigned _quadIndex;
	float _textBaseline;
	int _textMaskColor;
	SCD_Struct_VK215 _has;

}

@property (assign,nonatomic) BOOL hasAtlasIndex; 
@property (assign,nonatomic) unsigned atlasIndex;                                 //@synthesize atlasIndex=_atlasIndex - In the implementation block
@property (assign,nonatomic) BOOL hasQuadIndex; 
@property (assign,nonatomic) unsigned quadIndex;                                  //@synthesize quadIndex=_quadIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMinDigits; 
@property (assign,nonatomic) unsigned minDigits;                                  //@synthesize minDigits=_minDigits - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDigits; 
@property (assign,nonatomic) unsigned maxDigits;                                  //@synthesize maxDigits=_maxDigits - In the implementation block
@property (assign,nonatomic) BOOL hasTextBaseline; 
@property (assign,nonatomic) float textBaseline;                                  //@synthesize textBaseline=_textBaseline - In the implementation block
@property (assign,nonatomic) BOOL hasCenterOffsetX; 
@property (assign,nonatomic) float centerOffsetX;                                 //@synthesize centerOffsetX=_centerOffsetX - In the implementation block
@property (nonatomic,readonly) BOOL hasFontName; 
@property (nonatomic,retain) NSString * fontName;                                 //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) BOOL hasFontSize; 
@property (assign,nonatomic) float fontSize;                                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL hasFontColor; 
@property (assign,nonatomic) SCD_Struct_VK208 fontColor;                          //@synthesize fontColor=_fontColor - In the implementation block
@property (assign,nonatomic) BOOL hasTextStroke; 
@property (assign,nonatomic) SCD_Struct_VK216 textStroke;                         //@synthesize textStroke=_textStroke - In the implementation block
@property (assign,nonatomic) BOOL hasTextShadow; 
@property (assign,nonatomic) SCD_Struct_VK217 textShadow;                         //@synthesize textShadow=_textShadow - In the implementation block
@property (nonatomic,readonly) BOOL hasNonDigitFontName; 
@property (nonatomic,retain) NSString * nonDigitFontName;                         //@synthesize nonDigitFontName=_nonDigitFontName - In the implementation block
@property (assign,nonatomic) BOOL hasNonDigitFontSize; 
@property (assign,nonatomic) float nonDigitFontSize;                              //@synthesize nonDigitFontSize=_nonDigitFontSize - In the implementation block
@property (nonatomic,readonly) unsigned long long centerPointsCount; 
@property (nonatomic,readonly) float* centerPoints; 
@property (nonatomic,readonly) unsigned long long layersCount; 
@property (nonatomic,readonly) SCD_Struct_VK212* layers; 
@property (assign,nonatomic) BOOL hasBackgroundColor; 
@property (assign,nonatomic) unsigned backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasBorderColor; 
@property (assign,nonatomic) unsigned borderColor;                                //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL hasCapWidthLeft; 
@property (assign,nonatomic) float capWidthLeft;                                  //@synthesize capWidthLeft=_capWidthLeft - In the implementation block
@property (assign,nonatomic) BOOL hasCapWidthRight; 
@property (assign,nonatomic) float capWidthRight;                                 //@synthesize capWidthRight=_capWidthRight - In the implementation block
@property (assign,nonatomic) BOOL hasPaddingLeft; 
@property (assign,nonatomic) float paddingLeft;                                   //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) BOOL hasPaddingRight; 
@property (assign,nonatomic) float paddingRight;                                  //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) BOOL hasTextMaskColor; 
@property (assign,nonatomic) int textMaskColor;                                   //@synthesize textMaskColor=_textMaskColor - In the implementation block
@property (assign,nonatomic) BOOL hasLineSpacing; 
@property (assign,nonatomic) float lineSpacing;                                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) BOOL hasNonDigitFontColor; 
@property (assign,nonatomic) SCD_Struct_VK208 nonDigitFontColor;                  //@synthesize nonDigitFontColor=_nonDigitFontColor - In the implementation block
-(float)fontSize;
-(void)setFontName:(NSString *)arg1 ;
-(void)setBackgroundColor:(unsigned)arg1 ;
-(NSString *)fontName;
-(SCD_Struct_VK212*)layers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addLayer:(SCD_Struct_VK212)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(float)lineSpacing;
-(unsigned long long)hash;
-(float)paddingRight;
-(void)setLineSpacing:(float)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(void)setBorderColor:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)borderColor;
-(void)setPaddingLeft:(float)arg1 ;
-(float)paddingLeft;
-(unsigned)quadIndex;
-(void)setAtlasIndex:(unsigned)arg1 ;
-(unsigned)atlasIndex;
-(void)setQuadIndex:(unsigned)arg1 ;
-(BOOL)hasBackgroundColor;
-(void)setNonDigitFontName:(NSString *)arg1 ;
-(void)clearLayers;
-(unsigned long long)centerPointsCount;
-(SCD_Struct_VK216)textStroke;
-(void)clearCenterPoints;
-(float)centerPointAtIndex:(unsigned long long)arg1 ;
-(void)addCenterPoint:(float)arg1 ;
-(unsigned long long)layersCount;
-(SCD_Struct_VK212)layerAtIndex:(unsigned long long)arg1 ;
-(void)setHasAtlasIndex:(BOOL)arg1 ;
-(BOOL)hasAtlasIndex;
-(void)setHasQuadIndex:(BOOL)arg1 ;
-(BOOL)hasQuadIndex;
-(void)setMinDigits:(unsigned)arg1 ;
-(void)setHasMinDigits:(BOOL)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(BOOL)hasMinDigits;
-(void)setMaxDigits:(unsigned)arg1 ;
-(void)setHasMaxDigits:(BOOL)arg1 ;
-(BOOL)hasMaxDigits;
-(void)setTextBaseline:(float)arg1 ;
-(void)setHasTextBaseline:(BOOL)arg1 ;
-(BOOL)hasTextBaseline;
-(void)setCenterOffsetX:(float)arg1 ;
-(void)setHasCenterOffsetX:(BOOL)arg1 ;
-(BOOL)hasCenterOffsetX;
-(BOOL)hasFontName;
-(void)setHasFontSize:(BOOL)arg1 ;
-(BOOL)hasFontSize;
-(void)setFontColor:(SCD_Struct_VK208)arg1 ;
-(void)setHasFontColor:(BOOL)arg1 ;
-(BOOL)hasFontColor;
-(void)setTextStroke:(SCD_Struct_VK216)arg1 ;
-(void)setHasTextStroke:(BOOL)arg1 ;
-(BOOL)hasTextStroke;
-(void)setTextShadow:(SCD_Struct_VK217)arg1 ;
-(void)setHasTextShadow:(BOOL)arg1 ;
-(BOOL)hasTextShadow;
-(SCD_Struct_VK217)textShadow;
-(BOOL)hasNonDigitFontName;
-(void)setNonDigitFontSize:(float)arg1 ;
-(void)setHasNonDigitFontSize:(BOOL)arg1 ;
-(BOOL)hasNonDigitFontSize;
-(float*)centerPoints;
-(void)setCenterPoints:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setLayers:(SCD_Struct_VK212*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasBackgroundColor:(BOOL)arg1 ;
-(BOOL)hasBorderColor;
-(void)setHasBorderColor:(BOOL)arg1 ;
-(void)setCapWidthLeft:(float)arg1 ;
-(void)setHasCapWidthLeft:(BOOL)arg1 ;
-(BOOL)hasCapWidthLeft;
-(void)setCapWidthRight:(float)arg1 ;
-(void)setHasCapWidthRight:(BOOL)arg1 ;
-(BOOL)hasCapWidthRight;
-(void)setHasPaddingLeft:(BOOL)arg1 ;
-(BOOL)hasPaddingLeft;
-(BOOL)hasPaddingRight;
-(void)setHasPaddingRight:(BOOL)arg1 ;
-(int)textMaskColor;
-(void)setTextMaskColor:(int)arg1 ;
-(void)setHasTextMaskColor:(BOOL)arg1 ;
-(BOOL)hasTextMaskColor;
-(void)setHasLineSpacing:(BOOL)arg1 ;
-(BOOL)hasLineSpacing;
-(void)setNonDigitFontColor:(SCD_Struct_VK208)arg1 ;
-(void)setHasNonDigitFontColor:(BOOL)arg1 ;
-(BOOL)hasNonDigitFontColor;
-(float)textBaseline;
-(float)centerOffsetX;
-(NSString *)nonDigitFontName;
-(float)nonDigitFontSize;
-(float)capWidthLeft;
-(float)capWidthRight;
-(SCD_Struct_VK208)nonDigitFontColor;
-(unsigned)backgroundColor;
-(void)writeTo:(id)arg1 ;
-(unsigned)minDigits;
-(unsigned)maxDigits;
-(SCD_Struct_VK208)fontColor;
@end
