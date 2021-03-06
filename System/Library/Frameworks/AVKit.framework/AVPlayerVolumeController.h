/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVVolumeController.h>

@class AVPlayerController, AVObservationController, NSString;

@interface AVPlayerVolumeController : NSObject <AVVolumeController> {

	BOOL _changingVolume;
	AVPlayerController* _playerController;
	AVObservationController* _keyValueObservationController;

}

@property (assign,getter=isChangingVolume,nonatomic) BOOL changingVolume;                          //@synthesize changingVolume=_changingVolume - In the implementation block
@property (nonatomic,retain) AVObservationController * keyValueObservationController;              //@synthesize keyValueObservationController=_keyValueObservationController - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) float effectiveVolumeLimit; 
@property (nonatomic,readonly) BOOL currentRouteHasVolumeControl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)volumeController;
-(float)volume;
-(id)init;
-(void)dealloc;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(float)effectiveVolumeLimit;
-(BOOL)currentRouteHasVolumeControl;
-(void)endChangingVolume;
-(void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(BOOL)arg2 forWindowSceneSessionWithIdentifier:(id)arg3 ;
-(void)beginChangingVolumeForWindowSceneSessionID:(id)arg1 ;
-(void)setTargetVolume:(float)arg1 ;
-(BOOL)isChangingVolume;
-(void)setChangingVolume:(BOOL)arg1 ;
-(AVObservationController *)keyValueObservationController;
-(void)setKeyValueObservationController:(AVObservationController *)arg1 ;
@end

