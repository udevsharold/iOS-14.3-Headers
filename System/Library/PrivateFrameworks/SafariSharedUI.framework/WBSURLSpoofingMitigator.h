/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _WKUserInitiatedAction, NSTimer;

@interface WBSURLSpoofingMitigator : NSObject {

	NSDate* _dateOfLastSuspiciousProvisionalNavigationInterruption;
	unsigned long long _recentlyInterruptedNavigationCount;
	_WKUserInitiatedAction* _userInitiatedAction;
	NSTimer* _timerForRevertingToCommittedURL;
	BOOL _hasCommittedChromeInitiatedLoad;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
	long long _navigationSource;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
@property (assign,nonatomic) long long navigationSource;                                         //@synthesize navigationSource=_navigationSource - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(long long)navigationSource;
-(void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1 ;
-(void)willStartNewBrowserChromeInitiatedNavigation;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)didCommitNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(void)setNavigationSource:(long long)arg1 ;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
@end

