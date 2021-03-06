/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton {

	long long _livePhotoMode;

}

@property (assign,nonatomic) long long livePhotoMode;              //@synthesize livePhotoMode=_livePhotoMode - In the implementation block
-(long long)livePhotoMode;
-(id)imageNameForCurrentState;
-(long long)controlType;
-(void)setLivePhotoMode:(long long)arg1 ;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setLivePhotoMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

