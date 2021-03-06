/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {

	unsigned long long _unreadCount;
	long long _lastFailedMessageDate;
	BOOL _showingFailure;
	BOOL _isUnexpectedlyLogOut;
	BOOL _addedObserverForUnexpectedlyLoggedOut;
	UNUserNotificationCenter* _notificationCenter;
	IMDefaults* _sharedDefaultsInstance;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) IMDefaults * sharedDefaultsInstance;                        //@synthesize sharedDefaultsInstance=_sharedDefaultsInstance - In the implementation block
+(BOOL)_isUserIntentNotLoggedOut;
+(BOOL)_isUsableSendingForAccount:(id)arg1 ;
+(BOOL)_iMessageEnabled;
+(id)sharedInstance;
+(BOOL)_iMessageFailedAccountIsIrreparable;
+(BOOL)_isTryingToLogin;
+(id)_accountsArrayForServiceIMessage;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(UNUserNotificationCenter *)notificationCenter;
-(id)init;
-(id)initWithMessageStore:(id)arg1 ;
-(IMDefaults *)sharedDefaultsInstance;
-(void)_stopSuppressingSound;
-(void)dealloc;
-(BOOL)_isUnexpectedlyLogOutValue;
-(void)_saveFailureDate:(long long)arg1 ;
-(void)_compareLastFailureDateAndUpdateBadge:(long long)arg1 ;
-(void)_checkIfUnexpectedlyLoggedOut;
-(BOOL)_shouldShowFailureString;
-(void)setSharedDefaultsInstance:(IMDefaults *)arg1 ;
-(void)_updateBadge;
-(BOOL)_isUnexpectedlyLoggedOut;
-(long long)_savedFailureDate;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2 ;
-(void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1 ;
-(void)_clearFailureBadge;
-(void)_cacheFailureDate:(long long)arg1 ;
-(void)_postBadgeNumber:(id)arg1 ;
-(void)_handleUnexpectedLogout;
-(BOOL)isInAppleStoreDemoMode;
-(void)_postBadgeString:(id)arg1 ;
@end

