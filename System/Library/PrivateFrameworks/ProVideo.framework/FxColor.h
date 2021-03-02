/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FxColor : NSObject <NSCoding> {

	void* _priv;
	void** _pad[3];

}
+(id)colorWithCIColor:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithString:(id)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithString:(id)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)stringRepresentation;
-(const double*)components;
-(double)alpha;
-(CGColorRef)_cgColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(void)dealloc;
-(double)blue;
-(unsigned long long)numberOfComponents;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(double)green;
-(id)ciColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)convertToRGBA:(double*)arg1 ;
@end
