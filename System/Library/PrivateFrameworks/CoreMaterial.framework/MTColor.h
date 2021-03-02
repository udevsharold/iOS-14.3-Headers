/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMaterial/CoreMaterial-Structs.h>
@interface MTColor : NSObject {

	CGColorRef _cachedColor;

}
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)pinkColor;
+(id)blackColor;
+(id)colorWithDescription:(id)arg1 ;
+(id)whiteColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
-(id)colorDescription;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)_rgbColor;
@end
