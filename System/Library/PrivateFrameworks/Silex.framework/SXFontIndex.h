/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontIndex.h>

@protocol SXFontIndex <NSObject>
@required
-(id)fontAttributesForFontName:(id)arg1;
-(id)fontNameForFontAttributes:(id)arg1 size:(long long)arg2;

@end


@class NSDictionary, NSCache, NSMutableArray, NSString;

@interface SXFontIndex : NSObject <SXFontIndex> {

	NSDictionary* _fonts;
	NSCache* _attributeToFontIndex;
	NSCache* _fontToAttributeIndex;
	NSMutableArray* _fontFamilyProviders;

}

@property (nonatomic,readonly) NSDictionary * fonts;                              //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,readonly) NSCache * attributeToFontIndex;                    //@synthesize attributeToFontIndex=_attributeToFontIndex - In the implementation block
@property (nonatomic,readonly) NSCache * fontToAttributeIndex;                    //@synthesize fontToAttributeIndex=_fontToAttributeIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * fontFamilyProviders;              //@synthesize fontFamilyProviders=_fontFamilyProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)fonts;
-(NSMutableArray *)fontFamilyProviders;
-(NSCache *)attributeToFontIndex;
-(void)addFontFamilyProvider:(id)arg1 ;
-(id)fontAttributesForFontName:(id)arg1 ;
-(id)fontNameForFontAttributes:(id)arg1 size:(long long)arg2 ;
-(id)fontsForFamilyProviders:(id)arg1 ;
-(NSCache *)fontToAttributeIndex;
-(id)initWithFontFamilyProviders:(id)arg1 ;
@end
