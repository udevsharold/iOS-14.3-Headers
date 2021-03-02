/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKTitledBuddyHeaderViewDelegate.h>

@class UIScrollView, UIStackView, UIVisualEffectView, HKTitledLogoBuddyHeaderView, NSArray, UIActivityIndicatorView, NSString;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {

	UIScrollView* _scrollView;
	UIStackView* _bodyStackView;
	UIVisualEffectView* _anchoredButtonContainerView;
	UIStackView* _containerStackView;
	HKTitledLogoBuddyHeaderView* _header;
	NSArray* _buttons;
	NSArray* _buttonStackConstraints;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(UIEdgeInsets)arg2 ;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(unsigned long long)supportedInterfaceOrientations;
-(NSArray *)buttons;
-(id)headerView;
-(void)_updateForCurrentSizeCategory;
-(id)titleImage;
-(long long)bodyTextAlignment;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)titleString;
-(id)bodyString;
-(void)viewDidLoad;
-(id)linkButtonTitle;
-(void)linkButtonTapped:(id)arg1 ;
-(id)bottomAnchoredButtons;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(id)_createHeaderView;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
-(void)updateBodyTextAttributesWithMutableString:(id)arg1 ;
-(id)subsequentViews;
-(void)_createAnchoredButtons;
-(BOOL)shouldCustomizeNavigationBar;
-(BOOL)shouldHideNavigationBar;
-(void)_anchoredButtonTapped:(id)arg1 ;
-(void)reloadViews;
@end
