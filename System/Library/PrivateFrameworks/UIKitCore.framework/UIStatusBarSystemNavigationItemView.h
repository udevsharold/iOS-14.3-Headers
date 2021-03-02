/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView {

	int _currentLabelCompressionLevel;
	UIButton* _button;
	double _maxWidth;

}

@property (nonatomic,retain) UIButton * button;                             //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double maxWidth;                               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int currentLabelCompressionLevel;              //@synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel - In the implementation block
-(CGSize)_buttonSize;
-(double)maxWidth;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(double)updateContentsAndWidth;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(void)setCurrentLabelCompressionLevel:(int)arg1 ;
-(int)currentLabelCompressionLevel;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(long long)labelLineBreakMode;
-(void)userDidActivateButton:(id)arg1 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(void)setMaxWidth:(double)arg1 ;
-(NSString *)title;
-(id)accessibilityHUDRepresentation;
-(BOOL)layoutImageOnTrailingEdge;
-(BOOL)_shouldLayoutImageOnRight;
@end
