/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface VideosUI.VerticalStackView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	 platterView;
	 $__lazy_storage_$_expandableView;
	 $__lazy_storage_$_panelView;
	 footerView;
	 layout;
	 $__lazy_storage_$_platterContainerView;
	 $__lazy_storage_$_hangerView;
	 panGesture;
	 topPlatterGradient;
	 bottomExpandableGradient;
	 bottomPlatterGradient;
	 lastExpandableViewFrame;
	 lastPanelFrame;
	 initialExpandableHeight;
	 maxExpandableHeight;
	 scrollDraggedOffset;
	 isScrollable;
	 isPartiallyExpanded;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)panGestureHandler:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
@end

