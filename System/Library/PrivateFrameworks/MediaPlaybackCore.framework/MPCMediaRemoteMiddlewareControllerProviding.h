/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPCFuture, MPCMediaRemoteController;


@protocol MPCMediaRemoteMiddlewareControllerProviding <NSObject>
@property (nonatomic,readonly) MPCFuture * controllerFuture; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller; 
@required
-(MPCMediaRemoteController *)controller;
-(MPCFuture *)controllerFuture;

@end

