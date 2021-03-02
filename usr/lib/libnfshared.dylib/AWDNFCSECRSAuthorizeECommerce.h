/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCSECRSAuthorizeECommerce : PBCodable <NSCopying> {

	unsigned long long _otherAmount;
	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned long long _transactionTotal;
	NSData* _aid;
	unsigned _countryCode;
	unsigned _currencyCode;
	unsigned _merchantCapabilities;
	NSData* _merchantId;
	unsigned _method;
	unsigned _status;
	NSData* _transactionId;
	unsigned _transactionType;
	NSData* _uuidReference;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasMethod; 
@property (assign,nonatomic) unsigned method;                                        //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) BOOL hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantId; 
@property (nonatomic,retain) NSData * merchantId;                                    //@synthesize merchantId=_merchantId - In the implementation block
@property (assign,nonatomic) BOOL hasCurrencyCode; 
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTotal; 
@property (assign,nonatomic) unsigned long long transactionTotal;                    //@synthesize transactionTotal=_transactionTotal - In the implementation block
@property (assign,nonatomic) BOOL hasOtherAmount; 
@property (assign,nonatomic) unsigned long long otherAmount;                         //@synthesize otherAmount=_otherAmount - In the implementation block
@property (assign,nonatomic) BOOL hasMerchantCapabilities; 
@property (assign,nonatomic) unsigned merchantCapabilities;                          //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionType; 
@property (assign,nonatomic) unsigned transactionType;                               //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) BOOL hasCountryCode; 
@property (assign,nonatomic) unsigned countryCode;                                   //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionId; 
@property (nonatomic,retain) NSData * transactionId;                                 //@synthesize transactionId=_transactionId - In the implementation block
-(unsigned)currencyCode;
-(BOOL)hasCountryCode;
-(NSData *)aid;
-(unsigned long long)timestamp;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(unsigned)transactionType;
-(unsigned)countryCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMethod:(BOOL)arg1 ;
-(void)setCountryCode:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)method;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)status;
-(BOOL)hasAid;
-(unsigned long long)hash;
-(id)description;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(void)setMethod:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMerchantCapabilities;
-(void)setHasMerchantCapabilities:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(NSData *)merchantId;
-(void)setAid:(NSData *)arg1 ;
-(void)setMerchantId:(NSData *)arg1 ;
-(BOOL)hasMerchantId;
-(void)setMerchantCapabilities:(unsigned)arg1 ;
-(void)setTransactionType:(unsigned)arg1 ;
-(NSData *)transactionId;
-(void)setTransactionId:(NSData *)arg1 ;
-(void)setHasTransactionType:(BOOL)arg1 ;
-(BOOL)hasTransactionType;
-(BOOL)hasTransactionId;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned)merchantCapabilities;
-(BOOL)hasCurrencyCode;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMethod;
-(void)setHasCountryCode:(BOOL)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setHasCurrencyCode:(BOOL)arg1 ;
-(void)setTransactionTotal:(unsigned long long)arg1 ;
-(void)setHasTransactionTotal:(BOOL)arg1 ;
-(BOOL)hasTransactionTotal;
-(void)setOtherAmount:(unsigned long long)arg1 ;
-(void)setHasOtherAmount:(BOOL)arg1 ;
-(BOOL)hasOtherAmount;
-(unsigned long long)transactionTotal;
-(unsigned long long)otherAmount;
@end
