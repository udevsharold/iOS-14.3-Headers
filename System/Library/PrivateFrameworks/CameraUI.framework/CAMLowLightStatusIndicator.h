/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator {

	BOOL _lowLightDisabled;
	double _duration;
	long long _lowLightMode;

}

@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long lowLightMode;                                       //@synthesize lowLightMode=_lowLightMode - In the implementation block
@property (assign,getter=isLowLightDisabled,nonatomic) BOOL lowLightDisabled;              //@synthesize lowLightDisabled=_lowLightDisabled - In the implementation block
-(long long)lowLightMode;
-(void)setDuration:(double)arg1 ;
-(void)setLowLightMode:(long long)arg1 ;
-(id)valueText;
-(id)imageNameForCurrentState;
-(double)duration;
-(void)setLowLightDisabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)isLowLightDisabled;
-(void)setLowLightDisabled:(BOOL)arg1 ;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)canShowValue;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
@end
