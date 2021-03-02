/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBWallpaperObserver.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, NSString;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {

	long long _variant;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2 ;
-(void)wallpaperDidChangeForVariant:(long long)arg1 ;
-(id)initWithVariant:(long long)arg1 ;
-(void)dealloc;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
@end
