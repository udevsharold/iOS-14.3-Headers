/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDView;

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {

	NSArray* _keyCommands;
	GSKeyboardRef _keyboard;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDView * view; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)dealloc;
-(void)_updateVisualStyle;
-(id)initWithKeyCommands:(id)arg1 keyboard:(GSKeyboardRef)arg2 ;
-(void)animateOutWithCompletion:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
@end
