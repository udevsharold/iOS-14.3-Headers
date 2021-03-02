/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKLockStatusObserver;
@class NSString, GKEventEmitter;

@interface GKDevice : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;
	NSString* _gameKitVersion;
	BOOL _gameKitAvailable;
	GKEventEmitter*<GKLockStatusObserver> _emitter;

}

@property (nonatomic,retain) GKEventEmitter*<GKLockStatusObserver> emitter;                  //@synthesize emitter=_emitter - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * udid; 
@property (nonatomic,readonly) NSString * osVersion;                                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                                      //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * gameKitVersion;                                    //@synthesize gameKitVersion=_gameKitVersion - In the implementation block
@property (getter=isGameKitAvailable,nonatomic,readonly) BOOL gameKitAvailable;              //@synthesize gameKitAvailable=_gameKitAvailable - In the implementation block
+(id)currentDevice;
-(NSString *)buildVersion;
-(NSString *)udid;
-(id)userAgent;
-(NSString *)deviceName;
-(id)storeUserAgent;
-(void)removeLockStatusObserver:(id)arg1 ;
-(NSString *)gameKitVersion;
-(NSString *)osVersion;
-(id)init;
-(void)stopObservingKeyBagStatus;
-(id)platformBuildVersion;
-(BOOL)isFocusDevice;
-(void)dealloc;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)_initPlatform;
-(id)protocolVersionHeader;
-(void)beginObservingKeyBagStatusWithCallback:(/*function pointer*/void*)arg1 ;
-(BOOL)isProductType:(unsigned)arg1 ;
-(id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2 ;
-(BOOL)isGameKitAvailable;
-(BOOL)isDevelopmentDevice;
-(void)setEmitter:(GKEventEmitter*<GKLockStatusObserver>)arg1 ;
-(id)buildVersionHeader;
-(void)addLockStatusObserver:(id)arg1 ;
-(id)_platformUDID;
-(GKEventEmitter*<GKLockStatusObserver>)emitter;
-(id)processNameHeader;
@end
