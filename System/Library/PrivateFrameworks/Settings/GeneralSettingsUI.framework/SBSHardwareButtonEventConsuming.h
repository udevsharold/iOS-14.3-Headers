/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSHardwareButtonEventConsuming <NSObject>
@optional
-(void)consumeSinglePressUpForButtonKind:(long long)arg1;
-(void)consumeSinglePressDownForButtonKind:(long long)arg1;
-(void)consumeDoublePressDownForButtonKind:(long long)arg1;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1;
-(void)consumeTriplePressUpForButtonKind:(long long)arg1;
-(void)consumeLongPressForButtonKind:(long long)arg1;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1;
-(void)consumeStateChange:(long long)arg1 forButtonKind:(long long)arg2;

@end

