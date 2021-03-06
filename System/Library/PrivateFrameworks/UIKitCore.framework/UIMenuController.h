/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICalloutBarDelegate.h>

@class UIView, NSString, NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {

	CGRect _targetRect;
	UIView* _targetView;
	long long _arrowDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMenuVisible,nonatomic) BOOL menuVisible; 
@property (assign,nonatomic) long long arrowDirection;                           //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,copy) NSArray * menuItems; 
@property (nonatomic,readonly) CGRect menuFrame; 
+(id)sharedMenuController;
-(id)init;
-(CGRect)menuFrame;
-(void)dealloc;
-(void)hideMenu;
-(id)_targetView;
-(CGRect)_targetRect;
-(void)update;
-(void)calloutBar:(id)arg1 willStartAnimation:(id)arg2 ;
-(long long)arrowDirection;
-(void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2 ;
-(NSArray *)menuItems;
-(BOOL)isMenuVisible;
-(BOOL)_menuHidden;
-(void)setArrowDirection:(long long)arg1 ;
-(void)setMenuVisible:(BOOL)arg1 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(void)_windowWillRotate:(id)arg1 ;
-(void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_updateAnimated:(BOOL)arg1 checkVisible:(BOOL)arg2 ;
-(void)_reparentCalloutBarIfNeeded;
-(void)_removeWindowWillRotateObserver;
-(void)_showMenuAnimated:(BOOL)arg1 ;
-(void)_hideMenuAnimated:(BOOL)arg1 ;
-(void)hideMenuFromView:(id)arg1 ;
-(void)setTargetRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setTargetRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)showMenuFromView:(id)arg1 rect:(CGRect)arg2 ;
@end

