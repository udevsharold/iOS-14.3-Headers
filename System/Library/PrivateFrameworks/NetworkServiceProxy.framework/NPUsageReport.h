/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface NPUsageReport : NSObject <NSSecureCoding> {

	unsigned char _addressFamily;
	unsigned _edgeIndex;
	unsigned _keybagGeneration;
	unsigned _waldoTimestamp;
	NSString* _signingIdentifier;
	long long _fallbackReason;
	NSUUID* _dayPassUUID;
	unsigned long long _rtt;
	NSString* _geohash;

}

@property (nonatomic,readonly) NSString * signingIdentifier;              //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (nonatomic,readonly) long long fallbackReason;                  //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (nonatomic,retain) NSUUID * dayPassUUID;                        //@synthesize dayPassUUID=_dayPassUUID - In the implementation block
@property (assign,nonatomic) unsigned long long rtt;                      //@synthesize rtt=_rtt - In the implementation block
@property (nonatomic,retain) NSString * geohash;                          //@synthesize geohash=_geohash - In the implementation block
@property (assign,nonatomic) unsigned char addressFamily;                 //@synthesize addressFamily=_addressFamily - In the implementation block
@property (assign,nonatomic) unsigned edgeIndex;                          //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (assign,nonatomic) unsigned keybagGeneration;                   //@synthesize keybagGeneration=_keybagGeneration - In the implementation block
@property (assign,nonatomic) unsigned waldoTimestamp;                     //@synthesize waldoTimestamp=_waldoTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)signingIdentifier;
-(long long)fallbackReason;
-(NSUUID *)dayPassUUID;
-(void)setAddressFamily:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)rtt;
-(unsigned char)addressFamily;
-(void)setEdgeIndex:(unsigned)arg1 ;
-(unsigned)edgeIndex;
-(void)setRtt:(unsigned long long)arg1 ;
-(NSString *)geohash;
-(void)setDayPassUUID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSigningIdentifier:(id)arg1 fallbackReason:(long long)arg2 ;
-(void)setGeohash:(NSString *)arg1 ;
-(unsigned)keybagGeneration;
-(void)setKeybagGeneration:(unsigned)arg1 ;
-(unsigned)waldoTimestamp;
-(void)setWaldoTimestamp:(unsigned)arg1 ;
@end
