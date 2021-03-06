/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, AMSProcessInfo, NSURL;

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _authenticationType;
	BOOL _allowServerDialogs;
	BOOL _canMakeAccountActive;
	BOOL _enableAccountCreation;
	BOOL _ignoreAccountConversion;
	BOOL _usernameEditable;
	BOOL _allowSecondaryCredentialSource;
	BOOL _demoAccountSetup;
	BOOL _ephemeral;
	BOOL _remoteProxyAuthentication;
	NSString* _appProvidedContext;
	NSDictionary* _appProvidedData;
	NSString* _cancelButtonString;
	NSDictionary* _createAccountQueryParams;
	AMSProcessInfo* _clientInfo;
	unsigned long long _credentialSource;
	NSString* _debugReason;
	NSString* _defaultButtonString;
	NSDictionary* _HTTPHeaders;
	NSURL* _iconBundleURL;
	NSString* _logKey;
	NSString* _promptTitle;
	NSString* _proxyAppBundleID;
	NSString* _proxyAppName;
	NSString* _reason;
	NSString* _userAgent;
	NSString* _userAgentSuffix;
	NSString* _companionDeviceClientInfo;
	NSString* _companionDeviceUDID;
	long long _serviceType;
	NSString* _serviceIdentifier;

}

@property (assign,nonatomic) BOOL allowSecondaryCredentialSource;                                              //@synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource - In the implementation block
@property (nonatomic,retain) NSString * companionDeviceClientInfo;                                             //@synthesize companionDeviceClientInfo=_companionDeviceClientInfo - In the implementation block
@property (nonatomic,retain) NSString * companionDeviceUDID;                                                   //@synthesize companionDeviceUDID=_companionDeviceUDID - In the implementation block
@property (assign,getter=isDemoAccountSetup,nonatomic) BOOL demoAccountSetup;                                  //@synthesize demoAccountSetup=_demoAccountSetup - In the implementation block
@property (assign,nonatomic) BOOL ephemeral;                                                                   //@synthesize ephemeral=_ephemeral - In the implementation block
@property (assign,nonatomic) long long serviceType;                                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (getter=isRemoteProxyAuthentication,nonatomic,readonly) BOOL remoteProxyAuthentication;              //@synthesize remoteProxyAuthentication=_remoteProxyAuthentication - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                                                     //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowServerDialogs;                                                          //@synthesize allowServerDialogs=_allowServerDialogs - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationType; 
@property (nonatomic,copy) NSString * appProvidedContext;                                                      //@synthesize appProvidedContext=_appProvidedContext - In the implementation block
@property (nonatomic,copy) NSDictionary * appProvidedData;                                                     //@synthesize appProvidedData=_appProvidedData - In the implementation block
@property (nonatomic,retain) NSString * cancelButtonString;                                                    //@synthesize cancelButtonString=_cancelButtonString - In the implementation block
@property (assign,nonatomic) BOOL canMakeAccountActive;                                                        //@synthesize canMakeAccountActive=_canMakeAccountActive - In the implementation block
@property (nonatomic,retain) NSDictionary * createAccountQueryParams;                                          //@synthesize createAccountQueryParams=_createAccountQueryParams - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                      //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) unsigned long long credentialSource;                                              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,retain) NSString * debugReason;                                                           //@synthesize debugReason=_debugReason - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonString;                                                   //@synthesize defaultButtonString=_defaultButtonString - In the implementation block
@property (assign,nonatomic) BOOL enableAccountCreation;                                                       //@synthesize enableAccountCreation=_enableAccountCreation - In the implementation block
@property (nonatomic,retain) NSDictionary * HTTPHeaders;                                                       //@synthesize HTTPHeaders=_HTTPHeaders - In the implementation block
@property (nonatomic,retain) NSURL * iconBundleURL;                                                            //@synthesize iconBundleURL=_iconBundleURL - In the implementation block
@property (assign,nonatomic) BOOL ignoreAccountConversion;                                                     //@synthesize ignoreAccountConversion=_ignoreAccountConversion - In the implementation block
@property (nonatomic,retain) NSString * logKey;                                                                //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * promptTitle;                                                           //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,retain) NSString * proxyAppBundleID;                                                      //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
@property (nonatomic,retain) NSString * proxyAppName;                                                          //@synthesize proxyAppName=_proxyAppName - In the implementation block
@property (nonatomic,retain) NSString * reason;                                                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * userAgentSuffix;                                                       //@synthesize userAgentSuffix=_userAgentSuffix - In the implementation block
@property (assign,nonatomic) BOOL usernameEditable;                                                            //@synthesize usernameEditable=_usernameEditable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setDebugReason:(NSString *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(NSString *)appProvidedContext;
-(NSString *)userAgent;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)logKey;
-(void)setAppProvidedData:(NSDictionary *)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(unsigned long long)authenticationType;
-(void)setUserAgentSuffix:(NSString *)arg1 ;
-(NSString *)debugReason;
-(NSString *)userAgentSuffix;
-(NSString *)serviceIdentifier;
-(AMSProcessInfo *)clientInfo;
-(BOOL)allowServerDialogs;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(BOOL)usernameEditable;
-(id)init;
-(id)mediaType;
-(void)setAppProvidedContext:(NSString *)arg1 ;
-(BOOL)canMakeAccountActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)appProvidedData;
-(id)presentingViewController;
-(NSDictionary *)HTTPHeaders;
-(NSString *)cancelButtonString;
-(void)setPresentingViewController:(id)arg1 ;
-(void)setDemoAccountSetup:(BOOL)arg1 ;
-(NSString *)companionDeviceUDID;
-(id)optionsDictionaryForRemoteProxyAuthentication;
-(BOOL)ephemeral;
-(void)setCanMakeAccountActive:(BOOL)arg1 ;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(NSString *)promptTitle;
-(BOOL)enableAccountCreation;
-(void)setEphemeral:(BOOL)arg1 ;
-(void)setCompanionDeviceUDID:(NSString *)arg1 ;
-(BOOL)isDemoAccountSetup;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowServerDialogs:(BOOL)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(void)setProxyAppName:(NSString *)arg1 ;
-(id)description;
-(id)optionsDictionary;
-(NSString *)defaultButtonString;
-(NSString *)reason;
-(void)setAllowSecondaryCredentialSource:(BOOL)arg1 ;
-(void)setUsernameEditable:(BOOL)arg1 ;
-(void)setCompanionDeviceClientInfo:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(unsigned long long)credentialSource;
-(void)setCreateAccountQueryParams:(NSDictionary *)arg1 ;
-(NSURL *)iconBundleURL;
-(NSString *)companionDeviceClientInfo;
-(void)setEnableAccountCreation:(BOOL)arg1 ;
-(void)setPromptTitle:(NSString *)arg1 ;
-(NSString *)proxyAppBundleID;
-(void)setAuthKitData:(id)arg1 ;
-(BOOL)allowSecondaryCredentialSource;
-(void)setIgnoreAccountConversion:(BOOL)arg1 ;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(BOOL)isRemoteProxyAuthentication;
-(id)authKitData;
-(NSString *)proxyAppName;
-(void)setCancelButtonString:(NSString *)arg1 ;
-(void)setCredentialSource:(unsigned long long)arg1 ;
-(void)setAuthenticationType:(unsigned long long)arg1 ;
-(NSDictionary *)createAccountQueryParams;
-(BOOL)ignoreAccountConversion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
@end

