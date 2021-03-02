/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIColor, UITextLabel, EKUIDividedGridViewController, NSLayoutConstraint;

@interface EKUIDividedGridViewCell : UIView {

	UIColor* _bgColor;
	BOOL _selected;
	UITextLabel* _label;
	EKUIDividedGridViewController* _viewController;
	NSLayoutConstraint* _widthConstraint;

}

@property (__weak) EKUIDividedGridViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (__weak) NSLayoutConstraint * widthConstraint;                        //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) UITextLabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                                     //@synthesize selected=_selected - In the implementation block
-(void)setViewController:(EKUIDividedGridViewController *)arg1 ;
-(id)init;
-(NSLayoutConstraint *)widthConstraint;
-(id)selectedTextColor;
-(id)initWithBackgroundColor:(id)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)selected;
-(void)setLabel:(UITextLabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UITextLabel *)label;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(EKUIDividedGridViewController *)viewController;
@end
