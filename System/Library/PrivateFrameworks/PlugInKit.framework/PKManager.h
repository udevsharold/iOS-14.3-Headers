/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKDaemonClient;

@interface PKManager : NSObject {

	PKDaemonClient* _client;

}

@property (retain) PKDaemonClient * client;              //@synthesize client=_client - In the implementation block
+(id)managerForUser:(unsigned)arg1 ;
+(id)defaultManager;
-(void)updateExtensionStatesForPlugIns:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)registerPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)releaseHold:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(/*^block*/id)arg3 ;
-(void)registerPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)initForUser:(unsigned)arg1 ;
-(BOOL)terminatePlugInAtURL:(id)arg1 withError:(id*)arg2 ;
-(void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(/*^block*/id)arg3 ;
-(id)containingAppForPlugInConnectedTo:(id)arg1 ;
-(void)unregisterPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)containingAppForExtensionProperties:(id)arg1 ;
-(id)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 withError:(id*)arg3 ;
-(id)informationForPlugInWithPid:(int)arg1 ;
-(BOOL)releaseHold:(id)arg1 flags:(unsigned long long)arg2 withError:(id*)arg3 ;
-(id)forceHoldPlugIn:(id)arg1 withError:(id*)arg2 ;
-(void)setClient:(PKDaemonClient *)arg1 ;
-(void)holdPlugInsInApplication:(id)arg1 result:(/*^block*/id)arg2 ;
-(PKDaemonClient *)client;
-(void)forceHoldPlugIn:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)holdPlugInsInApplication:(id)arg1 withError:(id*)arg2 ;
-(BOOL)releaseHold:(id)arg1 withError:(id*)arg2 ;
-(id)initForService:(const char*)arg1 ;
-(void)unregisterPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)releaseHold:(id)arg1 ;
-(id)containingAppForPlugInWithPid:(int)arg1 ;
@end
