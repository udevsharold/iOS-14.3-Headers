/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/FBSDisplayObserving.h>
#import <libobjc.A.dylib/SBAVSystemControllerCacheObserver.h>

@class NSDictionary, NSTimer, SBApplication, MPAVRoutingController, SBAVSystemControllerCache, SBVolumeControl, NSNumber, NSDate, SBSStatusBarStyleOverridesAssertion, SBDirectToAirPlayController, NSString;

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate, FBSDisplayObserving, SBAVSystemControllerCacheObserver> {

	int _manualVolumeChangeCount;
	NSDictionary* _nowPlayingInfo;
	float _pendingVolumeChange;
	NSTimer* _volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	SBApplication* _lastNowPlayingApplication;
	BOOL _lastNowPlayingAppIsPlaying;
	int _lastMediaRemoteAppActivityStatus;
	BOOL _suppressHUD;
	BOOL _screenSharingViaAVSystemController;
	BOOL _screenSharingViaDisplayMonitor;
	BOOL _screenSharingSetsStatusBarOverride;
	NSTimer* _screenSharingStatusBarOverrideTimer;
	NSTimer* _videoOutStatusBarOverrideTimer;
	MPAVRoutingController* _routingController;
	SBAVSystemControllerCache* _avCache;
	SBVolumeControl* _volumeControl;
	NSNumber* _audioCategoryMusicVolume;
	NSDate* _lastActivityDate;
	SBSStatusBarStyleOverridesAssertion* _screenSharingStatusBarStyleOverrideAssertion;
	SBSStatusBarStyleOverridesAssertion* _videoOutStatusBarStyleOverrideAssertion;
	SBDirectToAirPlayController* _directToAirPlayController;
	IONotificationPortRef _arubaDisplayPortNotificationPort;
	int _nowPlayingProcessPID;

}

@property (assign,nonatomic) int nowPlayingProcessPID;                                    //@synthesize nowPlayingProcessPID=_nowPlayingProcessPID - In the implementation block
@property (nonatomic,__weak,readonly) SBApplication * nowPlayingApplication; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (assign) BOOL suppressHUD; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)sendResetPlaybackTimeoutCommand;
+(BOOL)applicationCanBeConsideredNowPlaying:(id)arg1 ;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)setNowPlayingInfo:(id)arg1 ;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1 ;
-(void)setSuppressHUD:(BOOL)arg1 ;
-(BOOL)suppressHUD;
-(id)init;
-(void)_authenticationStateChanged:(id)arg1 ;
-(int)nowPlayingProcessPID;
-(NSDate *)lastActivityDate;
-(BOOL)pauseForEventSource:(long long)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(BOOL)stopForEventSource:(long long)arg1 ;
-(id)_nowPlayingInfo;
-(void)dealloc;
-(BOOL)likeTrackForEventSource:(long long)arg1 ;
-(BOOL)isPlaying;
-(SBApplication *)nowPlayingApplication;
-(void)_applicationActivityStatusDidChange:(id)arg1 ;
-(void)_clearScreenSharingStatusBarStyleOverride;
-(void)updateScreenSharingStatusBarStyleOverride;
-(BOOL)toggleRepeatForEventSource:(long long)arg1 ;
-(BOOL)addTrackToWishListForEventSource:(long long)arg1 ;
-(BOOL)isScreenSharing;
-(void)cancelVolumeEvent;
-(BOOL)banTrackForEventSource:(long long)arg1 ;
-(id)nameOfPickedRoute;
-(void)cache:(id)arg1 didUpdateAirplayDisplayActive:(BOOL)arg2 ;
-(BOOL)isPaused;
-(void)setNowPlayingProcessPID:(int)arg1 ;
-(void)_notifyThatScreenSharingChanged;
-(void)_startVideoOutStatusBarStyleOverride;
-(void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1 ;
-(void)_nowPlayingAppDidExit:(id)arg1 ;
-(BOOL)endSeek:(int)arg1 eventSource:(long long)arg2 ;
-(void)cacheDidRebuildAfterServerDeath:(id)arg1 ;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(BOOL)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)isFirstTrack;
-(void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1 ;
-(void)_updateAVRoutes;
-(void)_updateLastRecentActivityDate;
-(BOOL)togglePlayPauseForEventSource:(long long)arg1 ;
-(void)_clearVideoOutStatusBarStyleOverride;
-(BOOL)isApplicationActivityActive;
-(BOOL)_displayMonitorHasAConnectedExternalIdentity;
-(void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1 ;
-(BOOL)isLastTrack;
-(void)_setNowPlayingApplication:(id)arg1 ;
-(BOOL)_sendMediaCommand:(unsigned)arg1 options:(id)arg2 ;
-(BOOL)handsetRouteIsSelected;
-(BOOL)beginSeek:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)changeTrack:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)wirelessDisplayRouteIsPicked;
-(BOOL)volumeControlIsAvailable;
-(BOOL)toggleShuffleForEventSource:(long long)arg1 ;
-(BOOL)hasTrack;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(BOOL)playForEventSource:(long long)arg1 ;
-(void)_updateDisplayMonitorState;
@end
