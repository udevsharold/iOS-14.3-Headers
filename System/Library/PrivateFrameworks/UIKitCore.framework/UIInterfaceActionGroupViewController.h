/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate.h>
#import <UIKit/UIInterfaceActionGroupDisplaying.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>

@protocol UIInterfaceActionVisualStyleProviding;
@class UIInterfaceActionGroupView, UIInterfaceActionGroup, NSString, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting> {

	BOOL _springLoaded;
	id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
	UIInterfaceActionGroupView* _actionGroupView;
	UIInterfaceActionGroup* _actionGroup;

}

@property (nonatomic,copy,readonly) UIInterfaceActionGroup * actionGroup;                                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (nonatomic,copy,readonly) UIInterfaceActionGroupView * actionGroupView;                               //@synthesize actionGroupView=_actionGroupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;              //@synthesize visualStyleProvider=_visualStyleProvider - In the implementation block
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded;                                           //@synthesize springLoaded=_springLoaded - In the implementation block
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIInterfaceActionGroup *)actionGroup;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(UIInterfaceActionGroupView *)actionGroupView;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(void)reloadVisualStyle;
-(id)initWithActionGroup:(id)arg1 ;
-(void)loadView;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
@end
