/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>

@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController {

	BOOL _allowsSelfSizing;
	UIViewController* _contentViewController;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                 //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic) BOOL allowsSelfSizing;                                 //@synthesize allowsSelfSizing=_allowsSelfSizing - In the implementation block
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(id)initWithContentViewController:(id)arg1 ;
-(BOOL)allowsSelfSizing;
-(NSLayoutConstraint *)heightConstraint;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
-(void)_updateContentViewControllerHeight;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

