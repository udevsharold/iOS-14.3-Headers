/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	HMFPairingKey* _publicKey;
	HMFPairingKey* _privateKey;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * publicKey;                     //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * privateKey;                    //@synthesize privateKey=_privateKey - In the implementation block
@property (copy,readonly) HMFPairingIdentity * publicPairingIdentity; 
+(BOOL)supportsSecureCoding;
+(id)pairingIdentity;
-(id)init;
-(id)attributeDescriptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(HMFPairingIdentity *)publicPairingIdentity;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMFPairingKey *)publicKey;
-(id)shortDescription;
-(HMFPairingKey *)privateKey;
-(void)encodeWithCoder:(id)arg1 ;
@end

