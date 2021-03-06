/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HUDashboardNavigationBarDelegate.h>

@class UINavigationBar, NSString;

@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate> {

	UINavigationBar* _displayedNavigationBar;

}

@property (nonatomic,retain) UINavigationBar * displayedNavigationBar;              //@synthesize displayedNavigationBar=_displayedNavigationBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredStatusBarStyle;
-(id)childViewControllerForStatusBarStyle;
-(id)_targetNavigationBarForUISplitViewControllerSidebarButton;
-(BOOL)_canShowWhileLocked;
-(void)setDisplayedNavigationBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)displayedNavigationBar;
-(void)navigationBar:(id)arg1 didChangeBackgroundVisibility:(BOOL)arg2 ;
@end

