/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol.h>

@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;
@class NSString;

@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol> {

	id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)passcodeViewControllerDidCancel;
-(void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>)delegate;
@end
