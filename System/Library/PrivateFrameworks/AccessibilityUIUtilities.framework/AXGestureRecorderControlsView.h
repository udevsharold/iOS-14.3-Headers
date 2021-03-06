/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AXGestureRecorderControlsViewDelegate;
@class UIButton, ASTBiggerProgressView;

@interface AXGestureRecorderControlsView : UIView {

	UIButton* _leftButton;
	UIButton* _rightButton;
	ASTBiggerProgressView* _progressView;
	id<AXGestureRecorderControlsViewDelegate> _delegate;
	UIButton* _middleButton;

}

@property (nonatomic,retain) UIButton * leftButton;                                                  //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                 //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic,__weak) id<AXGestureRecorderControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,getter=isLeftButtonEnabled,nonatomic) BOOL leftButtonEnabled; 
@property (assign,getter=isRightButtonEnabled,nonatomic) BOOL rightButtonEnabled; 
@property (nonatomic,retain) UIButton * middleButton;                                                //@synthesize middleButton=_middleButton - In the implementation block
+(double)defaultHeight;
-(void)setMiddleButton:(UIButton *)arg1 ;
-(UIButton *)leftButton;
-(void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(BOOL)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(BOOL)arg6 animationDuration:(double)arg7 completion:(/*^block*/id)arg8 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(BOOL)isLeftButtonEnabled;
-(void)setLeftButtonEnabled:(BOOL)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
-(void)setLeftButton:(UIButton *)arg1 ;
-(BOOL)isRightButtonEnabled;
-(void)setRightButtonEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AXGestureRecorderControlsViewDelegate>)arg1 ;
-(float)progress;
-(UIButton *)rightButton;
-(id)makeButton;
-(void)_buttonTapped:(id)arg1 ;
-(id<AXGestureRecorderControlsViewDelegate>)delegate;
-(UIButton *)middleButton;
@end

