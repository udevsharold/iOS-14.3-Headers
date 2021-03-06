/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEAppPushDelegate;
@class NEConfigurationManager, NEConfiguration, NSArray, NSDictionary, NSString;

@interface NEAppPushManager : NSObject {

	BOOL _active;
	BOOL _hasLoaded;
	id<NEAppPushDelegate> _delegate;
	NEConfigurationManager* _configurationManager;
	NEConfiguration* _configuration;
	void* _nesmConnection;

}

@property (getter=isActive) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (copy) NEConfiguration * configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (assign) void* nesmConnection;                                         //@synthesize nesmConnection=_nesmConnection - In the implementation block
@property (copy) NSArray * matchSSIDs; 
@property (copy) NSDictionary * providerConfiguration; 
@property (copy) NSString * providerBundleIdentifier; 
@property (__weak) id<NEAppPushDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * localizedDescription; 
@property (getter=isEnabled) BOOL enabled; 
+(void)initCallKitXPCClient;
+(void)deliverIncomingCallPayload:(id)arg1 ;
+(id)loadedManagers;
+(void)loadAllFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(NSString *)localizedDescription;
-(id)init;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)hasLoaded;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)matchSSIDs;
-(void)setMatchSSIDs:(NSArray *)arg1 ;
-(void)dealloc;
-(NEConfiguration *)configuration;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)createEmptyConfigurationWithGrade:(long long)arg1 ;
-(id)initWithGrade:(long long)arg1 ;
-(void*)nesmConnection;
-(void)cancelSessionManagerConnection;
-(void)setNesmConnection:(void*)arg1 ;
-(BOOL)establishSessionManagerConnectionWithConfigurationID:(id)arg1 ;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(BOOL)isActive;
-(void)setDelegate:(id<NEAppPushDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<NEAppPushDelegate>)delegate;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
@end

