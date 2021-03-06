/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssistantCallbackUIDelegate
@optional
-(int)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(int)callbackAskUserToChooseFromStringList:(id)arg1 context:(int)arg2 forController:(id)arg3;
-(int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
-(int)callbackAskUserForSetupCode:(int)arg1 isRetry:(BOOL)arg2 forController:(id)arg3;
-(int)callbackAskUserForUncertifiedForController:(id)arg1;

@required
-(void)callbackAskCancel;

@end

