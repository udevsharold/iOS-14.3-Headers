/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@protocol HUDashboardNavigationTitleViewDelegate;
@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView {

	id<HUDashboardNavigationTitleViewDelegate> _delegate;
	double _previousLargeTitleHeight;

}

@property (assign,nonatomic,__weak) id<HUDashboardNavigationTitleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double previousLargeTitleHeight;                                         //@synthesize previousLargeTitleHeight=_previousLargeTitleHeight - In the implementation block
-(void)contentDidChange;
-(id)initWithDelegate:(id)arg1 ;
-(double)previousLargeTitleHeight;
-(void)setDelegate:(id<HUDashboardNavigationTitleViewDelegate>)arg1 ;
-(void)setPreviousLargeTitleHeight:(double)arg1 ;
-(id<HUDashboardNavigationTitleViewDelegate>)delegate;
@end
