/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@class NSArray;

@interface SBFPagedScrollView : BSUIScrollView {

	BOOL _changingScrollViewLayout;
	BOOL _gestureEnabled;
	NSArray* _pageViews;
	unsigned long long _currentPageIndex;
	NSRange _visiblePageRange;

}

@property (assign,nonatomic) unsigned long long currentPageIndex;              //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) NSRange visiblePageRange;                         //@synthesize visiblePageRange=_visiblePageRange - In the implementation block
@property (nonatomic,copy) NSArray * pageViews;                                //@synthesize pageViews=_pageViews - In the implementation block
@property (assign,nonatomic) BOOL gestureEnabled;                              //@synthesize gestureEnabled=_gestureEnabled - In the implementation block
-(void)_bs_didScrollWithContext:(SCD_Struct_SB1)arg1 ;
-(void)_bs_willBeginScrolling;
-(void)_bs_didEndScrolling;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 withAnimationSettings:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSRange)visiblePageRange;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)_updateVisiblePages;
-(void)_layoutScrollView;
-(BOOL)gestureEnabled;
-(double)unclippedPageRelativeScrollOffset;
-(SCD_Struct_SB3)currentScrollInterval;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setVisiblePageRange:(NSRange)arg1 ;
-(double)pageRelativeScrollOffset;
-(void)layoutSubviews;
-(void)setGestureEnabled:(BOOL)arg1 ;
-(BOOL)resetContentOffsetToCurrentPage;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)pageViews;
-(void)layoutPages;
-(void)_updateCurrentPageForScrollOffset;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPageViews:(NSArray *)arg1 ;
-(CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1 ;
@end

