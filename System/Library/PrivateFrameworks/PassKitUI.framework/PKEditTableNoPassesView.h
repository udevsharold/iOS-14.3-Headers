/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKEditTableNoPassesViewDelegate;
@class UILabel, UIButton;

@interface PKEditTableNoPassesView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _buttonScanCode;
	UIButton* _buttonFindApps;
	id<PKEditTableNoPassesViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKEditTableNoPassesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PKEditTableNoPassesViewDelegate>)arg1 ;
-(void)scanCodeButtonTapped;
-(void)findAppsForWalletTapped;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKEditTableNoPassesViewDelegate>)delegate;
@end
