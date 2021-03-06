/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KNAnimationScreenEnvironment : NSObject <NSCopying> {

	CGColorSpaceRef _colorSpace;
	double _pixelAspectRatio;

}

@property (assign,nonatomic) CGColorSpaceRef colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) double pixelAspectRatio;                 //@synthesize pixelAspectRatio=_pixelAspectRatio - In the implementation block
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(double)pixelAspectRatio;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPixelAspectRatio:(double)arg1 ;
@end

