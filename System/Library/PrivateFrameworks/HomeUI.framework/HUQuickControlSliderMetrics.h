/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlSliderMetrics : NSObject {

	HUIntrinsicSizeDescriptor* _sizeDescriptor;
	double _cornerRadius;
	double _widthToCornerRadiusRatio;

}

@property (nonatomic,readonly) HUIntrinsicSizeDescriptor * sizeDescriptor;              //@synthesize sizeDescriptor=_sizeDescriptor - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) double widthToCornerRadiusRatio;                         //@synthesize widthToCornerRadiusRatio=_widthToCornerRadiusRatio - In the implementation block
-(double)cornerRadius;
-(id)initWithSizeDescriptor:(id)arg1 cornerRadius:(double)arg2 widthToCornerRadiusRatio:(double)arg3 ;
-(HUIntrinsicSizeDescriptor *)sizeDescriptor;
-(double)widthToCornerRadiusRatio;
@end

