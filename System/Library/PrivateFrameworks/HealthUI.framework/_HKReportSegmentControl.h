/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UISegmentedControl, UIView, UIControl;

@interface _HKReportSegmentControl : UIView {

	UISegmentedControl* _segmentControl;
	UIView* _dividerView;
	UIControl* _rightControl;

}

@property (nonatomic,readonly) UISegmentedControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
@property (nonatomic,readonly) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,readonly) UIControl * rightControl;                         //@synthesize rightControl=_rightControl - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIView *)dividerView;
-(UISegmentedControl *)segmentControl;
-(void)layoutSubviews;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 dividerColor:(id)arg3 rightControl:(id)arg4 ;
-(UIControl *)rightControl;
@end
