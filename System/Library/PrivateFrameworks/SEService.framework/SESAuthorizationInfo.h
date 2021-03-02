/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData;

@interface SESAuthorizationInfo : NSObject <NSSecureCoding> {

	unsigned char _state;
	NSNumber* _remainingCount;
	NSNumber* _remainingTime;
	NSData* _publicKeyIdentifier;
	NSData* _authorizationID;
	NSData* _anonymizedDSID;

}

@property (assign,nonatomic) unsigned char state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNumber * remainingCount;                 //@synthesize remainingCount=_remainingCount - In the implementation block
@property (nonatomic,retain) NSNumber * remainingTime;                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,retain) NSData * publicKeyIdentifier;              //@synthesize publicKeyIdentifier=_publicKeyIdentifier - In the implementation block
@property (nonatomic,retain) NSData * authorizationID;                  //@synthesize authorizationID=_authorizationID - In the implementation block
@property (nonatomic,retain) NSData * anonymizedDSID;                   //@synthesize anonymizedDSID=_anonymizedDSID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withState:(unsigned char)arg1 remaningCount:(id)arg2 remainingTime:(id)arg3 publicKeyIdentifier:(id)arg4 authorizationID:(id)arg5 anonymizedDSID:(id)arg6 ;
-(NSNumber *)remainingTime;
-(unsigned char)state;
-(NSData *)authorizationID;
-(id)initWithCoder:(id)arg1 ;
-(void)setRemainingTime:(NSNumber *)arg1 ;
-(id)description;
-(void)setState:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)publicKeyIdentifier;
-(void)setAuthorizationID:(NSData *)arg1 ;
-(void)setRemainingCount:(NSNumber *)arg1 ;
-(void)setPublicKeyIdentifier:(NSData *)arg1 ;
-(void)setAnonymizedDSID:(NSData *)arg1 ;
-(NSNumber *)remainingCount;
-(NSData *)anonymizedDSID;
@end
