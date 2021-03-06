/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMRAWStatusIndicator : CAMControlStatusIndicator {

	long long _rawMode;

}

@property (assign,setter=setRAWMode:,nonatomic) long long rawMode;              //@synthesize rawMode=_rawMode - In the implementation block
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)rawMode;
-(CGSize)intrinsicContentSize;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setRAWMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setRAWMode:(long long)arg1 ;
@end

