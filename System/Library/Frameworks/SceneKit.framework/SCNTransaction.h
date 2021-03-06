/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTransaction : NSObject
+(void)begin;
+(void)setAnimationDuration:(double)arg1 ;
+(double)animationDuration;
+(void)unlock;
+(unsigned)currentState;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)flush;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)commit;
+(id)valueForKey:(id)arg1 ;
+(void)lock;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(BOOL)immediateMode;
+(void)setImmediateMode:(BOOL)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)commitImmediate;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)setImmediateModeRestrictedContext:(C3DSceneRef)arg1 ;
+(C3DSceneRef)immediateModeRestrictedContext;
+(void)checkUncommittedTransactions;
-(void)begin;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
-(void)unlock;
-(BOOL)disableActions;
-(void)setDisableActions:(BOOL)arg1 ;
-(void)flush;
-(void)commit;
-(void)lock;
-(id)animationTimingFunction;
-(void)setAnimationTimingFunction:(id)arg1 ;
@end

