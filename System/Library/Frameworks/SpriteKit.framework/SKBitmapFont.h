/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SKBitmapFont : NSObject <NSSecureCoding> {

	NSString* _fontName;
	NSString* _filePath;
	double _lineHeight;
	double _baseLine;
	NSArray* _characterSprites;
	map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > >* _characterSpriteByChar;
	map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > >* _characterAdvanceByChar;
	map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >* _characterKerningByCharPair;
	BOOL _internal;
	NSString* _fileName;

}
+(BOOL)supportsSecureCoding;
+(id)fontForFileNamed:(id)arg1 ;
+(id)fontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
+(id)_fontForFileNamed:(id)arg1 ;
-(id)fontName;
-(id)init;
-(double)lineHeight;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)spriteForCharacterNamed:(unsigned short)arg1 ;
-(double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2 ;
-(double)advanceForCharacterNamed:(unsigned short)arg1 ;
-(BOOL)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
@end

