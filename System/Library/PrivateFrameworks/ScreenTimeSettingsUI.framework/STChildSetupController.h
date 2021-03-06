/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, STRootViewModelCoordinator, STIntroductionController;

@interface STChildSetupController : NSObject {

	/*^block*/id _completionHandler;
	UIViewController* _initialViewController;
	STRootViewModelCoordinator* _coordinator;
	STIntroductionController* _introductionController;

}

@property (nonatomic,retain) STRootViewModelCoordinator * coordinator;                       //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) STIntroductionController * introductionController;              //@synthesize introductionController=_introductionController - In the implementation block
@property (copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) UIViewController * initialViewController;                     //@synthesize initialViewController=_initialViewController - In the implementation block
-(void)setCoordinator:(STRootViewModelCoordinator *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithDSID:(id)arg1 ;
-(STRootViewModelCoordinator *)coordinator;
-(UIViewController *)initialViewController;
-(void)saveValuesForModel:(id)arg1 ;
-(STIntroductionController *)introductionController;
-(void)setIntroductionController:(STIntroductionController *)arg1 ;
@end

