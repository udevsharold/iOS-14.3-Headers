/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFXPCInternalClientProtocol.h>

@protocol FMFSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSMutableSet, NSXPCConnection, NSSet, NSMutableDictionary, NSObject, FMFuture, NSString;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {

	BOOL _isModelInitialized;
	id<FMFSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSMutableSet* _internalHandles;
	NSXPCConnection* _connection;
	NSSet* _cachedGetHandlesSharingLocationsWithMe;
	NSSet* _cachedGetHandlesFollowingMyLocation;
	NSMutableDictionary* _cachedLocationForHandleByHandle;
	NSMutableDictionary* _cachedOfferExpirationForHandleByHandle;
	NSMutableDictionary* _cachedCanShareLocationWithHandleByHandle;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _handlesQueue;
	FMFuture* _sessionInvalidationFuture;
	FMFuture* _sessionInterruptionFuture;

}

@property (nonatomic,retain) NSMutableSet * internalHandles;                                              //@synthesize internalHandles=_internalHandles - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesSharingLocationsWithMe;                              //@synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesFollowingMyLocation;                                 //@synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLocationForHandleByHandle;                       //@synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;                //@synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;              //@synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                                //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlesQueue;                                   //@synthesize handlesQueue=_handlesQueue - In the implementation block
@property (assign,nonatomic) BOOL isModelInitialized;                                                     //@synthesize isModelInitialized=_isModelInitialized - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInvalidationFuture;                                        //@synthesize sessionInvalidationFuture=_sessionInvalidationFuture - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInterruptionFuture;                                        //@synthesize sessionInterruptionFuture=_sessionInterruptionFuture - In the implementation block
@property (nonatomic,copy) NSSet * handles; 
@property (assign,nonatomic,__weak) id<FMFSessionDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isProvisionedForLocationSharing;
+(BOOL)FMFRestricted;
+(BOOL)FMFAllowed;
+(BOOL)isAnyAccountManaged;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)modelDidLoad;
-(id)serverProxy;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(oneway void)abDidChange;
-(void)applicationDidEnterBackground;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(id)getHandlesWithPendingOffers;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(NSSet *)handles;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setHandles:(NSSet *)arg1 ;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(oneway void)didUpdatePreferences:(id)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(FMFuture *)sessionInvalidationFuture;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(void)addInterruptionHander:(/*^block*/id)arg1 ;
-(oneway void)didUpdateFences:(id)arg1 ;
-(void)getPendingFriendshipRequestsWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3 ;
-(void)sendIDSPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(oneway void)abPreferencesDidChange;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(double)maxLocatingInterval;
-(void)contactForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)addFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)cachedLocationForHandleByHandle;
-(void)dataForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)removeDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)delegateQueue;
-(void)exit5XXGracePeriod;
-(void)crashDaemon;
-(void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)forceRefresh;
-(BOOL)isMyLocationEnabled;
-(NSMutableSet *)internalHandles;
-(void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)getThisDeviceAndCompanion:(/*^block*/id)arg1 ;
-(void)locationForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasModelInitialized;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)muteFencesForHandle:(id)arg1 untilDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllDevices:(/*^block*/id)arg1 ;
-(void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)approveFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isMyLocationEnabled:(/*^block*/id)arg1 ;
-(void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setSessionInterruptionFuture:(FMFuture *)arg1 ;
-(BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)setExpiredInitTimestamp;
-(BOOL)isModelInitialized;
-(void)includeDeviceInAutomations:(/*^block*/id)arg1 ;
-(BOOL)shouldHandleErrorInFWK:(id)arg1 ;
-(void)dumpStateWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedGetHandlesSharingLocationsWithMe:(NSSet *)arg1 ;
-(void)addHandles:(id)arg1 ;
-(void)getFavoritesWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)cachedCanShareLocationWithHandleByHandle;
-(void)nearbyLocationsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)addInvalidationHander:(/*^block*/id)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)setCachedLocationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)fencesForHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getActiveLocationSharingDevice:(/*^block*/id)arg1 ;
-(void)setInternalHandles:(NSMutableSet *)arg1 ;
-(void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMFuture *)sessionInterruptionFuture;
-(void)_registerForApplicationLifecycleEvents;
-(id)getHandlesFollowingMyLocation;
-(void)_checkAndDisplayMeDeviceSwitchAlert;
-(void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)getHandlesSharingLocationsWithMe;
-(void)showShareMyLocationiCloudSettingsOffAlert;
-(id)verifyRestrictionsAndShowDialogIfRequired;
-(void)receivedMappingPacket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRecordIdForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesWithPendingOffers:(/*^block*/id)arg1 ;
-(void)setActiveDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canOfferToHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showShareMyLocationRestrictedAlert;
-(void)setCachedGetHandlesFollowingMyLocation:(NSSet *)arg1 ;
-(void)setSessionInvalidationFuture:(FMFuture *)arg1 ;
-(id)getAllDevices;
-(void)getPrettyNameForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendNotNowToHandle:(id)arg1 callerId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllowFriendRequestsEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHideMyLocationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)handlesQueue;
-(void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)restoreClientConnection;
-(void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1 ;
-(void)removeHandles:(id)arg1 ;
-(NSSet *)cachedGetHandlesFollowingMyLocation;
-(void)isAllowFriendRequestsEnabled:(/*^block*/id)arg1 ;
-(void)setHandlesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAllLocations:(/*^block*/id)arg1 ;
-(id)getActiveLocationSharingDevice;
-(id)cachedLocationForHandle:(id)arg1 ;
-(id)__connection;
-(void)setCachedCanShareLocationWithHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sessionHandleReport:(/*^block*/id)arg1 ;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<FMFSessionDelegate>)arg1 ;
-(NSSet *)cachedGetHandlesSharingLocationsWithMe;
-(void)getHandlesSharingLocationsWithMe:(/*^block*/id)arg1 ;
-(void)locatingInProgressChanged:(id)arg1 ;
-(void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sendAutoSwitchMeDevice;
-(void)reloadDataIfNotLoaded;
-(void)_registerForFMFDLaunchedNotification;
-(NSMutableDictionary *)cachedOfferExpirationForHandleByHandle;
-(void)getHandlesFollowingMyLocation:(/*^block*/id)arg1 ;
-(void)getFences:(/*^block*/id)arg1 ;
-(void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIsModelInitialized:(BOOL)arg1 ;
-(void)getAccountEmailAddress:(/*^block*/id)arg1 ;
-(void)_daemonDidLaunch;
-(void)showMeDeviceAlert;
-(void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)getFavoritesSharingLocationWithMe;
-(void)favoritesForMaxCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedOfferExpirationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)encryptPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dispatchOnDelegateQueue:(/*^block*/id)arg1 ;
-(BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(BOOL)is5XXError:(id)arg1 ;
-(void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidate;
-(void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleIncomingAirDropURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(id<FMFSessionDelegate>)delegate;
-(void)getDataForPerformanceRequest:(/*^block*/id)arg1 ;
-(BOOL)_isNoMappingPacketReturnedError:(id)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)handleAndLocationForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

