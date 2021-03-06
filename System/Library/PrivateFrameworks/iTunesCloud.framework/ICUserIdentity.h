/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ML3AccountInformationProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <ML3AccountInformationProviding, NSCopying, NSSecureCoding> {

	NSString* _deviceIdentifier;
	BOOL _allowsDelegation;
	BOOL _allowsAccountEstablishment;
	long long _type;
	unsigned long long _creationTime;
	NSNumber* _DSID;

}

@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long creationTime;               //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,readonly) BOOL allowsDelegation;                         //@synthesize allowsDelegation=_allowsDelegation - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccountEstablishment;               //@synthesize allowsAccountEstablishment=_allowsAccountEstablishment - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullIdentity;
+(id)autoupdatingActiveAccount;
+(id)specificAccountWithDSID:(id)arg1 ;
+(id)autoupdatingActiveLockerAccount;
+(id)carrierBundleWithDeviceIdentifier:(id)arg1 ;
+(id)activeAccount;
+(id)activeLockerAccount;
-(NSString *)accountDSID;
-(unsigned long long)creationTime;
-(NSNumber *)DSID;
-(NSString *)deviceIdentifier;
-(id)init;
-(unsigned long long)hashInStore:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 inStore:(id)arg2 ;
-(BOOL)_isComparableUsingResolvedDSID;
-(id)_resolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(void)_setResolvedDSID:(id)arg1 ;
-(id)identityAllowingDelegation:(BOOL)arg1 ;
-(id)identityAllowingEstablishment:(BOOL)arg1 ;
-(BOOL)allowsDelegation;
-(BOOL)allowsAccountEstablishment;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)accountDSID;
-(void)encodeWithCoder:(id)arg1 ;
@end

