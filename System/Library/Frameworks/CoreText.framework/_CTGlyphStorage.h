/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@interface _CTGlyphStorage : NSObject {

	long long _count;
	const unsigned short* _glyphs;
	const CGSize* _advances;
	const unsigned* _props;
	const long long* _stringIndices;

}
-(void)sync;
-(void*)refCon;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
-(CGPoint)originAtIndex:(long long)arg1 ;
-(void)setOrigin:(CGPoint)arg1 atIndex:(long long)arg2 ;
-(id)initWithCount:(long long)arg1 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)disposeGlyphStack;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(BOOL)implementsOrigins;
@end

