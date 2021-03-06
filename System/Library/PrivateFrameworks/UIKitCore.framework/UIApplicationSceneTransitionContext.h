/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (assign,setter=_setLifecycleActionType:,getter=_lifecycleActionType,nonatomic) unsigned long long lifecycleActionType; 
@property (nonatomic,retain) NSDictionary * payload; 
@property (assign,nonatomic) BOOL forTesting; 
@property (assign,nonatomic) BOOL safeMode; 
@property (assign,nonatomic) double userLaunchEventTime; 
@property (assign,nonatomic) double execTime; 
@property (assign,nonatomic) unsigned long long signpostID; 
@property (assign,nonatomic) BOOL shouldTakeKeyboardFocus; 
@property (assign,nonatomic) BOOL waitForBackgroundTaskCompletion; 
@property (assign,nonatomic) long long statusBarAnimation; 
@property (assign,nonatomic) BOOL disableTouchCancellationOnRotation; 
-(void)setSignpostID:(unsigned long long)arg1 ;
-(void)setForTesting:(BOOL)arg1 ;
-(unsigned long long)signpostID;
-(void)setStatusBarAnimation:(long long)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)safeMode;
-(void)setShouldTakeKeyboardFocus:(BOOL)arg1 ;
-(void)setExecTime:(double)arg1 ;
-(double)execTime;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)setSafeMode:(BOOL)arg1 ;
-(BOOL)shouldTakeKeyboardFocus;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(void)setDisableTouchCancellationOnRotation:(BOOL)arg1 ;
-(double)userLaunchEventTime;
-(BOOL)disableTouchCancellationOnRotation;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(BOOL)forTesting;
-(void)_setLifecycleActionType:(unsigned long long)arg1 ;
-(unsigned long long)_lifecycleActionType;
-(BOOL)isUISubclass;
-(long long)statusBarAnimation;
-(BOOL)waitForBackgroundTaskCompletion;
-(void)setWaitForBackgroundTaskCompletion:(BOOL)arg1 ;
@end

