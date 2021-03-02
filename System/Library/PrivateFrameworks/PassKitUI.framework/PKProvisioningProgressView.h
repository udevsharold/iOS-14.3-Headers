/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIView, NSString, UITextView, UILabel, UIProgressView, LAUICheckmarkLayer;

@interface PKProvisioningProgressView : UIView {

	UIScrollView* _scrollView;
	BOOL _showingCheckmark;
	UIView* _headerView;
	NSString* _primaryText;
	UITextView* _primaryLabel;
	UILabel* _secondaryLabel;
	UIProgressView* _progressView;
	UILabel* _progressLabel;
	LAUICheckmarkLayer* _checkmarkLayer;

}

@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSString * primaryText;                                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) UITextView * primaryLabel;                                  //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                    //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign,getter=isShowingCheckmark,nonatomic) BOOL showingCheckmark;              //@synthesize showingCheckmark=_showingCheckmark - In the implementation block
@property (nonatomic,readonly) LAUICheckmarkLayer * checkmarkLayer;                        //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
-(void)tintColorDidChange;
-(LAUICheckmarkLayer *)checkmarkLayer;
-(id)init;
-(void)setShowingCheckmark:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)headerView;
-(void)createViews;
-(void)_updateCheckmarkColor;
-(CGSize)_layoutWithBounds:(CGRect)arg1 applyLayout:(BOOL)arg2 ;
-(void)setShowingCheckmark:(BOOL)arg1 ;
-(BOOL)isShowingCheckmark;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UILabel *)secondaryLabel;
-(UITextView *)primaryLabel;
-(NSString *)primaryText;
-(void)layoutSubviews;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIProgressView *)progressView;
-(UILabel *)progressLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
