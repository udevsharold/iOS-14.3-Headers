/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, NSString;

@interface SBHWidgetContainerViewController : UIViewController {

	UIViewController* _widgetViewController;
	unsigned long long _gridSizeClass;
	NSString* _applicationName;

}

@property (nonatomic,readonly) UIViewController * widgetViewController;                                                //@synthesize widgetViewController=_widgetViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long gridSizeClass;                                                       //@synthesize gridSizeClass=_gridSizeClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationName;                                                        //@synthesize applicationName=_applicationName - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled; 
@property (assign,getter=isBlockedForScreenTimeExpiration,nonatomic) BOOL blockedForScreenTimeExpiration; 
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled; 
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing; 
@property (assign,nonatomic) unsigned long long presentationMode; 
-(BOOL)isBlockedForScreenTimeExpiration;
-(unsigned long long)presentationMode;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(BOOL)isPrivateModeEnabled;
-(unsigned long long)gridSizeClass;
-(id)widgetContainerView;
-(void)setPaused:(BOOL)arg1 ;
-(NSString *)applicationName;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(id)snapshotView;
-(BOOL)isPaused;
-(UIViewController *)widgetViewController;
-(BOOL)isVisiblySettled;
-(id)widgetContextMenuController;
-(id)initWithWidgetViewController:(id)arg1 gridSizeClass:(unsigned long long)arg2 applicationName:(id)arg3 ;
-(void)setBlockedForScreenTimeExpiration:(BOOL)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)loadView;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setVisiblySettled:(BOOL)arg1 ;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)_avocadoViewController;
@end

