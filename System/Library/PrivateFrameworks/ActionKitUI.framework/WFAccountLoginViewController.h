/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;
@interface WFAccountLoginViewController : UIViewController {

	id<WFAccountLoginViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFAccountLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setDelegate:(id<WFAccountLoginViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<WFAccountLoginViewControllerDelegate>)delegate;
-(id)initWithAccountClass:(Class)arg1 ;
@end

