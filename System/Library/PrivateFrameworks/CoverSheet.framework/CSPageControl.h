/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIPageControl.h>

@class _UILegibilitySettings;

@interface CSPageControl : UIPageControl {

	_UILegibilitySettings* _sbLegibilitySettings;
	unsigned long long _cameraPageIndex;

}

@property (assign,nonatomic) unsigned long long cameraPageIndex;              //@synthesize cameraPageIndex=_cameraPageIndex - In the implementation block
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 ;
+(CGSize)defaultSize;
+(CGRect)suggestedFrameForPageBounds:(CGRect)arg1 desiredSize:(CGSize)arg2 ;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)_cameraIndicator;
-(void)_updateForLegibility;
-(id)_currentPageIndicatorColor;
-(void)_rebuildIndicators;
-(id)_pageIndicatorColor;
-(void)setCameraPageIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)cameraPageIndex;
@end

