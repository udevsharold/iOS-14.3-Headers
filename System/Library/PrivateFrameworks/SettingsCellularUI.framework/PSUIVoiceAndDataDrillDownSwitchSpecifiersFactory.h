/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject
+(BOOL)shouldShowVoLTESwitchForSubscriptionContext:(id)arg1 RATMode:(int)arg2 ;
+(BOOL)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)arg1 ;
+(BOOL)shouldShow5GSASwitchForSpecifier:(id)arg1 RATMode:(int)arg2 ;
-(id)createVoLTESwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)create5GSASwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
@end
