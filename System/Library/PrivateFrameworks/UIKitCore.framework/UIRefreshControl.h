/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol _UIRefreshControlHosting;
@class _UIRefreshControlContentView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {

	long long _style;
	_UIRefreshControlContentView* _contentView;
	double _refreshControlHeight;
	double _visibleHeight;
	double _snappingHeight;
	double _additionalTopInset;
	BOOL _insetsApplied;
	BOOL _adjustingInsets;
	UIEdgeInsets _appliedInsets;
	id<_UIRefreshControlHosting> _host;
	long long _refreshControlState;

}

@property (nonatomic,readonly) long long refreshControlState;                                                      //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) double _refreshControlHeight; 
@property (nonatomic,readonly) double _snappingHeight; 
@property (nonatomic,readonly) double _visibleHeight; 
@property (nonatomic,readonly) BOOL _hostAdjustsContentOffset; 
@property (nonatomic,readonly) BOOL _areInsetsBeingApplied; 
@property (getter=_appliedInsets,nonatomic,readonly) UIEdgeInsets appliedInsets; 
@property (assign,setter=_setHost:,getter=_host,nonatomic,__weak) id<_UIRefreshControlHosting> _host; 
@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(id)_defaultColor;
+(Class)_contentViewClassForStyle:(long long)arg1 ;
-(id<_UIRefreshControlHosting>)_host;
-(void)setBackgroundColor:(id)arg1 ;
-(id)_scrollView;
-(void)_setTintColor:(id)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)_contentView;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)style;
-(void)_update;
-(void)_setHost:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIColor *)tintColor;
-(id)_attributedTitle;
-(void)_addInsets;
-(void)sizeToFit;
-(void)_removeInsets;
-(void)setBounds:(CGRect)arg1 ;
-(void)_didScroll;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_tintColor;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)isRefreshing;
-(double)_snappingHeight;
-(void)_setAttributedTitle:(id)arg1 ;
-(long long)refreshControlState;
-(void)endRefreshing;
-(void)_updateSnappingHeight;
-(void)setRefreshControlState:(long long)arg1 ;
-(void)_resizeToFitContents;
-(BOOL)_areInsetsBeingApplied;
-(BOOL)_hostAdjustsContentOffset;
-(void)_removeInsetHeight:(double)arg1 ;
-(void)_addInsetHeight:(double)arg1 ;
-(double)revealedFraction;
-(long long)_recomputeNewState;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateConcealingMask;
-(double)_stiffnessForVelocity:(double)arg1 ;
-(CGPoint)_originForContentOffset:(CGPoint)arg1 ;
-(void)_setVisibleHeight:(double)arg1 ;
-(double)_visibleHeightForContentOffset:(CGPoint)arg1 origin:(CGPoint)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)_impactIntensityForVelocity:(double)arg1 ;
-(void)_endRefreshingAnimated:(BOOL)arg1 ;
-(void)_setRefreshControlState:(long long)arg1 notify:(BOOL)arg2 ;
-(double)_scrollViewHeight;
-(BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(BOOL)_isApplyingInsets;
-(double)_refreshControlHeight;
-(NSAttributedString *)attributedTitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_visibleHeight;
-(UIEdgeInsets)_appliedInsets;
-(void)didMoveToSuperview;
-(void)beginRefreshing;
-(void)encodeWithCoder:(id)arg1 ;
@end
