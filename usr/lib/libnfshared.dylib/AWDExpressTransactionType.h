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

@interface AWDExpressTransactionType : PBCodable <NSCopying> {

	unsigned _appletType;
	unsigned _count;
	NSData* _ridAndPix;
	unsigned _spid;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasRidAndPix; 
@property (nonatomic,retain) NSData * ridAndPix;               //@synthesize ridAndPix=_ridAndPix - In the implementation block
@property (assign,nonatomic) BOOL hasSpid; 
@property (assign,nonatomic) unsigned spid;                    //@synthesize spid=_spid - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasAppletType; 
@property (assign,nonatomic) unsigned appletType;              //@synthesize appletType=_appletType - In the implementation block
-(void)setCount:(unsigned)arg1 ;
-(unsigned)spid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(BOOL)hasSpid;
-(void)writeTo:(id)arg1 ;
-(void)setSpid:(unsigned)arg1 ;
-(void)setHasSpid:(BOOL)arg1 ;
-(void)setRidAndPix:(NSData *)arg1 ;
-(BOOL)hasRidAndPix;
-(void)setAppletType:(unsigned)arg1 ;
-(void)setHasAppletType:(BOOL)arg1 ;
-(BOOL)hasAppletType;
-(NSData *)ridAndPix;
-(unsigned)appletType;
@end
