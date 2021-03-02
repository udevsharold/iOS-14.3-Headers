/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

	long long _barAction;
	double _bias;

}

@property (nonatomic,readonly) long long barAction;              //@synthesize barAction=_barAction - In the implementation block
@property (nonatomic,readonly) double bias;                      //@synthesize bias=_bias - In the implementation block
-(double)bias;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(long long)barAction;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_setDelegate:(id)arg1 ;
@end
