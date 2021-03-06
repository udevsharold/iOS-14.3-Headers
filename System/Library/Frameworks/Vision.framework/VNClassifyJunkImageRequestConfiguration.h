/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNClassifyJunkImageRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;

}

@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
@end

