/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, AMSAuthenticateTaskDelegate;
@class AMSAuthenticateOptions, NSString, NSNumber, NSUUID;

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	id<AMSAuthenticateTaskDelegate> _delegate;
	AMSAuthenticateOptions* _options;
	NSString* _password;
	NSString* _multiUserToken;
	NSString* _rawPassword;
	NSString* _altDSID;
	NSNumber* _DSID;
	NSUUID* _homeIdentifier;
	NSUUID* _homeUserIdentifier;
	NSString* _username;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                                       //@synthesize bag=_bag - In the implementation block
@property (assign,nonatomic,__weak) id<AMSAuthenticateTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateOptions * options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * multiUserToken;                                    //@synthesize multiUserToken=_multiUserToken - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                                       //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                                           //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSNumber * DSID;                                              //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSUUID * homeIdentifier;                                      //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * homeUserIdentifier;                                  //@synthesize homeUserIdentifier=_homeUserIdentifier - In the implementation block
@property (nonatomic,retain) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)_createFallbackBag;
+(BOOL)_loadCreateAppleIDwithClientInfo:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
+(void)_updateAccountPasswordUsingSecondaryAccounts:(id)arg1 ;
+(id)bagSubProfile;
+(id)bagKeySet;
-(void)setUsername:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)username;
-(NSNumber *)DSID;
-(NSString *)altDSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)homeID;
-(id)init;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)password;
-(id<AMSBagProtocol>)bag;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)performAuthentication;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 bag:(id)arg3 ;
-(id)_accountForAuthenticationWithError:(id*)arg1 ;
-(BOOL)_runCreateAccountDialogWithError:(id*)arg1 ;
-(id)_attemptMultiUserTokenAuthenticationForAccount:(id)arg1 ;
-(id)_accountStoreForAuthentication;
-(id)_attemptPasswordReuseAuthenticationForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_createAuthKitUpdateTaskForAccount:(id)arg1 ;
-(id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_sanitizeError:(id)arg1 ;
-(void)_updateAccountWithProvidedInformation:(id)arg1 ;
-(id)_runDialogRequest:(id)arg1 ;
-(id)_handleDialogFromError:(id)arg1 ;
-(void)setMultiUserToken:(NSString *)arg1 ;
-(NSString *)multiUserToken;
-(NSUUID *)homeIdentifier;
-(void)setHomeIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)homeUserIdentifier;
-(void)setHomeUserIdentifier:(NSUUID *)arg1 ;
-(void)setDelegate:(id<AMSAuthenticateTaskDelegate>)arg1 ;
-(void)setHomeID:(id)arg1 ;
-(NSString *)rawPassword;
-(void)setRawPassword:(NSString *)arg1 ;
-(id<AMSAuthenticateTaskDelegate>)delegate;
-(AMSAuthenticateOptions *)options;
@end
