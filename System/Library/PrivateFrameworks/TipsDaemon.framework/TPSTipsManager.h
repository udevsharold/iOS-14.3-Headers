/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TPSWidgetControllerDelegate.h>

@protocol TPSTipsManagerDelegate, OS_dispatch_queue;
@class TPSExperiment, NSString, TPSNotificationController, TPSTipStatusController, NSObject, NSMutableArray, TPSMetadata, NSArray, NSDictionary, NSBundle, TPSWidgetController;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate> {

	BOOL _contextualTipsInactive;
	id<TPSTipsManagerDelegate> _delegate;
	TPSExperiment* _experiment;
	NSString* _rulesVersion;
	TPSNotificationController* _notificationController;
	TPSTipStatusController* _tipStatusController;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableArray* _sessionItems;
	TPSMetadata* _metadata;
	NSArray* _collections;
	NSArray* _tips;
	NSDictionary* _collectionsMap;
	NSDictionary* _tipsMap;
	NSBundle* _frameworkBundle;
	TPSWidgetController* _widgetController;

}

@property (assign,nonatomic) BOOL contextualTipsInactive;                                     //@synthesize contextualTipsInactive=_contextualTipsInactive - In the implementation block
@property (nonatomic,retain) TPSTipStatusController * tipStatusController;                    //@synthesize tipStatusController=_tipStatusController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                          //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * sessionItems;                                   //@synthesize sessionItems=_sessionItems - In the implementation block
@property (nonatomic,retain) TPSMetadata * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * collections;                                           //@synthesize collections=_collections - In the implementation block
@property (nonatomic,retain) NSArray * tips;                                                  //@synthesize tips=_tips - In the implementation block
@property (nonatomic,retain) NSDictionary * collectionsMap;                                   //@synthesize collectionsMap=_collectionsMap - In the implementation block
@property (nonatomic,retain) NSDictionary * tipsMap;                                          //@synthesize tipsMap=_tipsMap - In the implementation block
@property (nonatomic,copy) TPSExperiment * experiment;                                        //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,copy) NSString * rulesVersion;                                           //@synthesize rulesVersion=_rulesVersion - In the implementation block
@property (nonatomic,retain) NSBundle * frameworkBundle;                                      //@synthesize frameworkBundle=_frameworkBundle - In the implementation block
@property (nonatomic,retain) TPSWidgetController * widgetController;                          //@synthesize widgetController=_widgetController - In the implementation block
@property (assign,nonatomic,__weak) id<TPSTipsManagerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TPSNotificationController * notificationController;              //@synthesize notificationController=_notificationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)immediateNotificationIdentifierForType:(unsigned long long)arg1 ;
+(BOOL)needImmediateNotificationForType:(unsigned long long)arg1 ;
+(BOOL)eligibleForHardwareWelcomeNotification;
-(void)setMetadata:(TPSMetadata *)arg1 ;
-(id)_frameworkBundle;
-(void)contentForIdentifier:(id)arg1 variantIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_localFormattedDataForURL:(id)arg1 ;
-(void)contentFromOrigin:(BOOL)arg1 contextualEligibility:(BOOL)arg2 widgetEligibility:(BOOL)arg3 notificationEligibility:(BOOL)arg4 preferredNotificationIdentifier:(id)arg5 shouldDeferBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)hasWidgetTip;
-(TPSMetadata *)metadata;
-(id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2 ;
-(id)initWithTipStatusController:(id)arg1 ;
-(id)_localMetaFormattedData;
-(NSArray *)collections;
-(void)setExperiment:(TPSExperiment *)arg1 ;
-(TPSExperiment *)experiment;
-(NSDictionary *)tipsMap;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)processTipContentsFeedFromURLRequest:(id)arg1 attributionIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearWelcomeDoumentCacheWithMajorVersion:(id)arg1 ;
-(void)_updatePauseStatus:(BOOL)arg1 ;
-(TPSWidgetController *)widgetController;
-(NSArray *)tips;
-(void)setWidgetController:(TPSWidgetController *)arg1 ;
-(NSString *)rulesVersion;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)processCollectionsMap:(id)arg1 collectionRootId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldProcessLocalContent;
-(void)setCollections:(NSArray *)arg1 ;
-(id)welcomeDocumentFromContentPackage:(id)arg1 ;
-(void)setNotificationController:(TPSNotificationController *)arg1 ;
-(void)setTipStatusController:(TPSTipStatusController *)arg1 ;
-(void)setTips:(NSArray *)arg1 ;
-(void)updateContentIfOverrideImmediately:(BOOL)arg1 ;
-(id)_localContentURLForIdentifier:(id)arg1 ;
-(void)setFrameworkBundle:(NSBundle *)arg1 ;
-(id)_localContentFormattedData;
-(BOOL)isHoldoutCamp;
-(void)finalEligibleContentWithCollections:(id)arg1 collectionsMap:(id)arg2 collectionDeliveryInfoMap:(id)arg3 eligibleTipIdentifiers:(id)arg4 eligibleContextualTipIdentifiers:(id)arg5 allFullTipsMap:(id)arg6 allMiniTipsMap:(id)arg7 tipDeliveryInfoMap:(id)arg8 deliveryInfoMap:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)setDelegate:(id<TPSTipsManagerDelegate>)arg1 ;
-(NSBundle *)frameworkBundle;
-(void)setRulesVersion:(NSString *)arg1 ;
-(NSDictionary *)collectionsMap;
-(void)processTips:(id)arg1 deliveryInfoMap:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(TPSNotificationController *)notificationController;
-(BOOL)isPreconditionValidForIdentifier:(id)arg1 preconditionDictionary:(id)arg2 ;
-(NSMutableArray *)sessionItems;
-(void)setSessionItems:(NSMutableArray *)arg1 ;
-(BOOL)widgetController:(id)arg1 validForTip:(id)arg2 tipDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4 ;
-(void)setContextualTipsInactive:(BOOL)arg1 ;
-(id)_localContentURL;
-(void)_updateExperimentCache;
-(id<TPSTipsManagerDelegate>)delegate;
-(void)processTipContentsFeedFromOrigin:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_localMetaURL;
-(void)setCollectionsMap:(NSDictionary *)arg1 ;
-(BOOL)contextualTipsInactive;
-(void)setTipsMap:(NSDictionary *)arg1 ;
-(TPSTipStatusController *)tipStatusController;
@end

