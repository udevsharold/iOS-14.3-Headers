/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKeyboardArbitrationClient
@required
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_setKeyboardDisabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_setLastEventSource:(long long)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_keyboardIAVChanged:(double)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_getDebugInfoWithCompletion:(/*^block*/id)arg1;
-(void)queue_activeProcessResignWithCompletion:(/*^block*/id)arg1;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1;
-(void)queue_sceneBecameFocused:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;

@end

