/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACMonitoredAccountStoreDelegateProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, ACMonitoredAccountStore, ACAccount, NSNumber, STManagementState, OTClique, NSString;

@interface WBUFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ACMonitoredAccountStore* _accountStore;
	ACAccount* _account;
	NSNumber* _cachedShouldRequestMoreTime;
	STManagementState* _managementState;
	OTClique* _keychainClique;
	NSString* _primaryAccountAltDSID;
	BOOL _autoFillAvailable;
	BOOL _bookmarksAvailable;
	BOOL _readingListAvailable;
	BOOL _offlineReadingListAvailable;
	BOOL _cloudSyncAvailable;
	BOOL _inMemoryBookmarkChangeTrackingAvailable;

}

@property (getter=isAutoFillAvailable,nonatomic,readonly) BOOL autoFillAvailable;                                                          //@synthesize autoFillAvailable=_autoFillAvailable - In the implementation block
@property (getter=isBookmarksAvailable,nonatomic,readonly) BOOL bookmarksAvailable;                                                        //@synthesize bookmarksAvailable=_bookmarksAvailable - In the implementation block
@property (getter=isReadingListAvailable,nonatomic,readonly) BOOL readingListAvailable;                                                    //@synthesize readingListAvailable=_readingListAvailable - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;                                      //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (getter=isCloudKitBookmarksAvailable,nonatomic,readonly) BOOL cloudKitBookmarksAvailable; 
@property (getter=isCloudTabsAvailable,nonatomic,readonly) BOOL cloudTabsAvailable; 
@property (getter=isCloudSyncAvailable,nonatomic,readonly) BOOL cloudSyncAvailable;                                                        //@synthesize cloudSyncAvailable=_cloudSyncAvailable - In the implementation block
@property (getter=isCloudHistorySyncAvailable,nonatomic,readonly) BOOL cloudHistorySyncAvailable; 
@property (getter=isCreditCardStorageAvailable,nonatomic,readonly) BOOL creditCardStorageAvailable; 
@property (getter=isPrivateBrowsingAvailable,nonatomic,readonly) BOOL privateBrowsingAvailable; 
@property (getter=isInMemoryBookmarkChangeTrackingAvailable,nonatomic,readonly) BOOL inMemoryBookmarkChangeTrackingAvailable;              //@synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable - In the implementation block
@property (getter=isKeychainSyncEnabled,nonatomic,readonly) BOOL keychainSyncEnabled; 
@property (getter=isUserRemotelyManagedAndLocallyRestricted,nonatomic,readonly) BOOL userRemotelyManagedAndLocallyRestricted; 
@property (getter=isAirDropPasswordsAvailable,nonatomic,readonly) BOOL airDropPasswordsAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)accessLevel;
+(BOOL)shouldOfferVirtualCards;
+(id)webui_sharedFeatureManager;
-(BOOL)isCloudHistorySyncAvailable;
-(BOOL)isInMemoryBookmarkChangeTrackingAvailable;
-(id)init;
-(BOOL)isCreditCardStorageAvailable;
-(BOOL)isAirDropPasswordsAvailable;
-(void)accountWasModified:(id)arg1 ;
-(BOOL)isKeychainSyncEnabled;
-(BOOL)isPrivateBrowsingAvailable;
-(BOOL)isCloudSyncAvailable;
-(void)dealloc;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(BOOL)_isCloudTabsAvailableUsingManagedAppleID:(BOOL)arg1 ;
-(BOOL)isUserRemotelyManagedAndLocallyRestricted;
-(void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateKeychainSyncingStatus;
-(void)_setAccountOnInternalQueue:(id)arg1 ;
-(BOOL)isOfflineReadingListAvailable;
-(BOOL)_isUsingManagedAppleID;
-(BOOL)isReadingListAvailable;
-(void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setAccount:(id)arg1 ;
-(void)accountWasRemoved:(id)arg1 ;
-(BOOL)isBookmarksAvailable;
-(BOOL)isAutoFillAvailable;
-(void)accountWasAdded:(id)arg1 ;
-(BOOL)isCloudTabsAvailable;
-(BOOL)isCloudKitBookmarksAvailable;
@end
