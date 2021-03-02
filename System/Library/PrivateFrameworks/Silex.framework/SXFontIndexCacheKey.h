/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXFontAttributes;
@interface SXFontIndexCacheKey : NSObject <NSCopying> {

	id<SXFontAttributes> _fontAttributes;
	long long _fontSize;

}

@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (nonatomic,readonly) long long fontSize;                               //@synthesize fontSize=_fontSize - In the implementation block
-(long long)fontSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id<SXFontAttributes>)fontAttributes;
-(id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2 ;
@end
