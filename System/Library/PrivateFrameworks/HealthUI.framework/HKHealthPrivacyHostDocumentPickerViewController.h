/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostDocumentPickerViewControllerDelegate;
@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<HKHealthPrivacyServiceRemoteDocumentPickerViewController> _healthPrivacyServiceViewControllerProxy; 
@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate>)arg1 ;
-(id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate>)delegate;
-(void)setPromptSession:(id)arg1 ;
-(id<HKHealthPrivacyServiceRemoteDocumentPickerViewController>)_healthPrivacyServiceViewControllerProxy;
@end
