/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKWebServiceContext.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSDictionary, NSObject, NSString, NSDate, PKPaymentWebServiceConfiguration, NSArray, PKPaymentWebServiceRegion, NSURL;

@interface PKPaymentWebServiceContext : PKWebServiceContext {

	os_unfair_lock_s _lock_context;
	NSMutableDictionary* _verificationRequestsByPassUniqueID;
	NSDictionary* _regions;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _cacheLock;
	NSMutableDictionary* _featureSupportedLanguageCache;
	BOOL _devSigned;
	BOOL _transactionServiceDisabled;
	BOOL _messageServiceDisabled;
	BOOL _ignoreProvisioningEnablementPercentage;
	long long _version;
	NSString* _deviceID;
	NSString* _secureElementID;
	NSString* _pushToken;
	NSString* _nextPushToken;
	NSString* _companionSerialNumber;
	NSDate* _registrationDate;
	NSDate* _configurationDate;
	PKPaymentWebServiceConfiguration* _configuration;
	NSString* _primaryRegionIdentifier;
	long long _consistencyCheckBackoffLevel;
	NSArray* _certificates;
	NSString* _lastUpdatedTag;

}

@property (assign) long long consistencyCheckBackoffLevel;                          //@synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel - In the implementation block
@property (copy) NSArray * certificates;                                            //@synthesize certificates=_certificates - In the implementation block
@property (copy) NSString * lastUpdatedTag;                                         //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (assign) long long version;                                               //@synthesize version=_version - In the implementation block
@property (copy) NSString * deviceID;                                               //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * secureElementID;                                        //@synthesize secureElementID=_secureElementID - In the implementation block
@property (copy) NSString * pushToken;                                              //@synthesize pushToken=_pushToken - In the implementation block
@property (copy) NSString * nextPushToken;                                          //@synthesize nextPushToken=_nextPushToken - In the implementation block
@property (copy) NSString * companionSerialNumber;                                  //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
@property (assign) BOOL devSigned;                                                  //@synthesize devSigned=_devSigned - In the implementation block
@property (copy) NSDate * registrationDate;                                         //@synthesize registrationDate=_registrationDate - In the implementation block
@property (copy) NSDate * configurationDate;                                        //@synthesize configurationDate=_configurationDate - In the implementation block
@property (retain) PKPaymentWebServiceConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL transactionServiceDisabled;                                 //@synthesize transactionServiceDisabled=_transactionServiceDisabled - In the implementation block
@property (assign) BOOL messageServiceDisabled;                                     //@synthesize messageServiceDisabled=_messageServiceDisabled - In the implementation block
@property (assign) BOOL ignoreProvisioningEnablementPercentage;                     //@synthesize ignoreProvisioningEnablementPercentage=_ignoreProvisioningEnablementPercentage - In the implementation block
@property (retain) NSDictionary * regions; 
@property (copy) NSString * primaryRegionIdentifier;                                //@synthesize primaryRegionIdentifier=_primaryRegionIdentifier - In the implementation block
@property (__weak,readonly) PKPaymentWebServiceRegion * primaryRegion; 
@property (__weak,readonly) NSDictionary * TSMURLStringByPushTopic; 
@property (nonatomic,readonly) NSURL * peerPaymentServiceURL; 
@property (nonatomic,readonly) BOOL hasPeerPaymentAccount; 
+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg1 ;
+(void)_migrateContext:(id)arg1 ;
+(void)_migrateFrom0To1:(id)arg1 ;
-(NSString *)pushToken;
-(id)_regionWithPeerPaymentServiceURL;
-(NSDate *)registrationDate;
-(NSDictionary *)regions;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSArray *)certificates;
-(long long)consistencyCheckBackoffLevel;
-(NSString *)companionSerialNumber;
-(NSString *)primaryRegionIdentifier;
-(BOOL)ignoreProvisioningEnablementPercentage;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(id)init;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(NSURL *)peerPaymentServiceURL;
-(void)_localizationUpdated;
-(void)setDevSigned:(BOOL)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(BOOL)devSigned;
-(NSString *)lastUpdatedTag;
-(void)dealloc;
-(void)setConsistencyCheckBackoffLevel:(long long)arg1 ;
-(id)TSMPushTopics;
-(PKPaymentWebServiceConfiguration *)configuration;
-(void)removeVerificationRequestRecordForUniqueID:(id)arg1 ;
-(NSDate *)configurationDate;
-(void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2 ;
-(NSDictionary *)TSMURLStringByPushTopic;
-(void)setNextPushToken:(NSString *)arg1 ;
-(BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)transactionServiceDisabled;
-(id)regionForIdentifier:(id)arg1 ;
-(NSString *)secureElementID;
-(id)betaPaymentNetworksForRegion:(id)arg1 ;
-(id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setRegions:(NSDictionary *)arg1 ;
-(id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1 ;
-(id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)arg1 ;
-(NSString *)deviceID;
-(void)setSecureElementID:(NSString *)arg1 ;
-(id)verificationRequestRecordForUniqueID:(id)arg1 ;
-(BOOL)messageServiceDisabled;
-(PKPaymentWebServiceRegion *)primaryRegion;
-(void)setRegistrationDate:(NSDate *)arg1 ;
-(void)setConfiguration:(PKPaymentWebServiceConfiguration *)arg1 ;
-(long long)version;
-(BOOL)hasPeerPaymentAccount;
-(void)setIgnoreProvisioningEnablementPercentage:(BOOL)arg1 ;
-(void)setMessageServiceDisabled:(BOOL)arg1 ;
-(BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2 ;
-(void)setVersion:(long long)arg1 ;
-(void)setConfigurationDate:(NSDate *)arg1 ;
-(id)debugDescription;
-(double)_contextProvisioningEnablementValue;
-(NSString *)nextPushToken;
-(void)setTransactionServiceDisabled:(BOOL)arg1 ;
-(void)setPrimaryRegionIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)arg1 ;
@end

