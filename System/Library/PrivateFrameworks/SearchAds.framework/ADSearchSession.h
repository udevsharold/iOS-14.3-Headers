/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, ADCapService, ADParameterFactory, APOdmlSettings;

@interface ADSearchSession : NSObject {

	NSObject*<OS_dispatch_queue> _idNotificationQueue;
	BOOL _notificationReceivedAndWaiting;
	int _appsRank;
	NSString* _appID;
	NSString* _appVersion;
	ADCapService* _capService;
	ADParameterFactory* _parameterFactory;
	NSString* _campaignNamespace;
	NSObject* _notificationObserver;
	NSString* _clientRequestID;
	APOdmlSettings* _odmlSettings;

}

@property (nonatomic,retain) ADCapService * capService;                          //@synthesize capService=_capService - In the implementation block
@property (nonatomic,retain) ADParameterFactory * parameterFactory;              //@synthesize parameterFactory=_parameterFactory - In the implementation block
@property (nonatomic,retain) NSString * campaignNamespace;                       //@synthesize campaignNamespace=_campaignNamespace - In the implementation block
@property (nonatomic,retain) NSObject * notificationObserver;                    //@synthesize notificationObserver=_notificationObserver - In the implementation block
@property (assign,nonatomic) BOOL notificationReceivedAndWaiting;                //@synthesize notificationReceivedAndWaiting=_notificationReceivedAndWaiting - In the implementation block
@property (nonatomic,retain) NSString * clientRequestID;                         //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,retain) APOdmlSettings * odmlSettings;                      //@synthesize odmlSettings=_odmlSettings - In the implementation block
@property (nonatomic,copy) NSString * appID;                                     //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                                //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) int appsRank;                                       //@synthesize appsRank=_appsRank - In the implementation block
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appID;
-(NSString *)appVersion;
-(id)populateStoreFrontLanguageLocale:(id)arg1 ;
-(void)updateClickData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)startUpdatingIDs;
-(APOdmlSettings *)odmlSettings;
-(void)setParameterFactory:(ADParameterFactory *)arg1 ;
-(id)sponsoredSearchRequestForLanguageLocale:(id)arg1 ;
-(ADParameterFactory *)parameterFactory;
-(void)dealloc;
-(void)setAppsRank:(int)arg1 ;
-(id)campaignNamespaceParameter;
-(id)adParameters;
-(NSString *)campaignNamespace;
-(void)requestSponsoredSearchURL:(/*^block*/id)arg1 ;
-(void)setClientRequestID:(NSString *)arg1 ;
-(void)updateFrequencyCapData:(id)arg1 ;
-(void)requestSearchObjectForLocality:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(int)appsRank;
-(void)setNotificationObserver:(NSObject *)arg1 ;
-(ADCapService *)capService;
-(void)setCampaignNamespace:(NSString *)arg1 ;
-(BOOL)notificationReceivedAndWaiting;
-(id)userTargetingProperties;
-(void)requestUserTargetingIdentifier:(/*^block*/id)arg1 ;
-(void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateClickDataWith:(id)arg1 ;
-(void)searchObjectForCriteria:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)clientRequestID;
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4 ;
-(void)updateToroDownloadData:(id)arg1 forType:(long long)arg2 ;
-(id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 ;
-(void)setOdmlSettings:(APOdmlSettings *)arg1 ;
-(void)setCapService:(ADCapService *)arg1 ;
-(void)setNotificationReceivedAndWaiting:(BOOL)arg1 ;
-(NSObject *)notificationObserver;
@end

