/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDHAPAccessory, HMDUser, NSData, NSDate;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDHAPAccessory* _accessory;
	HMDUser* _user;
	NSData* _consentToken;
	NSDate* _expirationDate;

}

@property (assign,nonatomic,__weak) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;                  //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                         //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * consentToken;                    //@synthesize consentToken=_consentToken - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUser:(HMDUser *)arg1 ;
-(HMDUser *)user;
-(NSUUID *)userIdentifier;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(id)init;
-(HMDHAPAccessory *)accessory;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSUUID *)identifier;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)accessoryIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4 ;
-(NSData *)consentToken;
@end

