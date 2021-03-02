/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPredictiveViewController.h>

@class NSArray, UIView, NSString;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController> {

	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                          //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) NSArray * displayedCandidates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hidesExpandableButton;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(NSArray *)displayedCandidates;
-(void)setCustomView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIView *)customView;
-(BOOL)_canShowWhileLocked;
@end
