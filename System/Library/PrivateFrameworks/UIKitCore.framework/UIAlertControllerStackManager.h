/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class NSMutableArray, UIScene, NSString;

@interface UIAlertControllerStackManager : NSObject <_UISceneComponentProviding> {

	NSMutableArray* _alertControllerStack;
	NSMutableArray* _hiddenAlertControllers;
	UIScene* _scene;

}

@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(long long)_alertControllerStackCount;
-(BOOL)_alertControllerShouldBeTrackedInStack:(id)arg1 ;
-(void)_hideStackedAlertControllers;
-(void)_alertControllerWillDisappear:(id)arg1 ;
-(void)_showHiddenStackedAlertControllers;
-(void)_alertControllerDidAppear:(id)arg1 ;
-(void)_addAlertControllerToStack:(id)arg1 ;
-(void)_alertControllerDidDisappear:(id)arg1 ;
-(id)_topAlertControllerInStack;
-(void)_didHideAlertController:(id)arg1 ;
-(void)_willShowAlertController:(id)arg1 ;
-(void)_willHideAlertController:(id)arg1 ;
-(void)_alertControllerWillAppear:(id)arg1 ;
-(void)_removeAlertControllerFromStack:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
@end
