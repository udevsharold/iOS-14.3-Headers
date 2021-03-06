/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKProcessPoolConfiguration, NSURL, WKGeolocationProviderIOS, NSString;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<WebKit::WebProcessPool> _processPool;
	WeakObjCPtr<id<_WKAutomationDelegate> > _automationDelegate;
	WeakObjCPtr<id<_WKDownloadDelegate> > _downloadDelegate;
	RetainPtr<_WKAutomationSession>* _automationSession;
	RetainPtr<WKGeolocationProviderIOS>* _geolocationProvider;
	RetainPtr<id<_WKGeolocationCoreLocationProvider> >* _coreLocationProvider;

}

@property (nonatomic,readonly) _WKProcessPoolConfiguration * _configuration; 
@property (assign,setter=_setDownloadDelegate:,nonatomic,__weak) id<_WKDownloadDelegate> _downloadDelegate; 
@property (assign,setter=_setAutomationDelegate:,nonatomic,__weak) id<_WKAutomationDelegate> _automationDelegate; 
@property (assign,setter=_setCoreLocationProvider:,nonatomic) id<_WKGeolocationCoreLocationProvider> _coreLocationProvider; 
@property (setter=_setJavaScriptConfigurationDirectory:,nonatomic,copy) NSURL * _javaScriptConfigurationDirectory; 
@property (assign,setter=_setCookieStoragePartitioningEnabled:,getter=_isCookieStoragePartitioningEnabled,nonatomic) BOOL _cookieStoragePartitioningEnabled; 
@property (assign,setter=_setStorageAccessAPIEnabled:,getter=_isStorageAccessAPIEnabled,nonatomic) BOOL _storageAccessAPIEnabled; 
@property (readonly) WKGeolocationProviderIOS * _geolocationProvider; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_sharedProcessPool;
+(id)_allProcessPoolsForTesting;
+(id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2 ;
+(id)_websiteDataURLForContainerWithURL:(id)arg1 ;
+(void)_forceGameControllerFramework;
-(_WKProcessPoolConfiguration *)_configuration;
-(unsigned long long)_webPageContentProcessCount;
-(void)_makeNextWebProcessLaunchFailForTesting;
-(void)_sendNetworkProcessDidResume;
-(void)_setObjectsForBundleParametersWithDictionary:(id)arg1 ;
-(id)init;
-(void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
-(void)_synthesizeAppIsBackground:(BOOL)arg1 ;
-(WKGeolocationProviderIOS *)_geolocationProvider;
-(int)_networkProcessIdentifier;
-(void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg1 thirdParty:(id)arg2 shouldScheduleNotification:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setAutomationSession:(id)arg1 ;
-(void)_allowAnyTLSCertificateForWebSocketTesting;
-(void)dealloc;
-(void)_garbageCollectJavaScriptObjectsForTesting;
-(NSURL *)_javaScriptConfigurationDirectory;
-(void)_clearPermanentCredentialsForProtectionSpace:(id)arg1 ;
-(void)_sendNetworkProcessPrepareToSuspend:(/*^block*/id)arg1 ;
-(id)_resumeDownloadFromData:(id)arg1 websiteDataStore:(id)arg2 path:(id)arg3 originatingWebView:(id)arg4 ;
-(void)_setAllowsAnySSLCertificateForServiceWorker:(BOOL)arg1 ;
-(unsigned long long)_processCacheSize;
-(unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
-(void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)arg1 ;
-(void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1 ;
-(void)_setObject:(id)arg1 forBundleParameter:(id)arg2 ;
-(void)_automationCapabilitiesDidChange;
-(unsigned long long)_webProcessCountIgnoringPrewarmed;
-(BOOL)_hasPrewarmedWebProcess;
-(id)initWithCoder:(id)arg1 ;
-(int)_prewarmedProcessIdentifier;
-(unsigned long long)_webProcessCount;
-(unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
-(unsigned long long)_serviceWorkerProcessCount;
-(void)_warmInitialProcess;
-(NSString *)description;
-(void)_setAutomationDelegate:(id)arg1 ;
-(void)_makeNextNetworkProcessLaunchFailForTesting;
-(BOOL)_isCookieStoragePartitioningEnabled;
-(void)_setCookieStoragePartitioningEnabled:(BOOL)arg1 ;
-(void)_preconnectToServer:(id)arg1 ;
-(void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4 ;
-(unsigned long long)_processCacheCapacity;
-(void)_setDownloadDelegate:(id)arg1 ;
-(BOOL)_isStorageAccessAPIEnabled;
-(void)_setUseSeparateServiceWorkerProcess:(BOOL)arg1 ;
-(void)_setStorageAccessAPIEnabled:(BOOL)arg1 ;
-(void)_syncNetworkProcessCookies;
-(void)_clearSupportedPlugins;
-(unsigned long long)_maximumSuspendedPageCount;
-(void)_terminateServiceWorkers;
-(void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_objectForBundleParameter:(id)arg1 ;
-(id<_WKDownloadDelegate>)_downloadDelegate;
-(unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
-(unsigned long long)_numberOfConnectedGamepadsForTesting;
-(void)_setUsesOnlyHIDGamepadProviderForTesting:(BOOL)arg1 ;
-(Object*)_apiObject;
-(void)_setCoreLocationProvider:(id)arg1 ;
-(id)_initWithConfiguration:(id)arg1 ;
-(void)_terminateNetworkProcess;
-(id<_WKAutomationDelegate>)_automationDelegate;
-(id)_downloadURLRequest:(id)arg1 websiteDataStore:(id)arg2 originatingWebView:(id)arg3 ;
-(void)_setJavaScriptConfigurationDirectory:(id)arg1 ;
-(void)_clearWebProcessCache;
-(BOOL)_networkProcessHasEntitlementForTesting:(id)arg1 ;
-(unsigned long long)_pluginProcessCount;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(void)_sendNetworkProcessWillSuspendImminently;
-(id<_WKGeolocationCoreLocationProvider>)_coreLocationProvider;
@end

