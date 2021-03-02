/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SBLockScreenLegibilitySettings;


@protocol SBLockScreenPluginAppearance <NSObject>
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,copy,readonly) NSArray * elementOverrides; 
@property (nonatomic,retain,readonly) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) CGRect presentationRegion; 
@required
-(unsigned long long)restrictedCapabilities;
-(long long)backgroundStyle;
-(long long)presentationStyle;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(long long)notificationBehavior;
-(BOOL)isHidden;
-(CGRect)presentationRegion;
-(NSArray *)elementOverrides;

@end
