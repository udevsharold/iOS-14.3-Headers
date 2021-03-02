/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TMLFontJSExports <JSExport>
@property (nonatomic,readonly) CGFontRef CGFontRef; 
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) double ascender; 
@property (nonatomic,readonly) double descender; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) double xHeight; 
@property (nonatomic,readonly) double lineHeight; 
@property (nonatomic,readonly) double leading; 
@required
-(NSString *)fontName;
-(id)bold;
-(NSString *)familyName;
-(double)ascender;
-(double)pointSize;
-(double)xHeight;
-(double)lineHeight;
-(double)capHeight;
-(id)italic;
-(double)descender;
-(double)leading;
-(id)withWidth:(double)arg1;
-(id)withSize:(double)arg1;
-(id)withFamily:(id)arg1;
-(id)withWeight:(double)arg1;
-(id)withSymbolicTraits:(unsigned)arg1;
-(id)withAttributes:(id)arg1;
-(id)withStyle:(id)arg1;
-(id)withAXRestrictedStyle:(id)arg1;
-(id)withScale:(double)arg1;
-(id)withScaleTransform:(double)arg1;
-(CGFontRef)CGFontRef;

@end
