/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton {

	long long _rawMode;

}

@property (assign,setter=setRAWMode:,nonatomic) long long rawMode;              //@synthesize rawMode=_rawMode - In the implementation block
-(long long)rawMode;
-(id)imageNameForCurrentState;
-(long long)controlType;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setRAWMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setRAWMode:(long long)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end
