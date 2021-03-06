/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIView;

@interface AMSUIWebViewImageWrapper : AMSUICommonView {

	UIView* _view;
	double _inset;

}

@property (nonatomic,retain) UIView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double inset;               //@synthesize inset=_inset - In the implementation block
-(double)inset;
-(CGSize)intrinsicContentSize;
-(UIView *)view;
-(void)setInset:(double)arg1 ;
-(void)layoutSubviews;
-(void)setView:(UIView *)arg1 ;
-(id)initWithView:(id)arg1 topInset:(double)arg2 ;
@end

