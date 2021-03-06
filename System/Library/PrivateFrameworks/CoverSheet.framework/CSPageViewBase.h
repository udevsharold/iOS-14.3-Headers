/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewBase.h>
#import <libobjc.A.dylib/CSPageView.h>

@protocol CSPageViewControllerProtocol;
@class UIViewController;

@interface CSPageViewBase : CSCoverSheetViewBase <CSPageView> {

	UIViewController*<CSPageViewControllerProtocol> _pageViewController;
	double _contentWidth;

}

@property (assign,nonatomic,__weak) UIViewController*<CSPageViewControllerProtocol> pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
@property (assign,nonatomic) double contentWidth;                                                                    //@synthesize contentWidth=_contentWidth - In the implementation block
-(double)contentWidth;
-(void)setContentWidth:(double)arg1 ;
-(UIViewController*<CSPageViewControllerProtocol>)pageViewController;
-(void)setPageViewController:(UIViewController*<CSPageViewControllerProtocol>)arg1 ;
@end

