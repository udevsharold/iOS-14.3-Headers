/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMSystemMonitorListener.h>

@class NSMutableDictionary, NSString, IMDService, IMDServiceSession, NSDictionary;

@interface IMDAccount : NSObject <IMSystemMonitorListener> {

	NSMutableDictionary* _accountDefaults;
	NSString* _account;
	long long _accountType;
	IMDService* _service;
	IMDServiceSession* _session;
	NSMutableDictionary* _myStatus;
	NSDictionary* _lastPostedStatus;
	BOOL _isLoading;
	BOOL _isManaged;
	NSString* _loginStatusMessage;
	unsigned _loginStatus;
	int _disconnectReason;

}

@property (assign,nonatomic) BOOL isLoading;                                             //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL wasDisabledAutomatically; 
@property (nonatomic,readonly) BOOL shouldPublishNowPlaying; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,retain,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,retain,readonly) NSDictionary * statusToSave; 
@property (nonatomic,retain,readonly) NSDictionary * statusToPost; 
@property (nonatomic,retain,readonly) NSDictionary * accountInfoToPost; 
@property (nonatomic,retain,readonly) NSDictionary * accountDefaults;                    //@synthesize accountDefaults=_accountDefaults - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountID;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) NSString * loginID; 
@property (nonatomic,retain,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) IMDServiceSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isDisabled; 
@property (assign,nonatomic) BOOL isManaged;                                             //@synthesize isManaged=_isManaged - In the implementation block
@property (nonatomic,readonly) BOOL canMakeDowngradeRoutingChecks; 
@property (nonatomic,retain,readonly) NSDictionary * status; 
@property (nonatomic,readonly) unsigned serviceLoginStatus;                              //@synthesize loginStatus=_loginStatus - In the implementation block
@property (nonatomic,readonly) int serviceDisconnectReason;                              //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceLoginStatusMessage;              //@synthesize loginStatusMessage=_loginStatusMessage - In the implementation block
@property (nonatomic,readonly) long long accountType; 
-(id)idsAccount;
-(BOOL)isDisabled;
-(int)registrationError;
-(void)postAccountCapabilitiesToListener:(id)arg1 ;
-(void)setSession:(IMDServiceSession *)arg1 ;
-(void)releaseSession;
-(void)writeAccountDefaults:(id)arg1 ;
-(unsigned)serviceLoginStatus;
-(BOOL)isManaged;
-(void)systemDidBecomeUnidle;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)systemDidBecomeIdle;
-(NSString *)loginID;
-(IMDServiceSession *)session;
-(void)createSessionIfNecessary;
-(int)serviceDisconnectReason;
-(NSDictionary *)statusToSave;
-(NSString *)accountID;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(long long)accountType;
-(BOOL)canMakeDowngradeRoutingChecks;
-(BOOL)wasDisabledAutomatically;
-(void)dealloc;
-(void)_updateIdle;
-(IMDService *)service;
-(BOOL)isLoading;
-(NSDictionary *)registrationAlertInfo;
-(void)tunesController:(id)arg1 playerInfoChanged:(id)arg2 ;
-(NSDictionary *)status;
-(int)registrationStatus;
-(void)setIsManaged:(BOOL)arg1 ;
-(NSDictionary *)accountInfoToPost;
-(NSDictionary *)accountDefaults;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 ;
-(void)postAccountCapabilities;
-(BOOL)shouldPublishNowPlaying;
-(BOOL)isActive;
-(void)changeStatus:(id)arg1 ;
-(void)_forceSetLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(id)_registrationInfo;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 ;
-(NSString *)serviceLoginStatusMessage;
-(NSDictionary *)statusToPost;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(void)setWasDisabledAutomatically:(BOOL)arg1 ;
@end
