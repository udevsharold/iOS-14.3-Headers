/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonaUI/PersonaUI-Structs.h>
@class NSString, UIColor, PRMonogramColor;

@interface PRMonogram : NSObject {

	NSString* _text;
	unsigned long long _fontIndex;
	UIColor* _color;
	PRMonogramColor* _monogramColor;

}

@property (nonatomic,copy) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long fontIndex;                          //@synthesize fontIndex=_fontIndex - In the implementation block
@property (nonatomic,retain) UIColor * color;                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramColor;                       //@synthesize monogramColor=_monogramColor - In the implementation block
@property (nonatomic,readonly) UIColor * plateFlatColor; 
@property (nonatomic,readonly) UIColor * plateGradientStartColor; 
@property (nonatomic,readonly) UIColor * plateGradientEndColor; 
@property (nonatomic,readonly) UIColor * plateSelectedActiveColor; 
@property (nonatomic,readonly) UIColor * plateSelectedInactiveColor; 
@property (nonatomic,readonly) UIColor * plateSelectedActiveTextColor; 
+(id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2 ;
+(void)updatePlateOverlayLayer:(id)arg1 ;
+(id)_fontSpecs;
+(id)plateOverlayLayer;
+(unsigned long long)countOfFonts;
+(id)monogram;
+(double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2 ;
+(id)monogramWithData:(id)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(id)stringAttributesForDiameter:(double)arg1 ;
-(id)dataRepresentation;
-(id)init;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(UIColor *)color;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_takeValuesFromDataRepresentation:(id)arg1 ;
-(id)dataRepresentationWithVersion:(unsigned char)arg1 ;
-(UIColor *)plateSelectedActiveTextColor;
-(id)_initWithData:(id)arg1 ;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 fontIndex:(unsigned char)arg3 ;
-(id)initWithText:(id)arg1 fontIndex:(unsigned long long)arg2 monogramColor:(id)arg3 ;
-(PRMonogramColor *)monogramColor;
-(UIColor *)plateFlatColor;
-(UIColor *)plateSelectedActiveColor;
-(id)description;
-(UIColor *)plateGradientEndColor;
-(UIColor *)plateSelectedInactiveColor;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 ;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)setFontIndexToUnsupportedValue;
-(UIColor *)plateGradientStartColor;
-(BOOL)_renderTextInContext:(CGContextRef)arg1 frame:(CGRect)arg2 ;
@end
