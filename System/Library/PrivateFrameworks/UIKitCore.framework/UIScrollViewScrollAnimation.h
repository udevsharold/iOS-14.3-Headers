/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAnimation.h>

@class CABasicAnimation;

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	BOOL _targetOffsetValidAtStart;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;
	CABasicAnimation* _customAnimation;
	BOOL _forDiscreteScroll;
	BOOL _beingReplacedForDiscreteScroll;

}
-(void)dealloc;
-(float)progressForFraction:(float)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
@end
