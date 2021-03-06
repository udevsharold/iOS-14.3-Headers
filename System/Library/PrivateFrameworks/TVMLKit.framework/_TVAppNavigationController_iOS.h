/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVAppNavigationController.h>

@interface _TVAppNavigationController_iOS : _TVAppNavigationController {

	BOOL _shouldFakeStatusBarVisible;
	BOOL _shouldPreventContentFromShiftingVertically;
	BOOL _originalValueForNavigationBarForceFullHeightInLandscape;

}

@property (assign,nonatomic) BOOL shouldFakeStatusBarVisible;                                           //@synthesize shouldFakeStatusBarVisible=_shouldFakeStatusBarVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventContentFromShiftingVertically;                           //@synthesize shouldPreventContentFromShiftingVertically=_shouldPreventContentFromShiftingVertically - In the implementation block
@property (assign,nonatomic) BOOL originalValueForNavigationBarForceFullHeightInLandscape;              //@synthesize originalValueForNavigationBarForceFullHeightInLandscape=_originalValueForNavigationBarForceFullHeightInLandscape - In the implementation block
-(long long)preferredStatusBarStyle;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(void)willPresentTraitsOverridingViewController;
-(void)didPresentTraitsOverridingViewController;
-(void)setShouldPreventContentFromShiftingVertically:(BOOL)arg1 ;
-(void)setOriginalValueForNavigationBarForceFullHeightInLandscape:(BOOL)arg1 ;
-(void)setShouldFakeStatusBarVisible:(BOOL)arg1 ;
-(BOOL)originalValueForNavigationBarForceFullHeightInLandscape;
-(BOOL)shouldPreventContentFromShiftingVertically;
-(BOOL)shouldFakeStatusBarVisible;
@end

