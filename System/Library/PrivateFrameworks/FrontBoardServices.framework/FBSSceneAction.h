/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction {

	FBSScene* _scene;
	FBSSerialQueue* _callOutQueue;

}

@property (nonatomic,retain) FBSScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(void)setScene:(FBSScene *)arg1 ;
-(FBSScene *)scene;
@end

