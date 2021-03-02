/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBrowserSwitcherScrollPreventerDelegate;
@class UILongPressGestureRecognizer, UIScrollView, UIView, NSString;

@interface CKBrowserSwitcherScrollPreventer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _touchTracker;
	BOOL _engaged;
	BOOL _switching;
	BOOL _scrollEnabled;
	id<CKBrowserSwitcherScrollPreventerDelegate> _delegate;
	UIScrollView* _horizontalScrollView;
	UIView* _horizontalScrollPreventerView;

}

@property (nonatomic,retain) UIScrollView * horizontalScrollView;                                       //@synthesize horizontalScrollView=_horizontalScrollView - In the implementation block
@property (nonatomic,retain) UIView * horizontalScrollPreventerView;                                    //@synthesize horizontalScrollPreventerView=_horizontalScrollPreventerView - In the implementation block
@property (assign,getter=isEngaged,nonatomic) BOOL engaged;                                             //@synthesize engaged=_engaged - In the implementation block
@property (assign,getter=isSwitching,nonatomic) BOOL switching;                                         //@synthesize switching=_switching - In the implementation block
@property (assign,nonatomic) BOOL scrollEnabled;                                                        //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<CKBrowserSwitcherScrollPreventerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)contentSize;
-(void)touchTrackerRecognized:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isEngaged;
-(BOOL)isSwitching;
-(void)setSwitching:(BOOL)arg1 ;
-(void)setHorizontalScrollView:(UIScrollView *)arg1 ;
-(void)setHorizontalScrollPreventerView:(UIView *)arg1 ;
-(UIView *)horizontalScrollPreventerView;
-(BOOL)scrollEnabled;
-(void)layoutSubviews;
-(void)setEngaged:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CKBrowserSwitcherScrollPreventerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<CKBrowserSwitcherScrollPreventerDelegate>)delegate;
-(CGPoint)contentOffset;
-(UIScrollView *)horizontalScrollView;
@end
