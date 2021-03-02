/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, MKVibrantView, NSString, UIFont, UIColor;

@interface MKPlatterView : UIView {

	UIImageView* _glyphImageView;
	MKVibrantView* _platterView;
	BOOL _highlighted;
	NSString* _glyph;
	UIFont* _glyphFont;
	UIColor* _glyphColor;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) NSString * glyph;                                   //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) UIFont * glyphFont;                                 //@synthesize glyphFont=_glyphFont - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                               //@synthesize glyphColor=_glyphColor - In the implementation block
-(BOOL)isHighlighted;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(UIFont *)glyphFont;
-(void)layoutSubviews;
-(void)infoCardThemeChanged;
-(void)setGlyphFont:(UIFont *)arg1 ;
-(NSString *)glyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)updateGlyph;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setGlyph:(NSString *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
