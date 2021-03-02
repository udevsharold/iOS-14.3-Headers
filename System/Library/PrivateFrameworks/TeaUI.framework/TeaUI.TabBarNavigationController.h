/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI.NavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, UITabBarItem, NSString;

@interface TeaUI.TabBarNavigationController : TeaUI.NavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	 rootViewController;
	 commandCenter;
	 animateAlongsideTabBarSnapshot;
	 viewControllerDepth;

}

@property (copy,nonatomic) NSArray * viewControllers; 
@property (retain,nonatomic) UITabBarItem * tabBarItem; 
@property (readonly,nonatomic) NSString * description; 
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(UITabBarItem *)tabBarItem;
-(NSString *)description;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
@end
