/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject {

	AAUIServerUIHookHandler* _serverHookHandler;
	ACAccount* _account;

}
-(id)initWithRemoteUIController:(id)arg1 ;
-(void)setPresentingController:(id)arg1 ;
-(id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)attachAllHandlers;
-(void)attachRecoveryKeyHandler:(/*^block*/id)arg1 ;
-(void)attachPasscodeHandler:(/*^block*/id)arg1 ;
-(void)attachRepairHandler:(/*^block*/id)arg1 ;
-(void)attachAuthHandler:(/*^block*/id)arg1 ;
-(void)processObjectModel:(id)arg1 isModal:(BOOL)arg2 ;
@end

