/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWLensCorrectionDNG : RAWFilter {

	CIImage* inputImage;
	CIVector* inputKr;
	CIVector* inputKt;
	CIVector* inputCenter;
	id inputColorSpace;
	NSNumber* inputDraftMode;

}
+(id)customAttributes;
-(id)outputImage;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(CGPoint)mapPoint:(CGPoint)arg1 info:(id)arg2 ;
@end
