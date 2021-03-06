/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SBLockScreenPlugin, SBLockScreenPluginOverlayViewController, SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {

	SBLockScreenPlugin* _plugin;
	SBLockScreenPluginOverlayViewController* _overlayController;
	SBLoginAppContainerOverlayWrapperView* _overlayWrapperView;
	SBLoginAppContainerPluginWrapperView* _containerView;

}

@property (nonatomic,retain,readonly) SBLockScreenPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(SBLockScreenPlugin *)plugin;
-(id)initWithPlugin:(id)arg1 ;
-(void)loadView;
@end

