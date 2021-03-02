/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@class _UIPageControlIndicatorSettings, _UIPageControlPlatterSettings;

@interface _UIPageControlSettings : PTSettings {

	_UIPageControlIndicatorSettings* _indicatorSettings;
	_UIPageControlPlatterSettings* _platterSettings;

}

@property (nonatomic,retain) _UIPageControlIndicatorSettings * indicatorSettings;              //@synthesize indicatorSettings=_indicatorSettings - In the implementation block
@property (nonatomic,retain) _UIPageControlPlatterSettings * platterSettings;                  //@synthesize platterSettings=_platterSettings - In the implementation block
+(id)settingsControllerModule;
-(_UIPageControlIndicatorSettings *)indicatorSettings;
-(void)setIndicatorSettings:(_UIPageControlIndicatorSettings *)arg1 ;
-(_UIPageControlPlatterSettings *)platterSettings;
-(void)setPlatterSettings:(_UIPageControlPlatterSettings *)arg1 ;
@end
