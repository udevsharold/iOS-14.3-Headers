/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCEndpointConnectionType.h>

@class NSURLSession, FCNetworkBehaviorMonitor, NSString;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCCoreConfigurationObserving, FCEndpointConnectionType> {

	NSURLSession* _session;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;

}

@property (nonatomic,retain) NSURLSession * session;                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForStatus:(long long)arg1 url:(id)arg2 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(void)performAuthenticatedHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 reauthenticateIfNeeded:(BOOL)arg7 networkEventType:(int)arg8 callbackQueue:(id)arg9 completion:(/*^block*/id)arg10 ;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 requiresAuthKitHeaders:(BOOL)arg8 networkEventType:(int)arg9 callbackQueue:(id)arg10 completion:(/*^block*/id)arg11 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 callbackQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg1 networkBehaviorMonitor:(id)arg2 ;
-(void)performAuthenticatedHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 reauthenticateIfNeeded:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 networkEventType:(int)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 networkEventType:(int)arg8 callbackQueue:(id)arg9 completion:(/*^block*/id)arg10 ;
@end

