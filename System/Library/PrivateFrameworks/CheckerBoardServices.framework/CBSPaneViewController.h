/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CheckerBoardServices/CBSTableViewController.h>

@class UIButton;

@interface CBSPaneViewController : CBSTableViewController {

	UIButton* _primaryButton;
	UIButton* _secondaryButton;

}

@property (nonatomic,retain) UIButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setPrimaryButton:(UIButton *)arg1 ;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)primaryButtonText;
-(void)_setupPrimaryButton;
-(void)_setupSecondaryButton;
-(void)primaryButtonTapped:(id)arg1 ;
-(id)secondaryButtonText;
-(void)secondaryButtonTapped:(id)arg1 ;
@end

