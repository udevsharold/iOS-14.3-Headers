/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKNotificationID, CKRecordID, NSString, NSArray, NSNumber, CKContainerID;

@interface CKNotification : NSObject <NSSecureCoding> {

	BOOL _isPruned;
	long long _notificationType;
	CKNotificationID* _notificationID;
	CKRecordID* _subscriptionOwnerUserRecordID;
	NSString* _alertBody;
	NSString* _alertLocalizationKey;
	NSArray* _alertLocalizationArgs;
	NSString* _title;
	NSString* _titleLocalizationKey;
	NSArray* _titleLocalizationArgs;
	NSString* _subtitle;
	NSString* _subtitleLocalizationKey;
	NSArray* _subtitleLocalizationArgs;
	NSString* _alertActionLocalizationKey;
	NSString* _alertLaunchImage;
	NSNumber* _badge;
	NSString* _soundName;
	NSString* _subscriptionID;
	NSString* _category;
	CKContainerID* _containerID;

}

@property (assign,nonatomic) long long notificationType;                            //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy) CKNotificationID * notificationID;                       //@synthesize notificationID=_notificationID - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                             //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKRecordID * subscriptionOwnerUserRecordID;              //@synthesize subscriptionOwnerUserRecordID=_subscriptionOwnerUserRecordID - In the implementation block
@property (assign,nonatomic) BOOL isPruned;                                         //@synthesize isPruned=_isPruned - In the implementation block
@property (nonatomic,copy) NSString * alertBody;                                    //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,copy) NSString * alertLocalizationKey;                         //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * alertLocalizationArgs;                         //@synthesize alertLocalizationArgs=_alertLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleLocalizationKey;                         //@synthesize titleLocalizationKey=_titleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * titleLocalizationArgs;                         //@synthesize titleLocalizationArgs=_titleLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalizationKey;                      //@synthesize subtitleLocalizationKey=_subtitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * subtitleLocalizationArgs;                      //@synthesize subtitleLocalizationArgs=_subtitleLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * alertActionLocalizationKey;                   //@synthesize alertActionLocalizationKey=_alertActionLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * alertLaunchImage;                             //@synthesize alertLaunchImage=_alertLaunchImage - In the implementation block
@property (nonatomic,copy) NSNumber * badge;                                        //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy) NSString * soundName;                                    //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSString * category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (nonatomic,copy,readonly) NSString * subscriptionID;                      //@synthesize subscriptionID=_subscriptionID - In the implementation block
+(id)_realNotificationFromRemoteNotificationDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)notificationFromRemoteNotificationDictionary:(id)arg1 ;
-(NSString *)subscriptionID;
-(NSString *)containerIdentifier;
-(void)setSubtitleLocalizationKey:(NSString *)arg1 ;
-(NSArray *)subtitleLocalizationArgs;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)subtitle;
-(void)setIsPruned:(BOOL)arg1 ;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setNotificationID:(CKNotificationID *)arg1 ;
-(void)setSubscriptionOwnerUserRecordID:(CKRecordID *)arg1 ;
-(void)setTitleLocalizationArgs:(NSArray *)arg1 ;
-(void)setNotificationType:(long long)arg1 ;
-(long long)notificationType;
-(id)init;
-(CKContainerID *)containerID;
-(id)CKPropertiesDescription;
-(NSString *)alertBody;
-(void)setSoundName:(NSString *)arg1 ;
-(BOOL)isPruned;
-(NSString *)alertLocalizationKey;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(void)setAlertBody:(NSString *)arg1 ;
-(void)setSubtitleLocalizationArgs:(NSArray *)arg1 ;
-(NSString *)alertActionLocalizationKey;
-(NSArray *)alertLocalizationArgs;
-(NSString *)soundName;
-(BOOL)isRead;
-(id)initWithCoder:(id)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(CKNotificationID *)notificationID;
-(id)description;
-(NSString *)titleLocalizationKey;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(NSString *)subtitleLocalizationKey;
-(NSArray *)titleLocalizationArgs;
-(CKRecordID *)subscriptionOwnerUserRecordID;
-(void)setBadge:(NSNumber *)arg1 ;
-(void)setAlertLocalizationArgs:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)_initBare;
-(void)setAlertLaunchImage:(NSString *)arg1 ;
-(NSNumber *)badge;
-(NSString *)alertLaunchImage;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setAlertActionLocalizationKey:(NSString *)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
@end

