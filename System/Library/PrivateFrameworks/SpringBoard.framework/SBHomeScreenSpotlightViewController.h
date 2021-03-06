/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@protocol SBHomeScreenSpotlightDismissalDelegate;
@class FBDisplayLayoutElement;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController {

	id<SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
	FBDisplayLayoutElement* _displayLayoutElement;

}

@property (nonatomic,__weak,readonly) id<SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate;              //@synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate - In the implementation block
@property (nonatomic,readonly) FBDisplayLayoutElement * displayLayoutElement;                                              //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
-(unsigned long long)level;
-(id<SBHomeScreenSpotlightDismissalDelegate>)homescreenSpotlightDelegate;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned long long)remoteSearchViewPresentationSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
@end

