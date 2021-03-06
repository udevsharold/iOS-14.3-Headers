/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKFormat.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSKBaseFormat : TSKFormat <NSCopying> {

	unsigned char _base;
	unsigned char _basePlaces;
	BOOL _baseUseMinusSign;

}

@property (nonatomic,readonly) unsigned char base;                    //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) unsigned char basePlaces;              //@synthesize basePlaces=_basePlaces - In the implementation block
@property (nonatomic,readonly) BOOL baseUseMinusSign;                 //@synthesize baseUseMinusSign=_baseUseMinusSign - In the implementation block
+(id)defaultHexadecimalFormat;
-(unsigned char)base;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFormatType:(unsigned)arg1 ;
-(unsigned char)basePlaces;
-(BOOL)baseUseMinusSign;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 ;
-(id)asBaseFormat;
-(id)initWithBase:(unsigned char)arg1 basePlaces:(unsigned char)arg2 baseUseMinusSign:(BOOL)arg3 ;
@end

