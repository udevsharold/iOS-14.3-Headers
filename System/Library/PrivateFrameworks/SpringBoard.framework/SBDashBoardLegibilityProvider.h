/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/CSLegibilityProviding.h>

@protocol CSLegibilityProviderDelegate;
@class SBWallpaperController, NSString;

@interface SBDashBoardLegibilityProvider : NSObject <SBWallpaperObserver, CSLegibilityProviding> {

	id<CSLegibilityProviderDelegate> _legibilityProviderDelegate;
	SBWallpaperController* _wallpaperController;

}

@property (nonatomic,retain) SBWallpaperController * wallpaperController;                                     //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CSLegibilityProviderDelegate> legibilityProviderDelegate;              //@synthesize legibilityProviderDelegate=_legibilityProviderDelegate - In the implementation block
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(id)initWithWallpaperController:(id)arg1 ;
-(id)init;
-(SBWallpaperController *)wallpaperController;
-(void)_notifyDelegate;
-(id<CSLegibilityProviderDelegate>)legibilityProviderDelegate;
-(void)setWallpaperController:(SBWallpaperController *)arg1 ;
-(id)currentLegibilitySettings;
-(id)_wallpaperLegibilitySettings;
-(void)setLegibilityProviderDelegate:(id<CSLegibilityProviderDelegate>)arg1 ;
@end
