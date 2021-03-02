/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKSpendingSummaryFooter;
@class _UIBackdropView, UIView;

@interface PKSpendingSummaryFooterContainer : UIView {

	long long _backdropStyle;
	_UIBackdropView* _backdropView;
	UIView* _topSeparatorView;
	UIView*<PKSpendingSummaryFooter> _currentFooter;
	UIView*<PKSpendingSummaryFooter> _nextFooter;

}

@property (nonatomic,retain) UIView*<PKSpendingSummaryFooter> currentFooter;              //@synthesize currentFooter=_currentFooter - In the implementation block
@property (nonatomic,retain) UIView*<PKSpendingSummaryFooter> nextFooter;                 //@synthesize nextFooter=_nextFooter - In the implementation block
-(void)setCurrentFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(void)setNextFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)preferredBackdropStyle;
-(UIView*<PKSpendingSummaryFooter>)currentFooter;
-(void)setTransitionProgress:(double)arg1 ;
-(UIView*<PKSpendingSummaryFooter>)nextFooter;
@end
