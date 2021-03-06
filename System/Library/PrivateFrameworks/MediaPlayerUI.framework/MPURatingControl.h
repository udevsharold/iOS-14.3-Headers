/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol MPURatingControlDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray;

@interface MPURatingControl : UIControl {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSMutableArray* _imageViews;
	id<MPURatingControlDelegate> _delegate;
	double _rating;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MPURatingControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                            //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) double rating;                                             //@synthesize rating=_rating - In the implementation block
+(id)ratingStarImage;
+(id)ratingDotImage;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)_handlePanGesture:(id)arg1 ;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)rating;
-(void)viewDidMoveToSuperview;
-(void)setDelegate:(id<MPURatingControlDelegate>)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MPURatingControlDelegate>)delegate;
-(void)setRating:(double)arg1 ;
-(void)_updateImageViewsForRatingAnimated:(BOOL)arg1 ;
-(double)ratingValueForLocationInView:(CGPoint)arg1 ;
-(void)setRating:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateImageView:(id)arg1 proposedImage:(id)arg2 filled:(BOOL)arg3 ;
@end

