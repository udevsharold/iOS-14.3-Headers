/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariUsingPrivateBrowsingEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _inPrivateBrowsing;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInPrivateBrowsing; 
@property (assign,nonatomic) BOOL inPrivateBrowsing;                    //@synthesize inPrivateBrowsing=_inPrivateBrowsing - In the implementation block
-(unsigned long long)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasInPrivateBrowsing;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setInPrivateBrowsing:(BOOL)arg1 ;
-(void)setHasInPrivateBrowsing:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)inPrivateBrowsing;
-(BOOL)hasTimestamp;
-(void)writeTo:(id)arg1 ;
@end
