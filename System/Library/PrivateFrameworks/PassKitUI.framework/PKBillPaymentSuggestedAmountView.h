/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView {

	CABackdropLayer* _background;
	PKBillPaymentSuggestedAmount* _suggestedAmount;

}

@property (nonatomic,readonly) PKBillPaymentSuggestedAmount * suggestedAmount;              //@synthesize suggestedAmount=_suggestedAmount - In the implementation block
-(id)initWithSuggestedAmount:(id)arg1 ;
-(PKBillPaymentSuggestedAmount *)suggestedAmount;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

