/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionLateralCAFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputLateralCAAmount;
	NSData* inputLateralCAMap;
	NSNumber* inputLateralCAMapWidth;
	NSNumber* inputLateralCAMapHeight;
	id inputColorSpace;
	CIImage* mapImg;

}
+(id)customAttributes;
-(id)outputImage;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(BOOL)makeMapImages;
-(CGRect)mapPoint:(CGPoint)arg1 extent:(CGRect)arg2 map:(const vec4*)arg3 mapWidth:(int)arg4 mapHeight:(int)arg5 amount:(float)arg6 ;
@end

