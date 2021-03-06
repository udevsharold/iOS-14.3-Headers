/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

	NSURLCredentialInternal* _internal;

}

@property (readonly) unsigned long long persistence; 
+(id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)credentialForTrust:(SecTrustRef)arg1 ;
+(id)credentialWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
-(unsigned long long)persistence;
-(id)user;
-(id)certificates;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)password;
-(const CFURLCredentialRef)_CFURLCredential;
-(const CFURLCredentialRef)_cfurlcredential;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_removeSWCACreatorAttribute;
-(SecIdentityRef)identity;
-(id)description;
-(BOOL)_hasSWCACreatorAttribute;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(id)_initWithCFURLCredential:(CFURLCredentialRef)arg1 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
-(BOOL)hasPassword;
-(id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

