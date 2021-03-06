/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACM2SVTrustedDevicesViewControllerDelegate.h>
#import <libobjc.A.dylib/ACM2SVCodeVerificationViewControllerDelegate.h>
#import <libobjc.A.dylib/ACC2SVAuthenticationUIControllerProtocol.h>

@protocol ACC2SVAuthenticationUIControllerDelegate;
@class UIViewController, ACM2SVTrustedDevicesViewController, ACM2SVCodeVerificationViewController, UIColor, NSString;

@interface ACM2SVAuthenticationUIController : NSObject <ACM2SVTrustedDevicesViewControllerDelegate, ACM2SVCodeVerificationViewControllerDelegate, ACC2SVAuthenticationUIControllerProtocol> {

	id<ACC2SVAuthenticationUIControllerDelegate> _delegate;
	UIViewController* _parentViewController;
	ACM2SVTrustedDevicesViewController* _trustedDevicesViewController;
	ACM2SVCodeVerificationViewController* _codeVerificationViewController;

}

@property (nonatomic,retain) ACM2SVTrustedDevicesViewController * trustedDevicesViewController;                  //@synthesize trustedDevicesViewController=_trustedDevicesViewController - In the implementation block
@property (nonatomic,retain) ACM2SVCodeVerificationViewController * codeVerificationViewController;              //@synthesize codeVerificationViewController=_codeVerificationViewController - In the implementation block
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * labelTextColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) long long keyboardAppearance; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,retain) UIViewController * parentViewController;                                            //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<ACC2SVAuthenticationUIControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(long long)keyboardAppearance;
-(UIColor *)textColor;
-(void)dealloc;
-(long long)statusBarStyle;
-(UIColor *)tintColor;
-(UIColor *)labelTextColor;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<ACC2SVAuthenticationUIControllerDelegate>)arg1 ;
-(UIColor *)backgroundColor;
-(id<ACC2SVAuthenticationUIControllerDelegate>)delegate;
-(id)initWithParentViewController:(id)arg1 ;
-(ACM2SVTrustedDevicesViewController *)trustedDevicesViewController;
-(void)setTrustedDevicesViewController:(ACM2SVTrustedDevicesViewController *)arg1 ;
-(ACM2SVCodeVerificationViewController *)codeVerificationViewController;
-(void)setCodeVerificationViewController:(ACM2SVCodeVerificationViewController *)arg1 ;
-(void)hideEnterVerificationCodeViewControllerAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)hideTrustedDevicesViewControllerAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)trustedDevicesViewControllerNeedsRefresh:(id)arg1 ;
-(void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(id)arg1 ;
-(void)downloadImageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelInProgressImageDownloads;
-(void)codeVerificationViewControllerNeedsResendCode:(id)arg1 ;
-(void)hideUIAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleFailoverWithCompletion:(/*^block*/id)arg1 ;
-(void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)chooseTrustedDeviceWithDeviceList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetTrustedDevicesViewControllerWithDeviceList:(id)arg1 ;
-(void)resetCodeVerificationViewController;
-(void)showAlertWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

