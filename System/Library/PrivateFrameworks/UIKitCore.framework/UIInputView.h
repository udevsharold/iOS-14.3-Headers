/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISplittableInputView.h>

@class UIKBRenderConfig, _UIInputViewContent, UIImage, NSMutableDictionary, NSArray, CALayer, UIView, NSString;

@interface UIInputView : UIView <UISplittableInputView> {

	long long _style;
	UIKBRenderConfig* _renderConfig;
	BOOL _suppressBackgroundStyling;
	BOOL _disableSplitSupport;
	_UIInputViewContent* _leftContentView;
	_UIInputViewContent* _rightContentView;
	double _contentRatio;
	CGSize _leftContentSize;
	CGSize _rightContentSize;
	double _gapWidth;
	double _leftOffset;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	double _transitionRatio;
	UIImage* _mergedImage;
	UIImage* _splitImage;
	NSMutableDictionary* _mergedSliceMap;
	NSMutableDictionary* _splitSliceMap;
	NSArray* _visibleLayers;
	CALayer* _transitionLayer;
	BOOL _allowsSelfSizing;
	BOOL _assertSizingWithPredictionBar;
	UIEdgeInsets _backgroundEdgeInsets;

}

@property (nonatomic,retain) UIImage * _mergedImage;                             //@synthesize mergedImage=_mergedImage - In the implementation block
@property (nonatomic,retain) UIImage * _splitImage;                              //@synthesize splitImage=_splitImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mergedSliceMap;              //@synthesize mergedSliceMap=_mergedSliceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _splitSliceMap;               //@synthesize splitSliceMap=_splitSliceMap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundEdgeInsets;                  //@synthesize backgroundEdgeInsets=_backgroundEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL assertSizingWithPredictionBar;                 //@synthesize assertSizingWithPredictionBar=_assertSizingWithPredictionBar - In the implementation block
@property (nonatomic,readonly) UIView * leftContentView;                         //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,readonly) UIView * rightContentView;                        //@synthesize rightContentView=_rightContentView - In the implementation block
@property (assign,nonatomic) double contentRatio;                                //@synthesize contentRatio=_contentRatio - In the implementation block
@property (assign,nonatomic) CGSize leftContentViewSize;                         //@synthesize leftContentSize=_leftContentSize - In the implementation block
@property (assign,nonatomic) CGSize rightContentViewSize;                        //@synthesize rightContentSize=_rightContentSize - In the implementation block
@property (nonatomic,readonly) long long inputViewStyle;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL allowsSelfSizing;                              //@synthesize allowsSelfSizing=_allowsSelfSizing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupAppearanceIfNecessary;
-(void)willBeginSplitTransition;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)layoutMergedSubviews;
-(BOOL)_isSplit;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(void)dealloc;
-(BOOL)_isTransitioning;
-(void)updateMergedSubviewConstraints;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isToolbars;
-(id)tintColor;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)setContentRatio:(double)arg1 ;
-(UIView *)leftContentView;
-(UIView *)rightContentView;
-(CGSize)leftContentViewSize;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)rightContentViewSize;
-(UIImage *)_splitImage;
-(void)_setNeedsContentSizeUpdate;
-(double)_additionalClipHeight;
-(void)_updateClipCorners;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 ;
-(void)_updateWithSize:(CGSize)arg1 ;
-(id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1 ;
-(id)_toolbarBorderedBackground;
-(void)setAssertSizingWithPredictionBar:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_suppressBackgroundStyling;
-(void)_setSuppressBackgroundStyling:(BOOL)arg1 ;
-(BOOL)_disableSplitSupport;
-(void)_setDisableSplitSupport:(BOOL)arg1 ;
-(long long)inputViewStyle;
-(void)setInputViewStyle:(long long)arg1 ;
-(BOOL)allowsSelfSizing;
-(void)setLeftContentViewSize:(CGSize)arg1 ;
-(BOOL)assertSizingWithPredictionBar;
-(void)setRightContentViewSize:(CGSize)arg1 ;
-(void)set_mergedImage:(UIImage *)arg1 ;
-(void)set_splitImage:(UIImage *)arg1 ;
-(NSMutableDictionary *)_mergedSliceMap;
-(void)set_mergedSliceMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_splitSliceMap;
-(void)set_splitSliceMap:(NSMutableDictionary *)arg1 ;
-(UIEdgeInsets)backgroundEdgeInsets;
-(void)setBackgroundEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_supportsSplit;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)contentRatio;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
-(CGSize)_defaultSize;
-(UIImage *)_mergedImage;
-(void)didEndSplitTransition;
@end

