/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, NSString;

@interface SKStarRatingControl : UIControl {

	UIImageView* _backgroundImageView;
	UILabel* _explanationLabel;
	UIImageView* _foregroundImageView;
	CGSize _hitPadding;
	double _starWidth;
	CGPoint _trackingLastPoint;
	CGPoint _trackingStartPoint;
	float _value;

}

@property (nonatomic,copy) NSString * explanationText; 
@property (assign,nonatomic) double starWidth;                      //@synthesize starWidth=_starWidth - In the implementation block
@property (assign,nonatomic) float value; 
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(float)value;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setValue:(float)arg1 ;
-(NSString *)explanationText;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)sizeToFit;
-(void)layoutSubviews;
-(void)setExplanationText:(NSString *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)_foregroundImageClipBounds;
-(id)_newExplanationLabel;
-(void)_updateValueForPoint:(CGPoint)arg1 ;
-(double)starWidth;
-(id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2 ;
-(void)setHitPadding:(CGSize)arg1 ;
-(BOOL)canHandleSwipes;
-(void)setStarWidth:(double)arg1 ;
@end

