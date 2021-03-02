/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, WFColor;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _glyphCharacter;
	long long _backgroundColorValue;
	NSData* _customImageData;

}

@property (nonatomic,readonly) long long backgroundColorValue;              //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;               //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,copy,readonly) NSData * customImageData;               //@synthesize customImageData=_customImageData - In the implementation block
@property (nonatomic,readonly) WFColor * backgroundColor; 
+(BOOL)supportsSecureCoding;
+(long long)randomBackgroundColor;
+(unsigned short)defaultGlyphCharacter;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)backgroundColorValue;
-(unsigned short)glyphCharacter;
-(WFColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
-(NSData *)customImageData;
-(id)initWithPaletteColor:(unsigned long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3 ;
@end
