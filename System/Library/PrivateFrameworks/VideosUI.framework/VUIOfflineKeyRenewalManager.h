/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIStoreFPSKeyLoaderDelegate.h>
#import <libobjc.A.dylib/TVPDownloadDelegate.h>

@class TVPStateMachine, NSMutableArray, NSTimer, TVPContentKeySession, NSString;

@interface VUIOfflineKeyRenewalManager : NSObject <VUIStoreFPSKeyLoaderDelegate, TVPDownloadDelegate> {

	BOOL _networkErrorOccurredDuringInvalidation;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _keyLoaders;
	NSTimer* _keyRenewalTimer;
	NSTimer* _expirationTimer;
	TVPContentKeySession* _contentKeySession;
	unsigned long long _backgroundTaskIdentifier;
	NSMutableArray* _downloadsForRepairingKeys;

}

@property (nonatomic,retain) TVPStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyLoaders;                              //@synthesize keyLoaders=_keyLoaders - In the implementation block
@property (assign,nonatomic) BOOL networkErrorOccurredDuringInvalidation;              //@synthesize networkErrorOccurredDuringInvalidation=_networkErrorOccurredDuringInvalidation - In the implementation block
@property (nonatomic,retain) NSTimer * keyRenewalTimer;                                //@synthesize keyRenewalTimer=_keyRenewalTimer - In the implementation block
@property (nonatomic,retain) NSTimer * expirationTimer;                                //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) TVPContentKeySession * contentKeySession;                 //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadsForRepairingKeys;               //@synthesize downloadsForRepairingKeys=_downloadsForRepairingKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(TVPStateMachine *)stateMachine;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(TVPContentKeySession *)contentKeySession;
-(unsigned long long)backgroundTaskIdentifier;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)setContentKeySession:(TVPContentKeySession *)arg1 ;
-(void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3 ;
-(void)updateKeyRenewalAndExpiration;
-(void)_registerStateMachineHandlers;
-(void)_networkReachbilityDidChange:(id)arg1 ;
-(NSMutableArray *)keyLoaders;
-(void)setNetworkErrorOccurredDuringInvalidation:(BOOL)arg1 ;
-(BOOL)networkErrorOccurredDuringInvalidation;
-(void)setKeyLoaders:(NSMutableArray *)arg1 ;
-(void)download:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(void)_isPlaybackUIBeingShownDidChange:(id)arg1 ;
-(void)_expirationTimerDidFire:(id)arg1 ;
-(NSMutableArray *)downloadsForRepairingKeys;
-(void)setKeyRenewalTimer:(NSTimer *)arg1 ;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
-(void)_sendRenewalRequestForFirstArray:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSTimer *)expirationTimer;
-(void)_fetchNewKeysForVideosWithBrokenKeys:(id)arg1 ;
-(NSTimer *)keyRenewalTimer;
-(void)_renewalTimerDidFire:(id)arg1 ;
-(void)setDownloadsForRepairingKeys:(NSMutableArray *)arg1 ;
@end
