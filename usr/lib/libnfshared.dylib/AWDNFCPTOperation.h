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

@interface AWDNFCPTOperation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _awdErrorCode;
	unsigned _errorCode;
	unsigned _errorStep;
	unsigned _operationType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) unsigned operationType;                    //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) BOOL hasErrorStep; 
@property (assign,nonatomic) unsigned errorStep;                        //@synthesize errorStep=_errorStep - In the implementation block
@property (assign,nonatomic) BOOL hasAwdErrorCode; 
@property (assign,nonatomic) unsigned awdErrorCode;                     //@synthesize awdErrorCode=_awdErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
-(unsigned long long)timestamp;
-(unsigned)errorCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOperationType:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTimestamp;
-(BOOL)hasErrorCode;
-(unsigned)operationType;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(void)setErrorStep:(unsigned)arg1 ;
-(void)setHasErrorStep:(BOOL)arg1 ;
-(BOOL)hasErrorStep;
-(void)setAwdErrorCode:(unsigned)arg1 ;
-(void)setHasAwdErrorCode:(BOOL)arg1 ;
-(BOOL)hasAwdErrorCode;
-(unsigned)errorStep;
-(unsigned)awdErrorCode;
@end

