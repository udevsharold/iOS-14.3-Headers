/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBSceneUpdateContext, FBWatchdogTransitionContext, BSAnimationSettings, BKSAnimationFenceHandle, NSSet, BSProcessHandle, BSMutableSettings, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	FBSceneUpdateContext* _updateContext;
	FBWatchdogTransitionContext* _watchdogTransitionContext;
	BOOL _allowCPUThrottling;
	BSAnimationSettings* _animationSettings;
	BKSAnimationFenceHandle* _animationFence;
	NSSet* _actions;
	BSProcessHandle* _originatingProcess;
	BSMutableSettings* _otherSettings;
	BSMutableSettings* _transientLocalClientSettings;

}

@property (nonatomic,retain) FBSceneUpdateContext * updateContext; 
@property (nonatomic,retain) FBWatchdogTransitionContext * watchdogTransitionContext; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                                //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;                             //@synthesize animationFence=_animationFence - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) BSProcessHandle * originatingProcess;                                 //@synthesize originatingProcess=_originatingProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContext;
-(BOOL)isUISubclass;
-(BOOL)_isEmpty;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)transientLocalClientSettings;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSSet *)actions;
-(BKSAnimationFenceHandle *)animationFence;
-(BSProcessHandle *)originatingProcess;
-(id)succinctDescription;
-(BOOL)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOriginatingProcess:(BSProcessHandle *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setActions:(NSSet *)arg1 ;
-(id)otherSettings;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
@end

