/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HUHomeControlInterface.h>

@protocol HUCCRemoteDashboardDelegate;
@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface> {

	id<HUCCRemoteDashboardDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCCRemoteDashboardDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<HUCCRemoteDashboardDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id<HUCCRemoteDashboardDelegate>)delegate;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)authorizeIfLocked;
@end

