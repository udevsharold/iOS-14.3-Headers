/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCBundleChannelProviderType.h>

@protocol FCBundleChannelProviderDelegate, FCCoreConfigurationManager;
@class NSArray, NSString, FCKeyValueStore, NFUnfairLock, FCPurchaseLookupRecordSource;

@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType> {

	id<FCBundleChannelProviderDelegate> delegate;
	FCKeyValueStore* _localStore;
	NFUnfairLock* _accessLock;
	id<FCCoreConfigurationManager> _configurationManager;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;
	NSArray* _bundleChannelIDs;
	NSString* _bundleChannelIDsVersion;

}

@property (nonatomic,retain) FCKeyValueStore * localStore;                                             //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) NFUnfairLock * accessLock;                                                //@synthesize accessLock=_accessLock - In the implementation block
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                    //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;              //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
@property (nonatomic,copy) NSArray * bundleChannelIDs;                                                 //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * bundleChannelIDsVersion;                                         //@synthesize bundleChannelIDsVersion=_bundleChannelIDsVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FCBundleChannelProviderDelegate> delegate; 
-(FCKeyValueStore *)localStore;
-(id<FCCoreConfigurationManager>)configurationManager;
-(NFUnfairLock *)accessLock;
-(void)activityObservingApplicationWindowWillBecomeForeground;
-(void)loadLocalCachesFromStore;
-(void)loadInitialBundleChannelIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(void)refreshBundleChannelIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)setBundleChannelIDs:(NSArray *)arg1 ;
-(void)fetchBundleTagIDsForPurchaseID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithLocalStore:(id)arg1 appActivityMonitor:(id)arg2 configurationManager:(id)arg3 purchaseLookupRecordSource:(id)arg4 ;
-(NSArray *)bundleChannelIDs;
-(void)setDelegate:(id<FCBundleChannelProviderDelegate>)arg1 ;
-(void)setAccessLock:(NFUnfairLock *)arg1 ;
-(void)updateBundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 ;
-(NSString *)bundleChannelIDsVersion;
-(void)setBundleChannelIDsVersion:(NSString *)arg1 ;
-(id<FCBundleChannelProviderDelegate>)delegate;
@end

