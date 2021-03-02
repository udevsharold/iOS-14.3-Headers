/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, NSLayoutConstraint;

@interface WFDictateTextActionStopButton : UIButton {

	BOOL _recording;
	UIView* _redSquare;
	NSLayoutConstraint* _redSquareWidthConstraint;

}

@property (assign,nonatomic,__weak) UIView * redSquare;                                         //@synthesize redSquare=_redSquare - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * redSquareWidthConstraint;              //@synthesize redSquareWidthConstraint=_redSquareWidthConstraint - In the implementation block
@property (assign,nonatomic) BOOL recording;                                                    //@synthesize recording=_recording - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)recording;
-(id)accessibilityLabel;
-(void)setRecording:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)currentLineWidth;
-(double)currentInnerCircleRadius;
-(double)currentStopButtonSize;
-(void)setRecording:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)redSquare;
-(void)setRedSquare:(UIView *)arg1 ;
-(NSLayoutConstraint *)redSquareWidthConstraint;
-(void)setRedSquareWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end
