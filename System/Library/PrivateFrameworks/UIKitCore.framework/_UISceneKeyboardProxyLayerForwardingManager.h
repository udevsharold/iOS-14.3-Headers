/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneObserver.h>

@class NSMapTable, FBSSceneClientSettingsDiffInspector, NSString;

@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <FBSceneObserver> {

	NSMapTable* _mapSceneToKeyboardForwardingStateMachine;
	FBSSceneClientSettingsDiffInspector* _layersChangedClientSettingsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsForwardingKeyboardLayers;
+(id)sharedInstance;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)init;
-(void)sceneDidInvalidate:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)_init;
-(id)succinctDescriptionBuilder;
-(void)trackScene:(id)arg1 ;
-(id)_newStateMachineWithScene:(id)arg1 ;
-(void)_updateKeyboardLayersForScene:(id)arg1 ;
-(void)scene:(id)arg1 willPrioritizePresenter:(id)arg2 ;
-(id)_stateMachineForScene:(id)arg1 ;
-(NSString *)debugDescription;
@end

