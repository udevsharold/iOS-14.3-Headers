/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings;

@interface SBHIconAnimationSettings : PTSettings {

	SBFAnimationSettings* _centralAnimationSettings;

}

@property (nonatomic,retain) SBFAnimationSettings * centralAnimationSettings;              //@synthesize centralAnimationSettings=_centralAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setCentralAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)centralAnimationSettings;
@end

