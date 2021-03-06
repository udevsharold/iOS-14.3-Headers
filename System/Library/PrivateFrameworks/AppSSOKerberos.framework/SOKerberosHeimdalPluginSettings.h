/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, NSUUID;

@interface SOKerberosHeimdalPluginSettings : NSObject <NSSecureCoding> {

	BOOL _defaultRealm;
	NSString* _realm;
	NSDictionary* _domainRealmMapping;
	NSArray* _hosts;
	long long _credentialUseMode;

}

@property (nonatomic,readonly) NSString * realm;                                   //@synthesize realm=_realm - In the implementation block
@property (assign,getter=isDefaultRealm,nonatomic) BOOL defaultRealm;              //@synthesize defaultRealm=_defaultRealm - In the implementation block
@property (nonatomic,retain) NSDictionary * domainRealmMapping;                    //@synthesize domainRealmMapping=_domainRealmMapping - In the implementation block
@property (nonatomic,retain) NSArray * hosts;                                      //@synthesize hosts=_hosts - In the implementation block
@property (assign,nonatomic) long long credentialUseMode;                          //@synthesize credentialUseMode=_credentialUseMode - In the implementation block
@property (nonatomic,retain) NSString * siteCode; 
@property (nonatomic,retain) NSUUID * currentCredential; 
+(BOOL)supportsSecureCoding;
+(BOOL)createSettingCacheEntryIfNeededWithError:(id*)arg1 ;
+(id)retrieveCurrentSettingsForRealm:(id)arg1 error:(id*)arg2 ;
+(HeimCred_sRef)retrieveSetting:(id)arg1 forRealm:(id)arg2 ;
+(id)stringWithCredentialUseMode:(long long)arg1 ;
+(HeimCred_sRef)retrieveCacheEntry;
+(HeimCred_sRef)createCacheEntryWithError:(id*)arg1 ;
+(id)appSSOKerberosCacheName;
+(void)setAppSSOKerberosCacheName:(id)arg1 ;
+(HeimCred_sRef)retrieveCurrentSettingsForRealm:(id)arg1 ;
+(id)retrieveAllCurrentSettings;
+(BOOL)deleteSettingsForRealm:(id)arg1 error:(id*)arg2 ;
+(void)deleteAllSettings;
-(NSString *)realm;
-(id)init;
-(void)setCurrentCredential:(NSUUID *)arg1 ;
-(void)setHosts:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)hosts;
-(id)dictionaryRepresentation;
-(BOOL)saveWithError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRealm:(id)arg1 ;
-(BOOL)isDefaultRealm;
-(void)setDefaultRealm:(BOOL)arg1 ;
-(NSDictionary *)domainRealmMapping;
-(void)setDomainRealmMapping:(NSDictionary *)arg1 ;
-(long long)credentialUseMode;
-(void)setCredentialUseMode:(long long)arg1 ;
-(NSString *)siteCode;
-(void)setSiteCode:(NSString *)arg1 ;
-(BOOL)saveSetting:(id)arg1 data:(id)arg2 withError:(id*)arg3 ;
-(NSUUID *)currentCredential;
@end

