/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBUIPoseidonContainerViewControllerLockStatusProvider.h>
#import <libobjc.A.dylib/SBUIPoseidonContainerViewControllerDelegate.h>

@protocol SBUIBiometricResource, SBFAuthenticationStatusProvider;
@class SBUIPoseidonContainerViewController, UIView, NSString;

@interface CSPoseidonViewController : CSCoverSheetViewControllerBase <SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate> {

	SBUIPoseidonContainerViewController* _poseidonContainerViewController;
	id<SBUIBiometricResource> _biometricResource;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;

}

@property (nonatomic,retain) SBUIPoseidonContainerViewController * poseidonContainerViewController;              //@synthesize poseidonContainerViewController=_poseidonContainerViewController - In the implementation block
@property (nonatomic,retain) id<SBUIBiometricResource> biometricResource;                                        //@synthesize biometricResource=_biometricResource - In the implementation block
@property (nonatomic,retain) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                   //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) UIView * poseidonView; 
@property (nonatomic,readonly) BOOL isBiometricLockedOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)aggregateAppearance:(id)arg1 ;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(BOOL)isBiometricLockedOut;
-(SBUIPoseidonContainerViewController *)poseidonContainerViewController;
-(void)setPoseidonContainerViewController:(SBUIPoseidonContainerViewController *)arg1 ;
-(id<SBUIBiometricResource>)biometricResource;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)poseidonContainerViewControllerCoachingStateDidChange:(id)arg1 ;
-(double)poseidonContainerViewControllerIdleUntilShimmerDuration:(id)arg1 ;
-(double)poseidonContainerViewControllerRestToOpenIdleDuration:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(void)viewDidLoad;
-(UIView *)poseidonView;
@end

