/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCUIStatusBarDelegate;
@class UIStatusBar_Modern, UIStatusBarStyleRequest;

@interface CCUIStatusBar : UIView {

	UIStatusBar_Modern* _compactTrailingStatusBar;
	UIStatusBar_Modern* _expandedStatusBar;
	BOOL _needsUpdatedMetrics;
	double _trailingMarginDelta;
	double _verticalBatteryAlignmentDelta;
	BOOL _alignCompactAndExpandedStatusBars;
	id<CCUIStatusBarDelegate> _delegate;
	unsigned long long _leadingState;
	unsigned long long _trailingState;
	double _maxCompactScaleFactor;
	double _verticalSecondaryServiceDelta;
	double _expandedStatusBarTranslation;
	UIEdgeInsets _compactEdgeInsets;
	UIEdgeInsets _expandedEdgeInsets;
	CGAffineTransform _compactScaleTransform;

}

@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * compactTrailingStyleRequest; 
@property (nonatomic,readonly) double maxCompactScaleFactor;                                            //@synthesize maxCompactScaleFactor=_maxCompactScaleFactor - In the implementation block
@property (nonatomic,readonly) double verticalSecondaryServiceDelta;                                    //@synthesize verticalSecondaryServiceDelta=_verticalSecondaryServiceDelta - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIStatusBarDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long leadingState;                                           //@synthesize leadingState=_leadingState - In the implementation block
@property (assign,nonatomic) unsigned long long trailingState;                                          //@synthesize trailingState=_trailingState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets compactEdgeInsets;                                            //@synthesize compactEdgeInsets=_compactEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedEdgeInsets;                                           //@synthesize expandedEdgeInsets=_expandedEdgeInsets - In the implementation block
@property (assign,nonatomic) double leadingAlpha; 
@property (assign,nonatomic) double compactTrailingAlpha; 
@property (assign,nonatomic) double expandedTrailingAlpha; 
@property (assign,nonatomic) double expandedStatusBarTranslation;                                       //@synthesize expandedStatusBarTranslation=_expandedStatusBarTranslation - In the implementation block
@property (assign,nonatomic) BOOL alignCompactAndExpandedStatusBars;                                    //@synthesize alignCompactAndExpandedStatusBars=_alignCompactAndExpandedStatusBars - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGAffineTransform compactScaleTransform;                                   //@synthesize compactScaleTransform=_compactScaleTransform - In the implementation block
-(void)_updateShadow;
-(void)controlCenterApplyPrimaryContentShadow;
-(UIEdgeInsets)compactEdgeInsets;
-(unsigned long long)trailingState;
-(CGSize)intrinsicContentSize;
-(double)expandedTrailingAlpha;
-(double)expandedStatusBarTranslation;
-(void)prepareForPresentation;
-(void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
-(void)setAlignCompactAndExpandedStatusBars:(BOOL)arg1 ;
-(void)setCompactTrailingAlpha:(double)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setCompactScaleTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)leadingState;
-(void)setExpandedStatusBarTranslation:(double)arg1 ;
-(void)_updateMetricsIfNeeded;
-(void)setTrailingState:(unsigned long long)arg1 ;
-(BOOL)alignCompactAndExpandedStatusBars;
-(long long)orientation;
-(void)setExpandedEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)verticalSecondaryServiceDelta;
-(void)layoutSubviews;
-(CGAffineTransform)compactScaleTransform;
-(void)setLeadingAlpha:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setExpandedTrailingAlpha:(double)arg1 ;
-(void)setLeadingState:(unsigned long long)arg1 ;
-(void)setDelegate:(id<CCUIStatusBarDelegate>)arg1 ;
-(void)setCompactEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)expandedEdgeInsets;
-(CGRect)compactAvoidanceFrame;
-(UIStatusBarStyleRequest *)compactTrailingStyleRequest;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)leadingAlpha;
-(id<CCUIStatusBarDelegate>)delegate;
-(double)compactTrailingAlpha;
-(double)maxCompactScaleFactor;
@end

