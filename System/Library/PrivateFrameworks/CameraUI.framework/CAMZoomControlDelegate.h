/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMZoomControlDelegate <NSObject>
@optional
-(BOOL)zoomControlShouldSnapDialToSwitchOverZoomFactors:(id)arg1;
-(BOOL)zoomControlCanPlayHaptics:(id)arg1;
-(void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
-(BOOL)canToggleBetweenZoomFactorsForZoomControl:(id)arg1;
-(void)toggleBetweenZoomFactorsForZoomControl:(id)arg1;
-(void)zoomControl:(id)arg1 didChangeSelectedButtonIndex:(unsigned long long)arg2 displayZoomFactor:(double)arg3;

@end

