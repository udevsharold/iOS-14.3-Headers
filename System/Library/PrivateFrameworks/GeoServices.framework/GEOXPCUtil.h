/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOXPCUtil : NSObject
+(id)defaultXPCServerConnectionQueue;
+(void)setDaemonXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
+(id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
+(/*^block*/id)daemonXPCConnectionCreationBlock;
+(id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
+(id)createServerConnectionWithPort:(const char*)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(void)setDefaultXPCServerConnectionQueue:(id)arg1 ;
@end
