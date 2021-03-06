/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol WFRemoteWebSheetViewControllerDelegate;
@interface WFRemoteWebSheetViewController : _UIRemoteViewController {

	id<WFRemoteWebSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFRemoteWebSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<WFRemoteWebSheetViewControllerDelegate>)arg1 ;
-(id<WFRemoteWebSheetViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)webSheetViewControllerContentDidStartLoading;
-(void)webSheetViewControllerContentReadyForPresentation;
-(void)webSheetViewControllerContentDidFinishLoading;
-(void)_setupButtonListener;
@end

