/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSConcreteTextStorage.h>

@protocol _UITextAttributeDefaults;
@class NSMutableDictionary, UIFont, UIColor, NSDictionary;

@interface _UICascadingTextStorage : NSConcreteTextStorage {

	NSMutableDictionary* _defaultAttributes;
	id<_UITextAttributeDefaults> _defaults;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (setter=_setDefaults:,nonatomic,retain) id<_UITextAttributeDefaults> _defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)defaultFont;
-(long long)lineBreakMode;
-(UIColor *)shadowColor;
-(long long)textAlignment;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)_setShadow:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)_shadow;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(long long)_ui_resolvedTextAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)_restoreOriginalFontAttribute;
-(CGSize)shadowOffset;
-(void)setShadowBlur:(double)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(id<_UITextAttributeDefaults>)_defaults;
-(id)initWithDefaults:(id)arg1 ;
-(void)_setDefaults:(id)arg1 ;
-(id)_defaultAttributes;
-(NSDictionary *)defaultAttributes;
-(double)shadowBlur;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
@end
