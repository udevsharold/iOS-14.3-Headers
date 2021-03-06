/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIInterfaceActionVisualStyle, NSArray, NSLayoutConstraint, _UIInterfaceActionSeparatableSequenceView;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {

	long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
	BOOL _visualCornerForcedOverride;
	UIInterfaceActionVisualStyle* _visualStyle;
	NSArray* _arrangedActionRepresentationViews;
	long long _actionLayoutAxis;
	unsigned long long _visualCornerPosition;
	NSLayoutConstraint* _minimumHeightConstraint;
	_UIInterfaceActionSeparatableSequenceView* _separatedContentSequenceView;

}

@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                          //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSeparatableSequenceView * separatedContentSequenceView;              //@synthesize separatedContentSequenceView=_separatedContentSequenceView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * arrangedActionRepresentationViews;                                             //@synthesize arrangedActionRepresentationViews=_arrangedActionRepresentationViews - In the implementation block
@property (assign,nonatomic) long long actionLayoutAxis;                                                              //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                                                 //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
@property (assign,nonatomic) BOOL visualCornerForcedOverride;                                                         //@synthesize visualCornerForcedOverride=_visualCornerForcedOverride - In the implementation block
-(void)_notifyDidScroll;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)_applyVisualStyle;
-(void)updateConstraints;
-(CGSize)intrinsicContentSize;
-(void)setArrangedActionRepresentationViews:(NSArray *)arg1 ;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(long long)actionLayoutAxis;
-(BOOL)visualCornerForcedOverride;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(double)_minimumNumberOfRowsRequiredVisible;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(BOOL)_isHorizontalLayout;
-(void)_loadDefaultSizingConstraints;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)reloadDisplayedContentVisualStyle;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setVisualCornerForcedOverride:(BOOL)arg1 ;
-(double)_contentFitCanScrollThreshold;
-(_UIInterfaceActionSeparatableSequenceView *)separatedContentSequenceView;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(id)initWithVisualStyle:(id)arg1 ;
-(NSArray *)arrangedActionRepresentationViews;
-(unsigned long long)visualCornerPosition;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)_updateMinimumHeightConstraint;
-(void)_disableSeparatedContentSequenceViewToFit;
-(void)setActionLayoutAxis:(long long)arg1 ;
@end

