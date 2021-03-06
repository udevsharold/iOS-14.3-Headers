/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/ControlCenter/Bundles/LowPowerModule.bundle/LowPowerModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@class _CDBatterySaver;

@interface CCUILowPowerModule : CCUIToggleModule {

	_CDBatterySaver* _batterySaver;

}
-(void)_updateForDarkerSystemColorsChange;
-(id)glyphPackageDescription;
-(void)_observeSystemNotifications;
-(id)init;
-(id)glyphState;
-(BOOL)isSelected;
-(void)dealloc;
-(void)_updateState;
-(void)_unobserveSystemNotifications;
-(void)setSelected:(BOOL)arg1 ;
@end

