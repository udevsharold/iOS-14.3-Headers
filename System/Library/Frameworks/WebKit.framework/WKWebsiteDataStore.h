/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, _WKWebsiteDataStoreConfiguration, WKHTTPCookieStore;

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<WebKit::WebsiteDataStore> _websiteDataStore;
	WeakObjCPtr<id<_WKWebsiteDataStoreDelegate> > _delegate;

}

@property (assign,setter=_setResourceLoadStatisticsEnabled:,nonatomic) BOOL _resourceLoadStatisticsEnabled; 
@property (assign,setter=_setResourceLoadStatisticsDebugMode:,nonatomic) BOOL _resourceLoadStatisticsDebugMode; 
@property (assign,setter=_setPerOriginStorageQuota:,nonatomic) unsigned long long _perOriginStorageQuota; 
@property (assign,setter=_setBoundInterfaceIdentifier:,nonatomic) NSString * _boundInterfaceIdentifier; 
@property (assign,setter=_setAllowsCellularAccess:,nonatomic) BOOL _allowsCellularAccess; 
@property (assign,setter=_setProxyConfiguration:,nonatomic) NSDictionary * _proxyConfiguration; 
@property (assign,setter=_setAllowsTLSFallback:,nonatomic) BOOL _allowsTLSFallback; 
@property (nonatomic,readonly) NSURL * _indexedDBDatabaseDirectory; 
@property (assign,nonatomic,__weak) id<_WKWebsiteDataStoreDelegate> _delegate; 
@property (nonatomic,copy,readonly) _WKWebsiteDataStoreConfiguration * _configuration; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,readonly) WKHTTPCookieStore * httpCookieStore; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safari_dataStoreWithConfiguration:(id)arg1 ;
+(id)safari_defaultDataStore;
+(id)safari_nonPersistentDataStore;
+(void)safari_setCommonProperties:(id)arg1 ;
+(id)safari_allDataTypes;
+(void)safari_clearHSTSSuperCookies;
+(BOOL)supportsSecureCoding;
+(id)defaultDataStore;
+(id)allWebsiteDataTypes;
+(id)_allWebsiteDataTypesIncludingPrivate;
+(BOOL)_defaultDataStoreExists;
+(void)_deleteDefaultDataStoreForTesting;
+(void)_allowWebsiteDataRecordsForAllOrigins;
+(id)nonPersistentDataStore;
-(_WKWebsiteDataStoreConfiguration *)_configuration;
-(BOOL)isPersistent;
-(void)_scheduleCookieBlockingUpdate:(/*^block*/id)arg1 ;
-(void)_setUseITPDatabase:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setThirdPartyCookieBlockingMode:(BOOL)arg1 onlyOnSitesWithoutUserInteraction:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_logUserInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_processStatisticsAndDataRecords:(/*^block*/id)arg1 ;
-(id<_WKWebsiteDataStoreDelegate>)_delegate;
-(void)_clearLoadedSubresourceDomainsFor:(id)arg1 ;
-(void)_setAllowsTLSFallback:(BOOL)arg1 ;
-(unsigned long long)_perOriginStorageQuota;
-(void)dealloc;
-(NSURL *)_indexedDBDatabaseDirectory;
-(void)_setAllowsCellularAccess:(BOOL)arg1 ;
-(void)_getIsPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_renameOrigin:(id)arg1 to:(id)arg2 forDataOfTypes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setPerOriginStorageQuota:(unsigned long long)arg1 ;
-(BOOL)_hasRegisteredServiceWorker;
-(id)initWithCoder:(id)arg1 ;
-(void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setResourceLoadStatisticsTestingCallback:(/*^block*/id)arg1 ;
-(BOOL)_resourceLoadStatisticsDebugMode;
-(void)_getResourceLoadStatisticsDataSummary:(/*^block*/id)arg1 ;
-(void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg1 thirdParty:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setProxyConfiguration:(id)arg1 ;
-(void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_appBoundSchemes:(/*^block*/id)arg1 ;
-(void)_setResourceLoadStatisticsDebugMode:(BOOL)arg1 ;
-(NSString *)_boundInterfaceIdentifier;
-(BOOL)_allowsCellularAccess;
-(void)set_delegate:(id<_WKWebsiteDataStoreDelegate>)arg1 ;
-(NSDictionary *)_proxyConfiguration;
-(void)_setBoundInterfaceIdentifier:(id)arg1 ;
-(void)_setResourceLoadStatisticsEnabled:(BOOL)arg1 ;
-(void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadedSubresourceDomainsFor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_statisticsDatabaseHasAllTables:(/*^block*/id)arg1 ;
-(void)_setPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WKHTTPCookieStore *)httpCookieStore;
-(void)_clearPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_allowsTLSFallback;
-(Object*)_apiObject;
-(BOOL)_resourceLoadStatisticsEnabled;
-(id)_initWithConfiguration:(id)arg1 ;
-(void)_clearResourceLoadStatistics:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_appBoundDomains:(/*^block*/id)arg1 ;
@end
