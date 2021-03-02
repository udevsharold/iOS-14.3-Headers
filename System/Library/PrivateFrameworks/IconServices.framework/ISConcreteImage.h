/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISConcreteImage : ISImage <NSCopying> {

	BOOL _placeholder;
	CGImageRef _cgImage;
	double _scale;
	CGSize _size;
	CGSize _minimumSize;

}

@property (assign) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(CGSize)minimumSize;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setPlaceholder:(BOOL)arg1 ;
-(CGSize)size;
-(id)_init;
-(void)setMinimumSize:(CGSize)arg1 ;
@end
