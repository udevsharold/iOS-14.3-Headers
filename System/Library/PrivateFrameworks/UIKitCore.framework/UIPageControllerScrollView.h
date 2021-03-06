/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {

	UIPageController* _pageController;

}

@property (assign,nonatomic) UIPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(void)setPageController:(UIPageController *)arg1 ;
-(UIPageController *)pageController;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)_abuttedPagingEdges;
-(void)setFrame:(CGRect)arg1 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDecelerating;
@end

