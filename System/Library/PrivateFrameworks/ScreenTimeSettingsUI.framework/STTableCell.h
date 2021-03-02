/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILayoutGuide, NSMutableArray, UIViewController, NSArray;

@interface STTableCell : PSTableCell {

	UILayoutGuide* _contentLayoutGuide;
	NSMutableArray* _childViewControllers;
	UIViewController* _parentViewController;
	NSArray* _rtlContentLayoutGuideConstraints;

}

@property (nonatomic,copy) NSArray * rtlContentLayoutGuideConstraints;              //@synthesize rtlContentLayoutGuideConstraints=_rtlContentLayoutGuideConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                  //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
@property (readonly) NSMutableArray * childViewControllers;                         //@synthesize childViewControllers=_childViewControllers - In the implementation block
@property (__weak) UIViewController * parentViewController;                         //@synthesize parentViewController=_parentViewController - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)canReload;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(NSMutableArray *)childViewControllers;
-(UILayoutGuide *)contentLayoutGuide;
-(NSArray *)rtlContentLayoutGuideConstraints;
-(void)setRtlContentLayoutGuideConstraints:(NSArray *)arg1 ;
@end
