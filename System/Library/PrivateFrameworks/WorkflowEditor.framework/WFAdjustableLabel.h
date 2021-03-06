/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILabel.h>

@protocol WFAdjustableLabelDelegate;
@interface WFAdjustableLabel : UILabel {

	id<WFAdjustableLabelDelegate> _adjustableDelegate;

}

@property (assign,nonatomic) id<WFAdjustableLabelDelegate> adjustableDelegate;              //@synthesize adjustableDelegate=_adjustableDelegate - In the implementation block
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(id<WFAdjustableLabelDelegate>)adjustableDelegate;
-(void)setAdjustableDelegate:(id<WFAdjustableLabelDelegate>)arg1 ;
@end

