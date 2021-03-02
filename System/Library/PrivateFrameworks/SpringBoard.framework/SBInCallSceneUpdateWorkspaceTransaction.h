/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {

	SBApplicationSceneEntity* _applicationSceneEntity;
	/*^block*/id _postSceneUpdateHandler;

}

@property (nonatomic,copy) id postSceneUpdateHandler;              //@synthesize postSceneUpdateHandler=_postSceneUpdateHandler - In the implementation block
-(id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 ;
-(void)_begin;
-(void)setPostSceneUpdateHandler:(id)arg1 ;
-(id)postSceneUpdateHandler;
@end
