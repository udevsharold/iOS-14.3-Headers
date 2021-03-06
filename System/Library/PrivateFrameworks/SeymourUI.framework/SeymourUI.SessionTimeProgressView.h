/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SeymourUI.SessionTimeProgressView : UIView {

	 presenter;
	 label;
	 ringGroup;
	 ringsView;
	 formatter;
	 behavior;

}

@property (readonly,nonatomic) BOOL accessibilityShowRemaining; 
@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(BOOL)accessibilityShowRemaining;
-(void)accessibilityDidUpdateTimer:(double)arg1 percentage:(float)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

