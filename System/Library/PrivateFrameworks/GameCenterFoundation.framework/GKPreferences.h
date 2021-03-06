/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString, NSDate;

@interface GKPreferences : NSObject {

	BOOL _shouldSynchronizeOnNextRead;
	BOOL _webKitInspectElementEnabled;
	NSDictionary* _overrideValues;

}

@property (assign,nonatomic,__weak) id<GKPreferencesDelegate> preferencesDelegate; 
@property (getter=isStoreDemoModeEnabled,nonatomic,readonly) BOOL storeDemoModeEnabled; 
@property (getter=isAddingFriendsRestricted,nonatomic,readonly) BOOL addingFriendsRestricted; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (getter=isAppInstallationRestricted,nonatomic,readonly) BOOL appInstallationRestricted; 
@property (getter=isAccountModificationRestricted,nonatomic,readonly) BOOL accountModificationRestricted; 
@property (getter=isGameCenterRestricted,nonatomic,readonly) BOOL gameCenterRestricted; 
@property (getter=isSharingRestricted,nonatomic,readonly) BOOL sharingRestricted; 
@property (getter=isCustomizedCommunicationRestricted,nonatomic,readonly) BOOL customizedCommunicationRestricted; 
@property (getter=isNearbyMultiplayerRestricted,nonatomic,readonly) BOOL nearbyMultiplayerRestricted; 
@property (getter=isProfileModificationRestricted,nonatomic,readonly) BOOL profileModificationRestricted; 
@property (getter=isProfilePrivacyModificationRestricted,nonatomic,readonly) BOOL profilePrivacyModificationRestricted; 
@property (nonatomic,readonly) unsigned long long multiplayerAllowedPlayerType; 
@property (assign,nonatomic) BOOL _shouldSynchronizeOnNextRead;                                                                      //@synthesize shouldSynchronizeOnNextRead=_shouldSynchronizeOnNextRead - In the implementation block
@property (copy) NSDictionary * overrideValues;                                                                                      //@synthesize overrideValues=_overrideValues - In the implementation block
@property (assign,nonatomic) long long environment; 
@property (nonatomic,retain) NSString * storeBagURL; 
@property (assign,nonatomic) unsigned long long mescalSetupRetries; 
@property (assign,nonatomic) long long networkManagerStateOverride; 
@property (assign,nonatomic) NSString * networkManagerUserOverride; 
@property (assign,nonatomic) unsigned long long loginDisableThreshold; 
@property (assign,nonatomic) unsigned long long coreRecentUpperLimit; 
@property (assign,nonatomic) unsigned long long coreRecentMultiplier; 
@property (assign,nonatomic) BOOL allowUnsignedBag; 
@property (assign,nonatomic) BOOL useTestProtocols; 
@property (assign,nonatomic) BOOL enterSandbox; 
@property (assign,nonatomic) BOOL forceDefaultNickname; 
@property (assign,nonatomic) BOOL forceDefaultPrivacy; 
@property (assign,nonatomic) BOOL forceUnderage; 
@property (assign,nonatomic) double terminationInterval; 
@property (assign,nonatomic) double garbageCollectionInterval; 
@property (assign,nonatomic) double minimumCacheTTL; 
@property (assign,nonatomic) double cacheTTLOverride; 
@property (assign,nonatomic) double operationTimeout; 
@property (assign,nonatomic) double operationRetryDelay; 
@property (assign,nonatomic) unsigned long long operationRetryCount; 
@property (assign,nonatomic) double debugRequestTimeout; 
@property (assign,getter=isNotificationCenterEnabled,nonatomic) BOOL notificationCenterEnabled; 
@property (assign,nonatomic) BOOL notificationBadgesEnabled; 
@property (assign,nonatomic) BOOL notificationSoundsEnabled; 
@property (assign,nonatomic) BOOL notificationAlertsEnabled; 
@property (assign,nonatomic) BOOL verboseLogging; 
@property (assign,nonatomic) unsigned logFilter; 
@property (assign,getter=isComprehensiveLoggingEnabled,nonatomic) BOOL comprehensiveLoggingEnabled; 
@property (nonatomic,copy) NSString * testRunID; 
@property (assign,getter=isClipGestureEnabled,nonatomic) BOOL clipGestureEnabled; 
@property (assign,nonatomic) BOOL forceRelay; 
@property (assign,nonatomic) BOOL preemptiveRelay; 
@property (assign,nonatomic) long long pushEnvironment; 
@property (assign,nonatomic) long long pipeliningSetting; 
@property (assign,nonatomic) BOOL restrictToAutomatch; 
@property (assign,nonatomic) unsigned long long recentNumberOfPlayers; 
@property (assign,nonatomic) unsigned long long maxPlayersP2P; 
@property (assign,nonatomic) unsigned long long maxPlayersHosted; 
@property (assign,nonatomic) unsigned long long maxPlayersTurnBased; 
@property (assign,nonatomic) unsigned long long maxGameStateSizeTurnBased; 
@property (assign,nonatomic) unsigned long long exchangeDataMaximumSize; 
@property (assign,nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer; 
@property (nonatomic,readonly) BOOL HTTPShouldUsePipelining; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersP2P; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersHosted; 
@property (nonatomic,readonly) unsigned long long maxDefaultPlayersTurnBased; 
@property (nonatomic,readonly) unsigned long long maxDefaultGameStateSizeTurnBased; 
@property (nonatomic,readonly) unsigned long long exchangeDataDefaultMaximumSize; 
@property (nonatomic,readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer; 
@property (assign,nonatomic) BOOL useInternalHeader; 
@property (assign,getter=isWebKitInspectElementEnabled,nonatomic) BOOL webKitInspectElementEnabled;                                  //@synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAnnotateImageUsage; 
@property (assign,nonatomic) BOOL shouldTrackAtlasImageUsage; 
@property (assign,nonatomic) BOOL shouldUseTestIcons; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToICloud; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToTwitter; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToFacebook; 
@property (nonatomic,readonly) BOOL shouldDisallowInvitesFromStrangers; 
@property (assign,nonatomic) BOOL shouldAllowNearbyMultiplayer; 
@property (assign,nonatomic) BOOL shouldAddPlayerInfoToAddressBook; 
@property (nonatomic,readonly) BOOL shouldAllowSharing; 
@property (nonatomic,readonly) BOOL shouldAllowCustomCommunication; 
@property (assign,nonatomic) unsigned long long maxRecentPlayersCount; 
@property (assign,nonatomic) double maxRecentPlayersTime; 
@property (assign,nonatomic) BOOL newDashboardUI; 
@property (assign,nonatomic) BOOL arcadeDashboardSection; 
@property (assign,nonatomic) BOOL accessPointIsOnAutomatically; 
@property (assign,nonatomic) BOOL accessPointShowHighlights; 
@property (assign,nonatomic) long long accessPointLocation; 
@property (assign,nonatomic) BOOL supportsChallenges; 
@property (assign,nonatomic) BOOL dashboardDeepLinkEnabled; 
@property (assign,nonatomic) BOOL tournamentsDebuggingEnabled; 
@property (assign,nonatomic) long long tournamentState; 
@property (assign,nonatomic) long long tournamentParticipantState; 
@property (assign,nonatomic) long long tournamentPlayers; 
@property (assign,nonatomic) long long tournamentReplays; 
@property (assign,nonatomic) long long tournamentDuration; 
@property (nonatomic,retain) NSDate * tournamentStartDate; 
@property (nonatomic,retain) NSDate * tournamentEndDate; 
@property (assign,nonatomic) long long tournamentMinPlayers; 
@property (assign,nonatomic) long long tournamentMaxPlayers; 
@property (assign,nonatomic) long long tournamentMaxReplays; 
@property (assign,nonatomic) long long tournamentAutoDuration; 
@property (assign,nonatomic) long long tournamentCustomMinPlayers; 
@property (assign,nonatomic) long long tournamentCustomMaxPlayers; 
@property (assign,nonatomic) long long tournamentCustomMaxReplays; 
@property (assign,nonatomic) long long tournamentCustomDuration; 
@property (assign,nonatomic) long long tournamentUIAppearanceStyle; 
@property (assign,nonatomic) long long tournamentCreationMethod; 
@property (assign,nonatomic) BOOL restrictToTournamentPlayers; 
@property (assign,nonatomic) long long tournamentServer; 
@property (assign,nonatomic) BOOL tournamentDemoModeEnabled; 
@property (assign,nonatomic) long long tournamentMaxSimulatedPlayers; 
@property (assign,nonatomic) long long tournamentMaxSimulatedFriends; 
+(id)shared;
+(id)displayNameForEnvironment:(long long)arg1 ;
+(id)hostNameForEnvironment:(long long)arg1 ;
-(BOOL)isInternalBuild;
-(double)operationRetryDelay;
-(void)setNotificationAlertsEnabled:(BOOL)arg1 ;
-(void)setShouldLinkPlayerToICloud:(BOOL)arg1 ;
-(long long)tournamentMaxSimulatedPlayers;
-(long long)tournamentState;
-(unsigned long long)maxDefaultGameStateSizeTurnBased;
-(unsigned long long)maxDefaultPlayersHosted;
-(unsigned long long)maxPlayersTurnBased;
-(void)setIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned long long)arg1 ;
-(BOOL)supportsChallenges;
-(void)setNetworkManagerUserOverride:(NSString *)arg1 ;
-(BOOL)forceDefaultNickname;
-(void)synchronize;
-(BOOL)isCustomizedCommunicationRestricted;
-(BOOL)shouldUseTestIcons;
-(BOOL)shouldAnnotateImageUsage;
-(id)init;
-(BOOL)useTestProtocols;
-(void)setMaxPlayersHosted:(unsigned long long)arg1 ;
-(BOOL)isNotificationCenterEnabled;
-(BOOL)isSharingRestricted;
-(id)stringValueForKey:(CFStringRef)arg1 defaultValue:(id)arg2 ;
-(BOOL)isAppInstallationRestricted;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
-(void)setShouldTrackAtlasImageUsage:(BOOL)arg1 ;
-(void)setPreemptiveRelay:(BOOL)arg1 ;
-(BOOL)restrictionEnabledForKey:(id)arg1 ;
-(void)_didWriteKey:(CFStringRef)arg1 ;
-(BOOL)shouldLinkPlayerToICloud;
-(long long)pipeliningSetting;
-(void)setCacheTTLOverride:(double)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)maxDefaultPlayersP2P;
-(long long)tournamentMaxPlayers;
-(long long)tournamentCustomDuration;
-(void)setMaxPlayersP2P:(unsigned long long)arg1 ;
-(BOOL)arcadeDashboardSection;
-(BOOL)tournamentDemoModeEnabled;
-(void)setAccessPointLocation:(long long)arg1 ;
-(double)garbageCollectionInterval;
-(void)dealloc;
-(long long)accessPointLocation;
-(void)setOperationTimeout:(double)arg1 ;
-(id)initWithUIKitNotifications;
-(id)preferencesValueForKey:(id)arg1 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 ;
-(void)removeOverrideForKey:(id)arg1 ;
-(BOOL)shouldLinkPlayerToTwitter;
-(void)setTournamentAutoDuration:(long long)arg1 ;
-(void)setNotificationCenterEnabled:(BOOL)arg1 ;
-(NSDate *)tournamentEndDate;
-(BOOL)shouldDisallowInvitesFromStrangers;
-(BOOL)notificationBadgesEnabled;
-(BOOL)shouldAddPlayerInfoToAddressBook;
-(void)setShouldLinkPlayerToFacebook:(BOOL)arg1 ;
-(double)terminationInterval;
-(void)setArcadeDashboardSection:(BOOL)arg1 ;
-(void)setRestrictToTournamentPlayers:(BOOL)arg1 ;
-(long long)tournamentAutoDuration;
-(BOOL)_shouldSynchronizeOnNextRead;
-(void)setNetworkManagerStateOverride:(long long)arg1 ;
-(void)setTournamentDemoModeEnabled:(BOOL)arg1 ;
-(void)setShouldUseTestIcons:(BOOL)arg1 ;
-(unsigned long long)maxDefaultPlayersTurnBased;
-(BOOL)newDashboardUI;
-(void)setTerminationInterval:(double)arg1 ;
-(void)setTournamentEndDate:(NSDate *)arg1 ;
-(void)setLoginDisableThreshold:(unsigned long long)arg1 ;
-(BOOL)preemptiveRelay;
-(NSString *)networkManagerUserOverride;
-(void)setTournamentMinPlayers:(long long)arg1 ;
-(void)setTournamentReplays:(long long)arg1 ;
-(NSDate *)tournamentStartDate;
-(unsigned long long)mescalSetupRetries;
-(double)cacheTTLOverride;
-(BOOL)shouldAllowNearbyMultiplayer;
-(void)setWebKitInspectElementEnabled:(BOOL)arg1 ;
-(long long)tournamentMaxReplays;
-(long long)tournamentCustomMaxPlayers;
-(long long)tournamentCustomMinPlayers;
-(long long)tournamentCreationMethod;
-(long long)tournamentParticipantState;
-(BOOL)isStoreDemoModeEnabled;
-(long long)tournamentUIAppearanceStyle;
-(BOOL)forceDefaultPrivacy;
-(id)initWithoutUIKitNotifications;
-(void)setTournamentPlayers:(long long)arg1 ;
-(unsigned long long)exchangeDataMaximumSize;
-(void)setCoreRecentUpperLimit:(unsigned long long)arg1 ;
-(long long)tournamentServer;
-(void)setUnsignedIntegerValue:(long long)arg1 forKey:(CFStringRef)arg2 ;
-(void)setForceRelay:(BOOL)arg1 ;
-(void)setAllowUnsignedBag:(BOOL)arg1 ;
-(void)setDashboardDeepLinkEnabled:(BOOL)arg1 ;
-(long long)tournamentMinPlayers;
-(void)setComprehensiveLoggingEnabled:(BOOL)arg1 ;
-(BOOL)shouldAllowCustomCommunication;
-(double)timeIntervalForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
-(void)setMaxRecentPlayersCount:(unsigned long long)arg1 ;
-(void)setTournamentUIAppearanceStyle:(long long)arg1 ;
-(void)setTestRunID:(NSString *)arg1 ;
-(BOOL)isClipGestureEnabled;
-(void)setExchangeDataMaximumSize:(unsigned long long)arg1 ;
-(void)setOverrideValues:(NSDictionary *)arg1 ;
-(double)maxRecentPlayersTime;
-(void)setPreferencesDelegate:(id<GKPreferencesDelegate>)arg1 ;
-(void)setTournamentCustomMinPlayers:(long long)arg1 ;
-(long long)tournamentDuration;
-(unsigned long long)maxRecentPlayersCount;
-(void)setShouldLinkPlayerToTwitter:(BOOL)arg1 ;
-(void)setDebugRequestTimeout:(double)arg1 ;
-(BOOL)verboseLogging;
-(void)setTournamentServer:(long long)arg1 ;
-(unsigned long long)coreRecentUpperLimit;
-(BOOL)isGameCenterRestricted;
-(void)setPushEnvironment:(long long)arg1 ;
-(void)setMescalSetupRetries:(unsigned long long)arg1 ;
-(BOOL)notificationSoundsEnabled;
-(void)setMaxRecentPlayersTime:(double)arg1 ;
-(BOOL)allowUnsignedBag;
-(long long)unsignedIntegerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(BOOL)dashboardDeepLinkEnabled;
-(void)setForceDefaultPrivacy:(BOOL)arg1 ;
-(double)operationTimeout;
-(void)setTournamentState:(long long)arg1 ;
-(BOOL)isNearbyMultiplayerRestricted;
-(void)setTournamentsDebuggingEnabled:(BOOL)arg1 ;
-(void)setTournamentMaxPlayers:(long long)arg1 ;
-(void)setRecentNumberOfPlayers:(unsigned long long)arg1 ;
-(BOOL)shouldLinkPlayerToFacebook;
-(long long)tournamentCustomMaxReplays;
-(void)setOperationRetryCount:(unsigned long long)arg1 ;
-(BOOL)notificationAlertsEnabled;
-(BOOL)isProfilePrivacyModificationRestricted;
-(void)setRestrictToAutomatch:(BOOL)arg1 ;
-(void)setNewDashboardUI:(BOOL)arg1 ;
-(void)setPipeliningSetting:(long long)arg1 ;
-(void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1 ;
-(long long)tournamentMaxSimulatedFriends;
-(unsigned long long)maxPlayersHosted;
-(unsigned long long)exchangeDataDefaultMaximumSize;
-(BOOL)accessPointShowHighlights;
-(BOOL)forceRelay;
-(unsigned long long)coreRecentMultiplier;
-(long long)tournamentReplays;
-(unsigned long long)loginDisableThreshold;
-(void)setAccessPointShowHighlights:(BOOL)arg1 ;
-(NSDictionary *)overrideValues;
-(void)setSupportsChallenges:(BOOL)arg1 ;
-(void)setTournamentStartDate:(NSDate *)arg1 ;
-(BOOL)forceUnderage;
-(void)set_shouldSynchronizeOnNextRead:(BOOL)arg1 ;
-(BOOL)isProfileModificationRestricted;
-(void)applicationWillEnterBackground:(id)arg1 ;
-(void)setTournamentMaxReplays:(long long)arg1 ;
-(BOOL)isAddingFriendsRestricted;
-(unsigned long long)maxGameStateSizeTurnBased;
-(void)setLogFilter:(unsigned)arg1 ;
-(void)setUseTestProtocols:(BOOL)arg1 ;
-(void)setTimeInterval:(double)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)isWebKitInspectElementEnabled;
-(long long)networkManagerStateOverride;
-(void)setTournamentMaxSimulatedPlayers:(long long)arg1 ;
-(void)setMaxGameStateSizeTurnBased:(unsigned long long)arg1 ;
-(void)setShouldAnnotateImageUsage:(BOOL)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(void)setStringValue:(id)arg1 forKey:(CFStringRef)arg2 ;
-(NSString *)storeBagURL;
-(void)setTournamentCreationMethod:(long long)arg1 ;
-(void)setTournamentParticipantState:(long long)arg1 ;
-(void)setShouldAllowNearbyMultiplayer:(BOOL)arg1 ;
-(BOOL)isMultiplayerGamingRestricted;
-(BOOL)restrictToTournamentPlayers;
-(void)setForceUnderage:(BOOL)arg1 ;
-(void)setGarbageCollectionInterval:(double)arg1 ;
-(void)setTournamentCustomDuration:(long long)arg1 ;
-(NSString *)testRunID;
-(void)setOperationRetryDelay:(double)arg1 ;
-(unsigned long long)exchangeDefaultMaxInitiatedExchangesPerPlayer;
-(long long)environment;
-(void)setVerboseLogging:(BOOL)arg1 ;
-(long long)tournamentPlayers;
-(BOOL)shouldTrackAtlasImageUsage;
-(void)setEnvironment:(long long)arg1 ;
-(double)debugRequestTimeout;
-(void)setTournamentCustomMaxReplays:(long long)arg1 ;
-(unsigned long long)recentNumberOfPlayers;
-(void)setMinimumCacheTTL:(double)arg1 ;
-(void)setClipGestureEnabled:(BOOL)arg1 ;
-(unsigned long long)operationRetryCount;
-(void)setTournamentDuration:(long long)arg1 ;
-(void)setBooleanValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)isAccountModificationRestricted;
-(void)setTournamentMaxSimulatedFriends:(long long)arg1 ;
-(long long)integerValueForKey:(CFStringRef)arg1 defaultValue:(long long)arg2 ;
-(unsigned)logFilter;
-(void)setUseInternalHeader:(BOOL)arg1 ;
-(unsigned long long)multiplayerAllowedPlayerType;
-(BOOL)enterSandbox;
-(void)setCoreRecentMultiplier:(unsigned long long)arg1 ;
-(BOOL)tournamentsDebuggingEnabled;
-(unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
-(long long)pushEnvironment;
-(void)setNotificationSoundsEnabled:(BOOL)arg1 ;
-(double)minimumCacheTTL;
-(void)setTournamentCustomMaxPlayers:(long long)arg1 ;
-(void)setNotificationBadgesEnabled:(BOOL)arg1 ;
-(BOOL)accessPointIsOnAutomatically;
-(void)setAccessPointIsOnAutomatically:(BOOL)arg1 ;
-(BOOL)useInternalHeader;
-(unsigned long long)maxPlayersP2P;
-(void)setForceDefaultNickname:(BOOL)arg1 ;
-(void)setMaxPlayersTurnBased:(unsigned long long)arg1 ;
-(id<GKPreferencesDelegate>)preferencesDelegate;
-(void)invalidate;
-(BOOL)restrictToAutomatch;
-(BOOL)shouldAllowSharing;
-(void)setStoreBagURL:(NSString *)arg1 ;
-(void)setEnterSandbox:(BOOL)arg1 ;
-(id)valueRestrictionForKey:(id)arg1 ;
-(BOOL)isComprehensiveLoggingEnabled;
@end

