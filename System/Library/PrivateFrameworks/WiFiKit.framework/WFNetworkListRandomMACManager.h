/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, WFClient;

@interface WFNetworkListRandomMACManager : NSObject {

	BOOL _shouldResetCache;
	NSMutableDictionary* _cache;
	WFClient* _client;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) WFClient * client;                        //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL shouldResetCache;                    //@synthesize shouldResetCache=_shouldResetCache - In the implementation block
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)setClient:(WFClient *)arg1 ;
-(WFClient *)client;
-(void)resetCacheWithCurrentNetworkName:(id)arg1 ;
-(BOOL)isSSIDinCache:(id)arg1 ;
-(BOOL)shouldEnableRandomMACForSSID:(id)arg1 ;
-(id)cachedRandomMACForSSID:(id)arg1 ;
-(BOOL)randomMACFeatureIsEnabled;
-(BOOL)shouldEnableRandomMacForSecuredNetworks;
-(id)newScanRecordWithRandomMACFromScanRecord:(id)arg1 ;
-(void)setRandomMAC:(id)arg1 forNetwork:(id)arg2 enabled:(BOOL)arg3 shouldAlwaysDisplayRandomAddress:(BOOL)arg4 ;
-(void)setShouldResetCache:(BOOL)arg1 ;
-(BOOL)shouldAlwaysDisplayRandomAddressForSSID:(id)arg1 ;
-(BOOL)shouldResetCache;
@end
