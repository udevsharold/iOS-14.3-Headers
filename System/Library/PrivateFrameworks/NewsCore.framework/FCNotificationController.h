/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@protocol FCCoreConfigurationManager;
@class NSString, FCUserInfo, FCCommandQueue;

@interface FCNotificationController : NSObject <FCUserInfoObserving> {

	BOOL _publisherNotificationsAllowed;
	BOOL _appleNewsNotificationsAllowed;
	BOOL _shouldUseNewsUINotificationHandling;
	NSString* _notificationsUserID;
	NSString* _deviceToken;
	FCUserInfo* _userInfo;
	FCCommandQueue* _commandQueue;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,retain) FCUserInfo * userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) FCCommandQueue * commandQueue;                                    //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,copy) NSString * notificationsUserID;                                     //@synthesize notificationsUserID=_notificationsUserID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                                             //@synthesize deviceToken=_deviceToken - In the implementation block
@property (assign,nonatomic) BOOL publisherNotificationsAllowed;                               //@synthesize publisherNotificationsAllowed=_publisherNotificationsAllowed - In the implementation block
@property (assign,nonatomic) BOOL appleNewsNotificationsAllowed;                               //@synthesize appleNewsNotificationsAllowed=_appleNewsNotificationsAllowed - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNewsUINotificationHandling;                         //@synthesize shouldUseNewsUINotificationHandling=_shouldUseNewsUINotificationHandling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setUserInfo:(FCUserInfo *)arg1 ;
-(FCCommandQueue *)commandQueue;
-(void)_registerDeviceToken:(id)arg1 ;
-(BOOL)shouldUseNewsUINotificationHandling;
-(id)init;
-(NSString *)deviceToken;
-(BOOL)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 ;
-(BOOL)setMarketingNotificationsEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(void)setAppleNewsNotificationsAllowed:(BOOL)arg1 ;
-(void)dealloc;
-(void)setNewIssueNotificationsEnabled:(BOOL)arg1 ;
-(FCUserInfo *)userInfo;
-(void)refreshNotificationsFromAppleNews;
-(BOOL)publisherNotificationsAllowed;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1 ;
-(void)setNotificationsUserID:(NSString *)arg1 ;
-(NSString *)notificationsUserID;
-(id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 publisherNotificationsAllowed:(BOOL)arg4 appleNewsNotificationsAllowed:(BOOL)arg5 ;
-(void)setEndOfAudioTrackNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)registerNotificationsForTagID:(id)arg1 isPaid:(BOOL)arg2 ;
-(void)setPublisherNotificationsAllowed:(BOOL)arg1 ;
-(void)setShouldUseNewsUINotificationHandling:(BOOL)arg1 ;
-(BOOL)unregisterNotificationsForTagID:(id)arg1 ;
-(BOOL)appleNewsNotificationsAllowed;
-(id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1 ;
-(void)registerDeviceToken:(id)arg1 ;
-(void)setCommandQueue:(FCCommandQueue *)arg1 ;
@end
