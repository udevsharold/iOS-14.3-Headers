/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDRelayCertificateRequest : HMFObject {

	NSData* _publicKey;
	NSString* _challengeIdentifier;
	NSData* _challengeResponse;
	NSData* _challengeCertificate;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                          //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeIdentifier;              //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeResponse;                  //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeCertificate;               //@synthesize challengeCertificate=_challengeCertificate - In the implementation block
+(id)shortDescription;
-(id)init;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)description;
-(NSData *)publicKey;
-(id)debugDescription;
-(id)shortDescription;
-(NSData *)challengeResponse;
-(NSString *)challengeIdentifier;
-(id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)challengeCertificate;
@end

