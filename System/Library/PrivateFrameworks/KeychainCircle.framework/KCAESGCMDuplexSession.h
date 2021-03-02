/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding> {

	BOOL _asSender;
	NSString* _pairingUUID;
	unsigned long long _piggybackingVersion;
	unsigned long long _epoch;
	unsigned long long _context;
	NSData* _secret;
	SCD_Struct_KC2* _send;
	SCD_Struct_KC2* _receive;

}

@property (assign) BOOL asSender;                                       //@synthesize asSender=_asSender - In the implementation block
@property (assign) unsigned long long context;                          //@synthesize context=_context - In the implementation block
@property (retain) NSData * secret;                                     //@synthesize secret=_secret - In the implementation block
@property (assign) SCD_Struct_KC2* send;                                //@synthesize send=_send - In the implementation block
@property (assign) SCD_Struct_KC2* receive;                             //@synthesize receive=_receive - In the implementation block
@property (retain) NSString * pairingUUID;                              //@synthesize pairingUUID=_pairingUUID - In the implementation block
@property (assign) unsigned long long piggybackingVersion;              //@synthesize piggybackingVersion=_piggybackingVersion - In the implementation block
@property (assign) unsigned long long epoch;                            //@synthesize epoch=_epoch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionAsSender:(id)arg1 context:(unsigned long long)arg2 ;
+(id)sessionAsReceiver:(id)arg1 context:(unsigned long long)arg2 ;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(NSString *)pairingUUID;
-(void)setPairingUUID:(NSString *)arg1 ;
-(SCD_Struct_KC2*)send;
-(NSData *)secret;
-(id)initWithCoder:(id)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
-(SCD_Struct_KC2*)receive;
-(void)finalize;
-(void)setSend:(SCD_Struct_KC2*)arg1 ;
-(unsigned long long)context;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initAsSender:(id)arg1 context:(unsigned long long)arg2 ;
-(id)initAsReceiver:(id)arg1 context:(unsigned long long)arg2 ;
-(id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(BOOL)arg3 ;
-(id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(BOOL)arg3 pairingUUID:(id)arg4 piggybackingVersion:(unsigned long long)arg5 epoch:(unsigned long long)arg6 ;
-(unsigned long long)encryptCapsuleSize:(id)arg1 IV:(id)arg2 ;
-(BOOL)GCM:(const ccmode_gcm*)arg1 context:(SCD_Struct_KC2*)arg2 iv:(id)arg3 size:(unsigned long long)arg4 data:(const char*)arg5 processed:(char*)arg6 tag:(char*)arg7 error:(id*)arg8 ;
-(id)encrypt:(id)arg1 error:(id*)arg2 ;
-(id)decryptAndVerify:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)piggybackingVersion;
-(void)setPiggybackingVersion:(unsigned long long)arg1 ;
-(BOOL)asSender;
-(void)setAsSender:(BOOL)arg1 ;
-(void)setSecret:(NSData *)arg1 ;
-(void)setReceive:(SCD_Struct_KC2*)arg1 ;
@end
