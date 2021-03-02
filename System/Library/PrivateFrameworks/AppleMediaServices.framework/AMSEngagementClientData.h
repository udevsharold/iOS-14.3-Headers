/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface AMSEngagementClientData : NSObject {

	NSString* _lastSyncedBuild;
	NSMutableDictionary* _apps;

}

@property (nonatomic,retain) NSMutableDictionary * apps;              //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) NSString * lastSyncedBuild;              //@synthesize lastSyncedBuild=_lastSyncedBuild - In the implementation block
+(id)loadFromDisk;
+(id)_sharedQueue;
+(id)_fetchClientData;
+(void)_assertEngagementd;
+(void)_registerNotifications;
+(BOOL)_isDaemon;
-(NSMutableDictionary *)apps;
-(void)setApps:(NSMutableDictionary *)arg1 ;
-(id)destinationsForEvent:(id)arg1 ;
-(id)cachedResponseDataForEvent:(id)arg1 ;
-(NSString *)lastSyncedBuild;
-(id)initWithCacheObject:(id)arg1 ;
-(void)_cleanUpApps;
-(void)setLastSyncedBuild:(NSString *)arg1 ;
-(void)addCachedResponseData:(id)arg1 cacheInfo:(id)arg2 appIdentifier:(id)arg3 ;
-(void)setWhitelists:(id)arg1 appIdentifier:(id)arg2 ;
-(void)saveToDisk;
@end
