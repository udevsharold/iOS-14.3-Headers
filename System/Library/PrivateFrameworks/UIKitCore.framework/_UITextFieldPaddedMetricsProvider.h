/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldMetricsProvider.h>

@class NSString;

@interface _UITextFieldPaddedMetricsProvider : NSObject <_UITextFieldMetricsProvider> {

	BOOL _canIntrinsicHeightExceedContentHeight;
	double _minimumIntrinsicHeight;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) double minimumIntrinsicHeight;                           //@synthesize minimumIntrinsicHeight=_minimumIntrinsicHeight - In the implementation block
@property (assign,nonatomic) BOOL canIntrinsicHeightExceedContentHeight;              //@synthesize canIntrinsicHeightExceedContentHeight=_canIntrinsicHeightExceedContentHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                    //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) BOOL shouldExtendCaretHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIEdgeInsets)padding;
-(double)minimumIntrinsicHeight;
-(CGRect)contentFrameForBounds:(CGRect)arg1 ;
-(CGSize)intrinsicSizeForContentSize:(CGSize)arg1 ;
-(BOOL)shouldExtendCaretHeight;
-(id)initWithSymmetricalPadding:(CGSize)arg1 ;
-(void)setMinimumIntrinsicHeight:(double)arg1 ;
-(BOOL)canIntrinsicHeightExceedContentHeight;
-(void)setCanIntrinsicHeightExceedContentHeight:(BOOL)arg1 ;
-(id)initWithPerEdgePadding:(UIEdgeInsets)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
@end

