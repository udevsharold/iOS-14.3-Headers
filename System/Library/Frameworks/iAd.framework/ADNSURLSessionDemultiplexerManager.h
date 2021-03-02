/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSObject, NSURLSessionConfiguration;

@interface ADNSURLSessionDemultiplexerManager : NSObject {

	NSArray* _protocolClasses;
	NSMutableDictionary* _sessionDemultiplexerForIdentifier;
	NSObject*<OS_dispatch_queue> _demuxManagerQueue;
	NSURLSessionConfiguration* _proxySessionConfigurationLegacy;
	NSURLSessionConfiguration* _proxySessionConfigurationConnect;

}

@property (retain) NSMutableDictionary * sessionDemultiplexerForIdentifier;                             //@synthesize sessionDemultiplexerForIdentifier=_sessionDemultiplexerForIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> demuxManagerQueue;                            //@synthesize demuxManagerQueue=_demuxManagerQueue - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * proxySessionConfigurationLegacy;               //@synthesize proxySessionConfigurationLegacy=_proxySessionConfigurationLegacy - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * proxySessionConfigurationConnect;              //@synthesize proxySessionConfigurationConnect=_proxySessionConfigurationConnect - In the implementation block
@property (copy) NSArray * protocolClasses;                                                             //@synthesize protocolClasses=_protocolClasses - In the implementation block
+(id)sharedManager;
-(void)setProtocolClasses:(NSArray *)arg1 ;
-(id)init;
-(id)sessionConfigurationForProxyType:(long long)arg1 ;
-(long long)pretapRequestCountForIdentifier:(id)arg1 ;
-(NSURLSessionConfiguration *)proxySessionConfigurationConnect;
-(void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1 ;
-(void)contentProxyURLConnectDidChange;
-(void)setProxySessionConfigurationLegacy:(NSURLSessionConfiguration *)arg1 ;
-(void)configVersionDidChange;
-(NSArray *)protocolClasses;
-(NSURLSessionConfiguration *)proxySessionConfigurationLegacy;
-(void)proxyTypeDidChange;
-(void)setDemuxManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2 proxyType:(long long)arg3 ;
-(NSMutableDictionary *)sessionDemultiplexerForIdentifier;
-(void)setProxySessionConfigurationConnect:(NSURLSessionConfiguration *)arg1 ;
-(NSObject*<OS_dispatch_queue>)demuxManagerQueue;
-(void)setSessionDemultiplexerForIdentifier:(NSMutableDictionary *)arg1 ;
-(void)contentProxyURLDidChange;
@end
