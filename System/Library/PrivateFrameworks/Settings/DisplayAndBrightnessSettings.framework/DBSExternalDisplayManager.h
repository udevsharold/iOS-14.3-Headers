/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, NSString, NSNumber;

@interface DBSExternalDisplayManager : NSObject {

	BrightnessSystemClient* _brightnessSystemClient;

}

@property (nonatomic,retain) BrightnessSystemClient * brightnessSystemClient;              //@synthesize brightnessSystemClient=_brightnessSystemClient - In the implementation block
@property (nonatomic,readonly) BOOL externalDisplayAvailable; 
@property (nonatomic,readonly) BOOL externalDisplayBrightnessAvailable; 
@property (nonatomic,readonly) BOOL externalDisplayAutoBrightnessAvailable; 
@property (nonatomic,retain) NSString * currentHDRMode; 
@property (assign,nonatomic) BOOL matchContent; 
@property (nonatomic,readonly) NSNumber * externalDisplayBrightness; 
@property (assign,nonatomic) BOOL autoBrightnessEnabled; 
+(id)defaultManager;
-(id)init;
-(id)supportedHDRModes;
-(id)preferredHDRModes;
-(void)dealloc;
-(BOOL)matchContent;
-(void)setMatchContent:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)autoBrightnessEnabled;
-(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
-(BrightnessSystemClient *)brightnessSystemClient;
-(void)setBrightnessSystemClient:(BrightnessSystemClient *)arg1 ;
-(BOOL)externalDisplayBrightnessAvailable;
-(NSString *)currentHDRMode;
-(void)setCurrentHDRMode:(NSString *)arg1 ;
-(BOOL)externalDisplayAvailable;
-(BOOL)externalDisplayAutoBrightnessAvailable;
-(NSNumber *)externalDisplayBrightness;
-(void)setExternalDisplayBrightness:(id)arg1 shouldCommit:(BOOL)arg2 ;
-(id)externalDisplayName;
@end

