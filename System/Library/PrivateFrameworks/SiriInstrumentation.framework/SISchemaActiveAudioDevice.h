/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaActiveAudioDevice : PBCodable {

	NSString* _vendorIdentifier;
	NSString* _productIdentifier;
	BOOL _hasVendorIdentifier;
	BOOL _hasProductIdentifier;

}

@property (nonatomic,copy) NSString * vendorIdentifier;               //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVendorIdentifier;                //@synthesize hasVendorIdentifier=_hasVendorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProductIdentifier;               //@synthesize hasProductIdentifier=_hasProductIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)productIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVendorIdentifier;
-(BOOL)hasProductIdentifier;
-(void)setHasVendorIdentifier:(BOOL)arg1 ;
-(void)setHasProductIdentifier:(BOOL)arg1 ;
@end
