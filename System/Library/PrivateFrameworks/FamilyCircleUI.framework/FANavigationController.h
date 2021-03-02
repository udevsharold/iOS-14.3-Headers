/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@protocol FANavigationControllerDelegate;
@interface FANavigationController : UINavigationController {

	id<FANavigationControllerDelegate> _familyDelegate;

}

@property (assign,nonatomic,__weak) id<FANavigationControllerDelegate> familyDelegate;              //@synthesize familyDelegate=_familyDelegate - In the implementation block
-(BOOL)_isEmpty;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFamilyDelegate:(id<FANavigationControllerDelegate>)arg1 ;
-(id<FANavigationControllerDelegate>)familyDelegate;
@end
