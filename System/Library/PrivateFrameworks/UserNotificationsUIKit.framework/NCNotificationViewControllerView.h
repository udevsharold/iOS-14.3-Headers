/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeManaging.h>

@class UIView, PLPlatterView, NSString;

@interface NCNotificationViewControllerView : UIView <PLContentSizeManaging> {

	UIView* _stackDimmingView;
	PLPlatterView* _contentView;

}

@property (assign,nonatomic,__weak) PLPlatterView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(PLPlatterView *)contentView;
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(PLPlatterView *)arg1 ;
-(void)configureStackDimmingForTransform:(CGAffineTransform)arg1 ;
-(void)_updateStackDimmingVisualStyling;
-(void)invalidateStackedPlattersRecipe;
@end
