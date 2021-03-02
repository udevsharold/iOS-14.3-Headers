/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class NSString;

@interface HUAnnounceSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> delegate;
	unsigned long long _step;

}

@property (nonatomic,readonly) unsigned long long step;                                              //@synthesize step=_step - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(unsigned long long)step;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 step:(unsigned long long)arg2 ;
-(void)continuePressed:(id)arg1 ;
@end
