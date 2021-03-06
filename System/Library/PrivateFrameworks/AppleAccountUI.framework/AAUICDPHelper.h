/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface AAUICDPHelper : NSObject {

	UIViewController* _presentingViewController;
	BOOL _forceInline;

}

@property (assign,nonatomic) BOOL forceInline;                                                  //@synthesize forceInline=_forceInline - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(id)cdpContextForPrimaryAccount;
+(id)helperWithPresenter:(id)arg1 ;
+(id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1 ;
+(id)cdpContextForAccount:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(id)cdpStateControllerForPrimaryAccount;
-(void)setForceInline:(BOOL)arg1 ;
-(id)cdpStateControllerWithContext:(id)arg1 ;
-(BOOL)forceInline;
@end

