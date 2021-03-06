/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppStatusBarSettings.h>

@class NSNumber, _UILegibilitySettings;

@interface SBMutableAppStatusBarSettings : SBAppStatusBarSettings

@property (nonatomic,retain) NSNumber * alpha; 
@property (assign,nonatomic) long long style; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) int styleOverridesToCancel; 
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAlpha:(NSNumber *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)setStyleOverridesToCancel:(int)arg1 ;
@end

