/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSMutableSet, ACAccount, NSSet, NSDate;

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _credentialItems;
	NSString* _credentialType;
	NSMutableSet* _dirtyProperties;
	ACAccount* _owningAccount;
	BOOL _requiresTouchID;
	BOOL _dirty;
	BOOL _empty;

}

@property (assign,nonatomic) BOOL requiresTouchID;                    //@synthesize requiresTouchID=_requiresTouchID - In the implementation block
@property (nonatomic,copy) NSString * token; 
@property (nonatomic,copy) NSString * oauthTokenSecret; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * credentialType; 
@property (nonatomic,readonly) NSSet * dirtyProperties; 
@property (assign,getter=isDirty,nonatomic) BOOL dirty;               //@synthesize dirty=_dirty - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;               //@synthesize empty=_empty - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenNoSync; 
@property (nonatomic,copy) NSString * oauthRefreshToken; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,copy) NSString * findMyiPhoneToken; 
@property (nonatomic,copy) NSString * mapsToken; 
@property (nonatomic,copy) NSString * mdmServerToken; 
@property (nonatomic,copy) NSString * hsaToken; 
@property (nonatomic,copy) NSDate * tokenExpiryDate; 
@property (nonatomic,copy) NSString * oauthToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)credentialWithPassword:(id)arg1 ;
+(id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3 ;
+(id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1 ;
+(id)allSupportedKeys;
+(id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
-(void)setToken:(NSString *)arg1 ;
-(NSDate *)expiryDate;
-(NSString *)hsaToken;
-(NSString *)oauthToken;
-(id)_initWithProtobuf:(id)arg1 ;
-(BOOL)requiresTouchID;
-(id)_initWithProtobufData:(id)arg1 ;
-(void)setMdmServerToken:(NSString *)arg1 ;
-(NSString *)credentialType;
-(BOOL)isEmpty;
-(id)init;
-(void)setHsaToken:(NSString *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)_encodeProtobufData;
-(void)setEmpty:(BOOL)arg1 ;
-(id)_encodeProtobuf;
-(NSString *)mdmServerToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)credentialItemForKey:(id)arg1 ;
-(BOOL)isDirty;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
-(void)setCredentialType:(NSString *)arg1 ;
-(NSString *)findMyiPhoneToken;
-(NSString *)password;
-(NSSet *)dirtyProperties;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(void)_setOwningAccount:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPassword:(id)arg1 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(NSString *)token;
-(void)setMapsToken:(NSString *)arg1 ;
-(void)setTokenExpiryDate:(NSDate *)arg1 ;
-(id)keysForCredentialItems;
-(NSDate *)tokenExpiryDate;
-(NSString *)description;
-(NSString *)oauthTokenNoSync;
-(void)setOauthRefreshToken:(NSString *)arg1 ;
-(NSString *)oauthRefreshToken;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3 ;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(void)_clearDirtyProperties;
-(void)setOauthTokenNoSync:(NSString *)arg1 ;
-(id)credentialItems;
-(void)setFindMyiPhoneToken:(NSString *)arg1 ;
-(NSString *)mapsToken;
-(void)setOauthToken:(NSString *)arg1 ;
-(id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
-(void)setRequiresTouchID:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

