/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TKKeyPathObserver, UINavigationItem, UIViewController;

@interface TKContainerViewController : UIViewController {

	TKKeyPathObserver* _observer;
	UINavigationItem* _childNavigationItem;
	BOOL _appearing;
	UIViewController* _childViewController;

}

@property (nonatomic,retain) UIViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(UIViewController *)childViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(void)viewDidLoad;
-(void)observeChild;
-(void)updateInternals:(id)arg1 ;
@end
