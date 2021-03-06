/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSSettingsInterface.h>

@protocol VUIJSSettingsInterface <JSExport>
@required
-(BOOL)sportsScoreSpoilersAllowed;
-(id)deniedBrands;
-(id)userPreferences;
-(id)consentedBrands;
-(BOOL)privateModeEnabled;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1;

@end


@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>
-(BOOL)sportsScoreSpoilersAllowed;
-(id)deniedBrands;
-(void)dealloc;
-(id)userPreferences;
-(id)consentedBrands;
-(BOOL)privateModeEnabled;
-(id)initWithAppContext:(id)arg1 ;
-(void)_handleSettingsDidChange:(id)arg1 ;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1 ;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1 ;
@end

