/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpaceUI.framework/CTCarrierSpaceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface LoadingIndicatorViewController : UIViewController {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIActivityIndicatorView* _spinnerView;
	NSString* _titleText;
	NSString* _messageText;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (__weak) UIActivityIndicatorView * spinnerView;                //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * messageText;                     //@synthesize messageText=_messageText - In the implementation block
-(NSString *)messageText;
-(id)init;
-(void)dealloc;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
@end
