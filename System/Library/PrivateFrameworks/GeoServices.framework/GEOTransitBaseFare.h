/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitFare.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDecimalNumber, NSString, NSArray, PBDataReader, PBUnknownFields, GEOTransitPrice, NSMutableArray;

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTransitPrice* _price;
	NSMutableArray* _supportedPaymentMethods;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numberOfLegs;
	int _paymentType;
	BOOL _cashOnly;
	struct {
		unsigned has_numberOfLegs : 1;
		unsigned has_paymentType : 1;
		unsigned has_cashOnly : 1;
		unsigned read_unknownFields : 1;
		unsigned read_price : 1;
		unsigned read_supportedPaymentMethods : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSDecimalNumber * value; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSArray * supportedICCardProviders; 
@property (nonatomic,readonly) BOOL cashOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPrice; 
@property (nonatomic,retain) GEOTransitPrice * price; 
@property (assign,nonatomic) BOOL hasPaymentType; 
@property (assign,nonatomic) int paymentType; 
@property (assign,nonatomic) BOOL hasNumberOfLegs; 
@property (assign,nonatomic) unsigned numberOfLegs; 
@property (nonatomic,retain) NSMutableArray * supportedPaymentMethods; 
@property (assign,nonatomic) BOOL hasCashOnly; 
@property (assign,nonatomic) BOOL cashOnly; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)supportedPaymentMethodType;
-(NSString *)currencyCode;
-(GEOTransitPrice *)price;
-(NSDecimalNumber *)value;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)paymentTypeAsString:(int)arg1 ;
-(int)StringAsPaymentType:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasPaymentType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPrice;
-(BOOL)cashOnly;
-(NSString *)description;
-(long long)type;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasPaymentType;
-(void)copyTo:(id)arg1 ;
-(void)setPrice:(GEOTransitPrice *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)supportedICCardProviders;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(int)paymentType;
-(void)setNumberOfLegs:(unsigned)arg1 ;
-(void)setCashOnly:(BOOL)arg1 ;
-(void)addSupportedPaymentMethod:(id)arg1 ;
-(unsigned long long)supportedPaymentMethodsCount;
-(void)clearSupportedPaymentMethods;
-(id)supportedPaymentMethodAtIndex:(unsigned long long)arg1 ;
-(unsigned)numberOfLegs;
-(BOOL)hasNumberOfLegs;
-(void)setHasNumberOfLegs:(BOOL)arg1 ;
-(NSMutableArray *)supportedPaymentMethods;
-(void)setSupportedPaymentMethods:(NSMutableArray *)arg1 ;
-(void)setHasCashOnly:(BOOL)arg1 ;
-(BOOL)hasCashOnly;
-(void)setPaymentType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
