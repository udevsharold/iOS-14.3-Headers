/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _MKCalloutAccessoryView;
@class _MKUILabel, UIView, _MKSmallCalloutPassthroughButton, NSLayoutConstraint, NSArray, UILayoutGuide, NSString;

@interface MKSmallCalloutView : UIView {

	_MKUILabel* _titleLabel;
	_MKUILabel* _subtitleLabel;
	UIView*<_MKCalloutAccessoryView> _leftView;
	UIView*<_MKCalloutAccessoryView> _rightView;
	UIView*<_MKCalloutAccessoryView> _externalLeftView;
	UIView*<_MKCalloutAccessoryView> _externalRightView;
	UIView*<_MKCalloutAccessoryView> _externalDetailView;
	UIView*<_MKCalloutAccessoryView> _detailView;
	CGSize _preferredContentSize;
	BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	SCD_Struct_MK17 _metrics;
	BOOL _needsPreferredContentSizeUpdate;
	NSLayoutConstraint* _minWidthConstraint;
	NSLayoutConstraint* _maxWidthConstraint;
	NSLayoutConstraint* _unmaskedContainerLeadingConstraint;
	NSLayoutConstraint* _unmaskedContainerTrailingConstraint;
	NSArray* _titleLabelConstraints;
	NSLayoutConstraint* _titleBaselineFromTopMinimumConstraint;
	NSLayoutConstraint* _titleBaselineFromTopConstraint;
	NSLayoutConstraint* _titleMinimumBaselineToBottomConstraint;
	UILayoutGuide* _centerContentLeadingGuide;
	UILayoutGuide* _centerContentTrailingGuide;
	NSLayoutConstraint* _leftViewMinCalloutWidthConstraint;
	NSLayoutConstraint* _leftViewHorizontalPositionConstraint;
	NSLayoutConstraint* _leftViewTopSpacerBottomConstraint;
	NSLayoutConstraint* _leftViewCenterContentMarginConstraint;
	UILayoutGuide* _leftViewTopSpacer;
	UILayoutGuide* _leftViewLeftSpacer;
	NSLayoutConstraint* _rightViewHorizontalPositionConstraint;
	NSLayoutConstraint* _rightViewTopSpacerBottomConstraint;
	NSLayoutConstraint* _rightViewCenterContentMarginConstraint;
	UILayoutGuide* _rightViewTopSpacer;
	UILayoutGuide* _rightViewRightSpacer;
	NSLayoutConstraint* _detailViewMinTopConstraint;
	NSLayoutConstraint* _detailViewBottomConstraint;
	NSLayoutConstraint* _detailViewTrailingConstraint;
	BOOL _parallaxEnabled;
	UIView* _titlesContainerView;

}

@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@property (nonatomic,readonly) CGSize preferredContentSize;               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) double minimumWidth; 
@property (assign,nonatomic) double maximumWidth; 
@property (nonatomic,readonly) UIView * titlesContainerView;              //@synthesize titlesContainerView=_titlesContainerView - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                        //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
-(double)minimumWidth;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setMinimumWidth:(double)arg1 ;
-(double)maximumWidth;
-(void)setMaximumWidth:(double)arg1 ;
-(CGSize)preferredContentSize;
-(UIView *)leftView;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)reset;
-(void)_setNeedsUpdatePreferredContentSize;
-(void)setDetailView:(UIView *)arg1 ;
-(void)_updatePreferredContentSizeIfNeeded;
-(void)beginMapsTransitionMovingSideways;
-(id)_maskedContainerView;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(BOOL)parallaxEnabled;
-(UIView *)rightView;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(UIView *)detailView;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 metrics:(SCD_Struct_MK20)arg2 ;
-(NSString *)calloutSubtitle;
-(UIView *)titlesContainerView;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(NSString *)calloutTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updatePreferredContentSize;
@end

