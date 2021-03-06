/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPublisherDetails : PBCodable <NSCopying> {

	SCD_Struct_GE92* _publisherIds;
	BOOL _currentlyFollowing;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) unsigned long long publisherIdsCount; 
@property (nonatomic,readonly) unsigned long long* publisherIds; 
@property (assign,nonatomic) BOOL hasCurrentlyFollowing; 
@property (assign,nonatomic) BOOL currentlyFollowing; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCurrentlyFollowing:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPublisherIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)currentlyFollowing;
-(void)setHasCurrentlyFollowing:(BOOL)arg1 ;
-(BOOL)hasCurrentlyFollowing;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long*)publisherIds;
-(void)addPublisherId:(unsigned long long)arg1 ;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(unsigned long long)publisherIdAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg1 ;
@end

