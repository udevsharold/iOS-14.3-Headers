/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleBackgroundViewController.h>

@class UILabel, UIImageView, CCUICAPackageView, MTVisualStylingProvider, NSArray, UIView, NSString;

@interface CCUICustomContentModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController> {

	UILabel* _headerTitleLabel;
	UIImageView* _headerImageView;
	CCUICAPackageView* _packageView;
	MTVisualStylingProvider* _visualStylingProvider;
	NSArray* _footerButtons;
	UIView* _customHeaderView;
	UIView* _customFooterView;
	BOOL _positionHeaderToRightInLandscapeRight;
	double _expandedContentModuleHeight;
	double _expandedContentModuleWidth;

}

@property (assign,nonatomic) double expandedContentModuleHeight;                      //@synthesize expandedContentModuleHeight=_expandedContentModuleHeight - In the implementation block
@property (assign,nonatomic) double expandedContentModuleWidth;                       //@synthesize expandedContentModuleWidth=_expandedContentModuleWidth - In the implementation block
@property (assign,nonatomic) BOOL positionHeaderToRightInLandscapeRight;              //@synthesize positionHeaderToRightInLandscapeRight=_positionHeaderToRightInLandscapeRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeaderTitle:(id)arg1 ;
-(id)_titleFont;
-(void)_contentSizeCategoryDidChange;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(void)setGlyphImage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)setGlyphState:(id)arg1 ;
-(void)_updateTitleFont;
-(void)setCustomHeaderView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGRect)effectiveContentFrameForContainerFrame:(CGRect)arg1 ;
-(BOOL)_shouldLimitContentSizeCategory;
-(double)expandedContentModuleHeight;
-(double)expandedContentModuleWidth;
-(void)_updateHeaderLayoutIfNecessary;
-(void)_updateCustomHeaderViewLayoutIfNecessary;
-(void)_updateFooterButtonsLayoutIfNecessary;
-(void)_updateCustomFooterViewLayoutIfNecessary;
-(void)_updateHeaderGlyphVisualStyling;
-(void)setHeaderGlyphImage:(id)arg1 ;
-(void)setHeaderGlyphPackageDescription:(id)arg1 ;
-(void)setHeaderGlyphState:(id)arg1 ;
-(CGPoint)_headerCenterForBounds:(CGRect)arg1 ;
-(BOOL)positionHeaderToRightInLandscapeRight;
-(CGPoint)_footerCenterForBounds:(CGRect)arg1 ;
-(void)setFooterButtons:(id)arg1 ;
-(void)setCustomFooterView:(id)arg1 ;
-(void)setExpandedContentModuleHeight:(double)arg1 ;
-(void)setExpandedContentModuleWidth:(double)arg1 ;
-(void)setPositionHeaderToRightInLandscapeRight:(BOOL)arg1 ;
@end

