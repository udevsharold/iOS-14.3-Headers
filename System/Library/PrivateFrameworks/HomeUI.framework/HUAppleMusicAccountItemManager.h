/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol HFMediaProfileContainer;
@class HUAppleMusicAccountModule, HUPrimaryUserSettingsItemModule;

@interface HUAppleMusicAccountItemManager : HFItemManager {

	BOOL _shouldDisableUpdates;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	HUAppleMusicAccountModule* _appleMusicAccountModule;
	HUPrimaryUserSettingsItemModule* _primaryUserSettingsItemModule;

}

@property (nonatomic,retain) HUAppleMusicAccountModule * appleMusicAccountModule;                          //@synthesize appleMusicAccountModule=_appleMusicAccountModule - In the implementation block
@property (nonatomic,retain) HUPrimaryUserSettingsItemModule * primaryUserSettingsItemModule;              //@synthesize primaryUserSettingsItemModule=_primaryUserSettingsItemModule - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableUpdates;                                                    //@synthesize shouldDisableUpdates=_shouldDisableUpdates - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                          //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HUAppleMusicAccountModule *)appleMusicAccountModule;
-(HUPrimaryUserSettingsItemModule *)primaryUserSettingsItemModule;
-(void)setAppleMusicAccountModule:(HUAppleMusicAccountModule *)arg1 ;
-(void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)_showPrimaryUserSettings;
-(void)setPrimaryUserSettingsItemModule:(HUPrimaryUserSettingsItemModule *)arg1 ;
-(void)setShouldDisableUpdates:(BOOL)arg1 ;
-(BOOL)shouldDisableUpdates;
@end

