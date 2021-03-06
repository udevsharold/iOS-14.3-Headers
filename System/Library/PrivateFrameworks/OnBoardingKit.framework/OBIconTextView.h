/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UITextView;

@interface OBIconTextView : UIView {

	UIImageView* _iconView;
	UITextView* _textView;
	double _padding;
	double _baselineFromBoundsTop;
	CGSize _iconSize;

}

@property (nonatomic,retain) UIImageView * iconView;                      //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                             //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) double padding;                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double baselineFromBoundsTop;              //@synthesize baselineFromBoundsTop=_baselineFromBoundsTop - In the implementation block
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setIconView:(UIImageView *)arg1 ;
-(id)viewForLastBaselineLayout;
-(UIImageView *)iconView;
-(UITextView *)textView;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(double)padding;
-(void)updateFont;
-(id)initWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 dataDetectorTypes:(unsigned long long)arg4 ;
-(double)baselineFromBoundsTop;
-(void)setPadding:(double)arg1 ;
@end

