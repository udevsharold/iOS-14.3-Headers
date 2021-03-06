/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAnimatablePropertyBase.h>

@class UIAnimatableProperty, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase {

	BOOL _performingInterpolationBetweenTwoStates;
	UIAnimatableProperty* _animatableProperty;

}

@property (nonatomic,retain) UIAnimatableProperty * animatableProperty;                       //@synthesize animatableProperty=_animatableProperty - In the implementation block
@property (nonatomic,retain) _UIViewAnimatablePropertyTransformer * transformer; 
@property (assign,nonatomic) BOOL performingInterpolationBetweenTwoStates;                    //@synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates - In the implementation block
@property (assign,nonatomic) double value; 
@property (nonatomic,readonly) double presentationValue; 
@property (assign,nonatomic) double velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(void)setVelocity:(double)arg1 ;
-(void)setPerformingInterpolationBetweenTwoStates:(BOOL)arg1 ;
-(double)value;
-(id)init;
-(UIAnimatableProperty *)animatableProperty;
-(double)presentationValue;
-(void)dealloc;
-(void)setValue:(double)arg1 ;
-(void)setTransformer:(_UIViewAnimatablePropertyTransformer *)arg1 ;
-(BOOL)performingInterpolationBetweenTwoStates;
-(double)velocity;
-(BOOL)isInvalidated;
-(_UIViewAnimatablePropertyTransformer *)transformer;
-(void)setAnimatableProperty:(UIAnimatableProperty *)arg1 ;
-(void)invalidate;
@end

