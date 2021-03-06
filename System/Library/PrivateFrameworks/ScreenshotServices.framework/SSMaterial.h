/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAFilter, UIColor;

@interface SSMaterial : NSObject {

	CAFilter* _filter;
	UIColor* _color;

}

@property (nonatomic,readonly) CAFilter * filter; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) double colorAlpha; 
+(id)cropHandle;
+(id)vellumOpacitySliderTrack;
+(id)vellumOpacitySliderValueImage;
-(CAFilter *)filter;
-(UIColor *)color;
-(void)applyToView:(id)arg1 ;
-(id)_initWithFilterType:(id)arg1 color:(id)arg2 ;
-(double)colorAlpha;
@end

