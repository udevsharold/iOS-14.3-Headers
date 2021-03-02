/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVAccountInfoProvider.h>

@protocol CoreDAVAccountInfoProvider;
@class NSString, NSData, NSURL, NSDictionary, NSSet, NSError;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {

	NSString* _scheme;
	NSString* _host;
	NSString* _serverRoot;
	long long _port;
	NSString* _user;
	NSString* _password;
	NSData* _identityPersist;
	NSURL* _principalURL;
	NSString* _accountID;
	NSDictionary* _serverHeaders;
	NSSet* _serverComplianceClasses;
	NSString* _userAgentHeader;
	BOOL _shouldFailAllTasks;
	BOOL _started;
	BOOL _success;
	NSError* _error;
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;

}

@property (nonatomic,retain) NSString * host;                                                        //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * serverRoot;                                                  //@synthesize serverRoot=_serverRoot - In the implementation block
@property (nonatomic,retain) NSString * password;                                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * user;                                                        //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) long long port;                                                         //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSData * identityPersist;                                               //@synthesize identityPersist=_identityPersist - In the implementation block
@property (nonatomic,retain) NSString * scheme;                                                      //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) NSURL * principalURL;                                                   //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSDictionary * serverHeaders;                                           //@synthesize serverHeaders=_serverHeaders - In the implementation block
@property (nonatomic,retain) NSSet * serverComplianceClasses;                                        //@synthesize serverComplianceClasses=_serverComplianceClasses - In the implementation block
@property (nonatomic,retain) NSString * userAgentHeader;                                             //@synthesize userAgentHeader=_userAgentHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldFailAllTasks;                                                //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (assign,nonatomic) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL success;                                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;              //@synthesize backingAccountInfoProvider=_backingAccountInfoProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUser:(NSString *)arg1 ;
-(long long)port;
-(NSString *)host;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)user;
-(BOOL)started;
-(NSString *)scheme;
-(void)setScheme:(NSString *)arg1 ;
-(void)setPort:(long long)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSError *)error;
-(NSString *)accountID;
-(NSString *)userAgentHeader;
-(id)initWithAccountInfoProvider:(id)arg1 ;
-(BOOL)renewCredential;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)clientCertificateInfoProvider;
-(BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2 ;
-(id)clientToken;
-(void)setPassword:(NSString *)arg1 ;
-(NSData *)identityPersist;
-(void)setStarted:(BOOL)arg1 ;
-(CFURLStorageSessionRef)copyStorageSession;
-(NSString *)password;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2 ;
-(BOOL)shouldRetryUnauthorizedConnection:(id)arg1 ;
-(BOOL)handleShouldUseCredentialStorage;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldTurnModalOnBadPassword;
-(BOOL)shouldTryRenewingCredential;
-(void)clientTokenRequestedByServer;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSString *)serverRoot;
-(NSURL *)principalURL;
-(NSSet *)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)oauthInfoProvider;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)shouldFailAllTasks;
-(BOOL)shouldUseOpportunisticSockets;
-(NSString *)description;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)serverHeaders;
-(BOOL)success;
-(id)getAppleIDSession;
-(id)url;
-(void)setServerComplianceClasses:(NSSet *)arg1 ;
-(void)setServerRoot:(NSString *)arg1 ;
-(void)setUserAgentHeader:(NSString *)arg1 ;
-(void)setBackingAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(void)setShouldFailAllTasks:(BOOL)arg1 ;
-(void)setIdentityPersist:(NSData *)arg1 ;
-(id<CoreDAVAccountInfoProvider>)backingAccountInfoProvider;
-(void)setServerHeaders:(NSDictionary *)arg1 ;
@end
