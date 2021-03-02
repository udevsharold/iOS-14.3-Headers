/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
#import <CalendarFoundation/CalendarFoundation-Structs.h>
@class NSArray, CalLogNode, NSObject;

@interface CalLogMaster : NSObject {

	NSArray* _topLevelNodes;
	CalLogNode* _oslogNode;
	CalLogNode* _rootConfigurationNode;
	CalLogNode* _standardOutNode;
	CalLogNode* _userNotificationNode;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _notificationRegistrationToken;
	BOOL _hasValidNotificationRegistrationToken;
	BOOL _autoFlush;

}

@property (nonatomic,retain) NSArray * topLevelNodes;                                 //@synthesize topLevelNodes=_topLevelNodes - In the implementation block
@property (nonatomic,retain) CalLogNode * oslogNode;                                  //@synthesize oslogNode=_oslogNode - In the implementation block
@property (nonatomic,retain) CalLogNode * standardOutNode;                            //@synthesize standardOutNode=_standardOutNode - In the implementation block
@property (nonatomic,retain) CalLogNode * rootConfigurationNode;                      //@synthesize rootConfigurationNode=_rootConfigurationNode - In the implementation block
@property (nonatomic,retain) CalLogNode * userNotificationNode;                       //@synthesize userNotificationNode=_userNotificationNode - In the implementation block
@property (assign,nonatomic) int notificationRegistrationToken;                       //@synthesize notificationRegistrationToken=_notificationRegistrationToken - In the implementation block
@property (assign,nonatomic) BOOL hasValidNotificationRegistrationToken;              //@synthesize hasValidNotificationRegistrationToken=_hasValidNotificationRegistrationToken - In the implementation block
@property (assign,nonatomic) BOOL autoFlush;                                          //@synthesize autoFlush=_autoFlush - In the implementation block
+(id)sharedLogMaster;
-(id)init;
-(void)loadPreferredConfiguration;
-(void)registerForConfigUpdateNotifications;
-(void)configureOSLogNode;
-(void)configureRootConfigurationNode;
-(void)setAutoFlush:(BOOL)arg1 ;
-(void)reloadTopLevelNodes;
-(int)findMinimumLevel;
-(id)findWhiteList;
-(CalLogNode *)oslogNode;
-(void)setOslogNode:(CalLogNode *)arg1 ;
-(CalLogNode *)standardOutNode;
-(void)setStandardOutNode:(CalLogNode *)arg1 ;
-(id)copyLegacyLoggingDefaultsConvertedToNamespaces;
-(void)setRootConfigurationNode:(CalLogNode *)arg1 ;
-(CalLogNode *)rootConfigurationNode;
-(CalLogNode *)userNotificationNode;
-(void)setTopLevelNodes:(NSArray *)arg1 ;
-(NSArray *)topLevelNodes;
-(void)setHasValidNotificationRegistrationToken:(BOOL)arg1 ;
-(void)setNotificationRegistrationToken:(int)arg1 ;
-(void)processEnvelope:(id)arg1 ;
-(BOOL)autoFlush;
-(void)configureStandardOutNode;
-(BOOL)shouldProcessNamespace:(id)arg1 ;
-(void)setUserNotificationNode:(CalLogNode *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)notificationRegistrationToken;
-(BOOL)hasValidNotificationRegistrationToken;
-(void)dealloc;
-(BOOL)flush;
@end
