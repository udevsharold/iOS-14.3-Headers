/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBCacheHint : PBCodable <NSCopying> {

	unsigned long long _accessTime;
	NSString* _key;
	int _lifetime;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasLifetime; 
@property (assign,nonatomic) int lifetime;                               //@synthesize lifetime=_lifetime - In the implementation block
@property (assign,nonatomic) BOOL hasAccessTime; 
@property (assign,nonatomic) unsigned long long accessTime;              //@synthesize accessTime=_accessTime - In the implementation block
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setAccessTime:(unsigned long long)arg1 ;
-(void)setHasAccessTime:(BOOL)arg1 ;
-(void)setLifetime:(int)arg1 ;
-(int)lifetime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)accessTime;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasLifetime:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasAccessTime;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLifetime;
-(void)writeTo:(id)arg1 ;
@end
