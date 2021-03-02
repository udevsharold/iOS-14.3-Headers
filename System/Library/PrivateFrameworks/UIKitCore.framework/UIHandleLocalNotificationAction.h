/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class UILocalNotification, NSString, NSDictionary;

@interface UIHandleLocalNotificationAction : BSAction

@property (nonatomic,copy,readonly) UILocalNotification * notification; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSDictionary * userResponse; 
-(UILocalNotification *)notification;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithNotification:(id)arg1 ;
-(id)initWithNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSString *)action;
-(NSDictionary *)userResponse;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(long long)UIActionType;
@end
