/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIMorphingLabel, NSAttributedString, NSMutableArray, NSArray;

@interface UIMorphingLabelGlyphSet : NSObject {

	UIMorphingLabel* _label;
	NSAttributedString* _attributedString;
	CTLineRef _line;
	NSMutableArray* _glyphViews;
	unsigned long long _glyphCount;
	unsigned short* _glyphs;
	CGRect* _glyphFrames;
	CGPoint* _glyphPositions;
	CGPoint _lineOrigin;
	double _lineWidth;

}

@property (nonatomic,readonly) unsigned long long glyphCount;                      //@synthesize glyphCount=_glyphCount - In the implementation block
@property (nonatomic,readonly) const unsigned short* glyphs;                       //@synthesize glyphs=_glyphs - In the implementation block
@property (nonatomic,readonly) const CGRect* glyphFrames;                          //@synthesize glyphFrames=_glyphFrames - In the implementation block
@property (nonatomic,readonly) const CGPoint* glyphPositions;                      //@synthesize glyphPositions=_glyphPositions - In the implementation block
@property (nonatomic,readonly) NSArray * glyphViews;                               //@synthesize glyphViews=_glyphViews - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGPoint lineOrigin;                                 //@synthesize lineOrigin=_lineOrigin - In the implementation block
@property (nonatomic,readonly) double lineWidth;                                   //@synthesize lineWidth=_lineWidth - In the implementation block
-(double)lineWidth;
-(NSAttributedString *)attributedString;
-(void)dealloc;
-(const CGPoint*)glyphPositions;
-(CGRect)boundingRectForGlyphsInRange:(NSRange)arg1 ;
-(const unsigned short*)glyphs;
-(void)removeGlyphs;
-(NSArray *)glyphViews;
-(void)placeGlyphs;
-(unsigned long long)glyphCount;
-(id)initWithLabel:(id)arg1 attributedString:(id)arg2 ;
-(const CGRect*)glyphFrames;
-(void)buildGlyphViews;
-(CGPoint)lineOrigin;
@end
