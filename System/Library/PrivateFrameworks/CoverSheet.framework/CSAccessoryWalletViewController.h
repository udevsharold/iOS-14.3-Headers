/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSAccessoryViewController.h>

@class CSAccessoryWalletView;

@interface CSAccessoryWalletViewController : CSAccessoryViewController {

	BOOL _isAnimatingPresentation;
	CSAccessoryWalletView* _walletView;

}

@property (nonatomic,retain) CSAccessoryWalletView * walletView;              //@synthesize walletView=_walletView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingPresentation;                    //@synthesize isAnimatingPresentation=_isAnimatingPresentation - In the implementation block
-(id)accessoryView;
-(void)setIsAnimatingPresentation:(BOOL)arg1 ;
-(BOOL)isAnimatingPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)viewDidLoad;
-(double)animationDurationBeforeDismissal;
-(CSAccessoryWalletView *)walletView;
-(void)setWalletView:(CSAccessoryWalletView *)arg1 ;
@end
