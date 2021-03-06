/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class NSMutableAttributedString, EMKGlyphRippler, UIColor, NSArray, EMKTextEnumerator, NSMutableData;

@interface EMKLayoutManager : NSLayoutManager {

	NSMutableAttributedString* _attributes;
	EMKGlyphRippler* _rippler;
	UIColor* _currentColor;
	double _currentScale;
	CGSize _currentOffset;
	UIColor* _currentShadowColor;
	NSArray* _emojiConversionLanguages;
	EMKTextEnumerator* _enumerator;
	NSMutableData* _glyphIndexTable;
	BOOL _emojiConversionEnabled;
	BOOL _emojiConversionActive;
	BOOL _darkModeEnabled;

}

@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled; 
-(id)init;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(id)attributes;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)setDarkModeEnabled:(BOOL)arg1 ;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)setPreFrames:(unsigned long long)arg1 ;
-(void)setPostFrames:(unsigned long long)arg1 ;
-(void)setDelayFrames:(unsigned long long)arg1 ;
-(BOOL)convertGlyphIndex:(unsigned long long)arg1 toAttributeRelativeGlyphIndex:(unsigned long long*)arg2 numberOfAttributedGlyphs:(unsigned long long*)arg3 ;
-(BOOL)isDarkModeEnabled;
-(void)startOrStopTimer;
-(void)drawAttributedGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)flushGlyphIndexTable;
-(BOOL)isEmojiAnimationActive;
-(BOOL)isEmojiConversionEnabled;
-(void)setEmojiConversionEnabled:(BOOL)arg1 ;
-(BOOL)isEmojiConversionActive;
-(void)setEmojiConversionActive:(BOOL)arg1 ;
-(id)emojiConversionLanguages;
-(void)setEmojiConversionLanguages:(id)arg1 ;
@end

