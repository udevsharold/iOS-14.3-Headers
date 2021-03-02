/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBExternalGlobalDefaults, SBExternalDuetDefaults, SBExternalDemoDefaults, SBExternalSetupDefaults, SBExternalSettingsDefaults, SBExternalPhoneDefaults, SBExternalWifiDefaults, SBExternalSoundsDefaults, SBExternalNotesDefaults, SBBiometricKitDefaults;

@interface SBExternalDefaults : SBAbstractDefaults {

	SBExternalGlobalDefaults* _lazy_globalDefaults;
	SBExternalDuetDefaults* _lazy_duetDefaults;
	SBExternalDemoDefaults* _lazy_demoDefaults;
	SBExternalSetupDefaults* _lazy_setupDefaults;
	SBExternalSettingsDefaults* _lazy_settingsDefaults;
	SBExternalPhoneDefaults* _lazy_phoneDefaults;
	SBExternalWifiDefaults* _lazy_networkDefaults;
	SBExternalSoundsDefaults* _lazy_soundDefaults;
	SBExternalNotesDefaults* _lazy_notesDefaults;
	SBBiometricKitDefaults* _lazy_biometricKitDefaults;

}

@property (nonatomic,retain,readonly) SBExternalGlobalDefaults * globalDefaults; 
@property (nonatomic,retain,readonly) SBExternalDuetDefaults * duetDefaults; 
@property (nonatomic,retain,readonly) SBExternalDemoDefaults * demoDefaults; 
@property (nonatomic,retain,readonly) SBExternalSetupDefaults * setupDefaults; 
@property (nonatomic,retain,readonly) SBExternalSettingsDefaults * settingsDefaults; 
@property (nonatomic,retain,readonly) SBExternalPhoneDefaults * phoneDefaults; 
@property (nonatomic,retain,readonly) SBExternalWifiDefaults * networkDefaults; 
@property (nonatomic,retain,readonly) SBExternalSoundsDefaults * soundDefaults; 
@property (nonatomic,retain,readonly) SBExternalNotesDefaults * notesDefaults; 
@property (nonatomic,retain,readonly) SBBiometricKitDefaults * biometricKitDefaults; 
-(SBExternalWifiDefaults *)networkDefaults;
-(SBExternalDemoDefaults *)demoDefaults;
-(SBExternalSettingsDefaults *)settingsDefaults;
-(SBExternalPhoneDefaults *)phoneDefaults;
-(SBBiometricKitDefaults *)biometricKitDefaults;
-(SBExternalSoundsDefaults *)soundDefaults;
-(SBExternalSetupDefaults *)setupDefaults;
-(SBExternalGlobalDefaults *)globalDefaults;
-(SBExternalNotesDefaults *)notesDefaults;
-(SBExternalDuetDefaults *)duetDefaults;
@end
