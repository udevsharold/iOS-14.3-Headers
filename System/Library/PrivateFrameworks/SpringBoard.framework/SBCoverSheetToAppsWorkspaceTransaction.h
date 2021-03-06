/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDismissOverlaysAnimationController, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	SBDismissOverlaysAnimationController* _dismissOverlaysAnimationController;
	SBTransientOverlayDismissAllWorkspaceTransaction* _transientOverlayTransaction;
	BOOL _preservesBanners;

}

@property (assign,nonatomic) BOOL preservesBanners;              //@synthesize preservesBanners=_preservesBanners - In the implementation block
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_begin;
-(void)setPreservesBanners:(BOOL)arg1 ;
-(BOOL)preservesBanners;
-(void)_dismissOverlaysIfNeeded;
-(unsigned long long)_dismissOverlaysOptions;
@end

