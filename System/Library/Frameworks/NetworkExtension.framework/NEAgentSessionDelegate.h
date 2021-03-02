/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSXPCInterface;


@protocol NEAgentSessionDelegate <NSObject>
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
@optional
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;

@required
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleCancel;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleAppsUninstalled:(id)arg1;
-(void)handleAppsUpdateBegins:(id)arg1;
-(void)handleAppsUpdateEnding:(id)arg1;
-(void)handleAppsUpdateEnds:(id)arg1;
-(NSXPCInterface *)driverInterface;
-(NSXPCInterface *)managerInterface;
-(NSArray *)uuids;

@end
