/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class _UIContentUnavailableView, NSString;

@interface AMSUIErrorView : AMSUICommonView {

	_UIContentUnavailableView* _backingView;

}

@property (nonatomic,retain) _UIContentUnavailableView * backingView;              //@synthesize backingView=_backingView - In the implementation block
@property (nonatomic,copy) id buttonAction; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)layoutSubviews;
-(id)buttonAction;
-(void)setButtonAction:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)title;
-(_UIContentUnavailableView *)backingView;
-(void)_handleButtonTap;
-(void)setBackingView:(_UIContentUnavailableView *)arg1 ;
@end
