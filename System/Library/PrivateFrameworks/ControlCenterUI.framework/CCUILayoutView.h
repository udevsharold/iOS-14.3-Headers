/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIScrollView.h>

@protocol CCUILayoutViewLayoutSource;
@class CCUILayoutOptions;

@interface CCUILayoutView : CCUIScrollView {

	CCUILayoutOptions* _layoutOptions;
	id<CCUILayoutViewLayoutSource> _layoutSource;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<CCUILayoutViewLayoutSource> layoutSource;              //@synthesize layoutSource=_layoutSource - In the implementation block
-(void)setNeedsLayout;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<CCUILayoutViewLayoutSource>)layoutSource;
-(void)willRemoveSubview:(id)arg1 ;
-(void)iterateLayoutSubviewsWithBlock:(/*^block*/id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)subviewsToLayout;
-(CGRect)frameForLayoutRect:(CCUILayoutRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layoutOptions:(id)arg2 ;
-(id)_verticalDoubleMarginIndices;
-(void)didAddSubview:(id)arg1 ;
-(id)_horizontalDoubleMarginIndices;
-(double)_totalExtraItemSpacingForDoubleMarginIndices:(id)arg1 itemSpacing:(double)arg2 ;
-(void)layoutSubviews;
-(double)_extraItemSpacingForItemAtPosition:(unsigned long long)arg1 doubleMarginIndices:(id)arg2 itemSpacing:(double)arg3 ;
-(UIEdgeInsets)edgeInsets;
-(CGRect)frameForSubview:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLayoutSource:(id<CCUILayoutViewLayoutSource>)arg1 ;
@end

