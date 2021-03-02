/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBApplication, FBScene, FBSDisplayIdentity, FBSSceneDefinition;

@interface SBApplicationSceneHandleRequest : NSObject {

	SBApplication* _application;
	FBScene* _existingScene;
	FBSDisplayIdentity* _displayIdentity;
	FBSSceneDefinition* _sceneDefinition;

}

@property (nonatomic,retain) SBApplication * application;                       //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) FBScene * existingScene;                           //@synthesize existingScene=_existingScene - In the implementation block
@property (nonatomic,retain) FBSDisplayIdentity * displayIdentity;              //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (nonatomic,copy) FBSSceneDefinition * sceneDefinition;                //@synthesize sceneDefinition=_sceneDefinition - In the implementation block
+(id)defaultRequestForApplication:(id)arg1 sceneIdentity:(id)arg2 displayIdentity:(id)arg3 ;
-(FBScene *)existingScene;
-(FBSSceneDefinition *)sceneDefinition;
-(FBSDisplayIdentity *)displayIdentity;
-(SBApplication *)application;
-(id)initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3 ;
-(void)setApplication:(SBApplication *)arg1 ;
-(void)setExistingScene:(FBScene *)arg1 ;
-(void)setDisplayIdentity:(FBSDisplayIdentity *)arg1 ;
-(void)setSceneDefinition:(FBSSceneDefinition *)arg1 ;
@end
