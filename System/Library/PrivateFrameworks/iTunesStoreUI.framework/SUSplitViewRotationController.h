/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SURotationController.h>

@class SURotationController, UIViewController;

@interface SUSplitViewRotationController : SURotationController {

	SURotationController* _firstRotationController;
	UIViewController* _firstViewController;
	SURotationController* _secondRotationController;
	UIViewController* _secondViewController;

}
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(long long)arg1 ;
-(void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)prepareToRotateToInterfaceOrientation:(long long)arg1 ;
-(id)_firstRotationController;
-(id)_secondRotationController;
@end
