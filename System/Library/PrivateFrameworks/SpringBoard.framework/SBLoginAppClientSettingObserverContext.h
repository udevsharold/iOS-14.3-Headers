/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIApplicationSceneSettings, SBSUILoginUISceneClientSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject {

	UIApplicationSceneSettings* _settings;
	SBSUILoginUISceneClientSettings* _updatedClientSettings;

}

@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SBSUILoginUISceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(void)setUpdatedClientSettings:(SBSUILoginUISceneClientSettings *)arg1 ;
-(UIApplicationSceneSettings *)settings;
-(SBSUILoginUISceneClientSettings *)updatedClientSettings;
@end
