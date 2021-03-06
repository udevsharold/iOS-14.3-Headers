/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/CLSClientDelegate.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking> {

	os_unfair_recursive_lock_s _lock;
	NSXPCConnection* _serverConnection;
	NSXPCListenerEndpoint* _endpoint;
	BOOL _connectionBorked;
	BOOL _interrupted;
	int _progressdAvailableToken;
	int _devModeChangedToken;
	NSString* _overrideBundleIdentifier;
	/*^block*/id _onInterupt;
	/*^block*/id _onConnect;

}

@property (nonatomic,copy) NSString * overrideBundleIdentifier;              //@synthesize overrideBundleIdentifier=_overrideBundleIdentifier - In the implementation block
@property (nonatomic,copy) id onInterupt;                                    //@synthesize onInterupt=_onInterupt - In the implementation block
@property (nonatomic,copy) id onConnect;                                     //@synthesize onConnect=_onConnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAllowedToMakeXPCCalls;
+(id)sharedInstance;
+(BOOL)isInDevelopmentEnvironment;
+(id)classKitEnvironment;
+(id)instanceForEndpoint:(id)arg1 ;
+(BOOL)isClassKitEnabled;
-(void)connect;
-(id)init;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_registerForDarwinNotifications;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)connectionBorked:(id)arg1 ;
-(id)utilityServer:(/*^block*/id)arg1 ;
-(BOOL)isBorked;
-(void)setOnInterupt:(id)arg1 ;
-(void)unlock;
-(void)dealloc;
-(void)listAppsWithCompletion:(/*^block*/id)arg1 ;
-(void)accountChanged;
-(id)syncUtilityServer:(/*^block*/id)arg1 ;
-(void)setOverrideBundleIdentifier:(NSString *)arg1 ;
-(void)setOverrideBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)onConnect;
-(void)connectionInterrupted:(id)arg1 ;
-(void)deleteAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)onInterupt;
-(id)syncServer:(/*^block*/id)arg1 ;
-(NSString *)overrideBundleIdentifier;
-(void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)devModeChanged;
-(id)server:(/*^block*/id)arg1 ;
-(void)lock;
-(id)syncDataServer:(/*^block*/id)arg1 ;
-(id)serverConnection;
-(void)invalidate;
-(id)dataServer:(/*^block*/id)arg1 ;
-(void)setOnConnect:(id)arg1 ;
@end

