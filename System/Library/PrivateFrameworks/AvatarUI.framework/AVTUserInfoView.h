/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIVisualEffectView, UILabel, NSArray, NSString;

@interface AVTUserInfoView : UIView {

	BOOL _isRegisteredForCategorySizeChange;
	UIColor* _containerBackgroundColor;
	UIVisualEffectView* _userInfoEffectView;
	UILabel* _userInfoLabel;
	NSArray* _activeConstraints;
	NSDirectionalEdgeInsets _textInsets;

}

@property (assign,nonatomic) BOOL isRegisteredForCategorySizeChange;               //@synthesize isRegisteredForCategorySizeChange=_isRegisteredForCategorySizeChange - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * userInfoEffectView;              //@synthesize userInfoEffectView=_userInfoEffectView - In the implementation block
@property (nonatomic,retain) UILabel * userInfoLabel;                              //@synthesize userInfoLabel=_userInfoLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                          //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) NSDirectionalEdgeInsets textInsets;                   //@synthesize textInsets=_textInsets - In the implementation block
@property (assign,nonatomic) UIColor * containerBackgroundColor;                   //@synthesize containerBackgroundColor=_containerBackgroundColor - In the implementation block
+(double)textVerticalPadding;
-(void)_configure;
-(UILabel *)userInfoLabel;
-(void)updateConstraints;
-(NSDirectionalEdgeInsets)textInsets;
-(UIVisualEffectView *)userInfoEffectView;
-(BOOL)isRegisteredForCategorySizeChange;
-(void)setIsRegisteredForCategorySizeChange:(BOOL)arg1 ;
-(UIColor *)containerBackgroundColor;
-(void)setUserInfoEffectView:(UIVisualEffectView *)arg1 ;
-(void)setUserInfoLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setTextInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setContainerBackgroundColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

