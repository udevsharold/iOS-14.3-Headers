/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface HDCodableObjectAuthorization : PBCodable <NSCopying> {

	NSMutableArray* _authorizations;
	NSData* _objectUUID;

}

@property (nonatomic,readonly) BOOL hasObjectUUID; 
@property (nonatomic,retain) NSData * objectUUID;                          //@synthesize objectUUID=_objectUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizations;              //@synthesize authorizations=_authorizations - In the implementation block
+(Class)authorizationsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)addAuthorizations:(id)arg1 ;
-(unsigned long long)authorizationsCount;
-(void)clearAuthorizations;
-(id)authorizationsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)authorizations;
-(void)setAuthorizations:(NSMutableArray *)arg1 ;
-(void)setObjectUUID:(NSData *)arg1 ;
-(BOOL)hasObjectUUID;
-(NSData *)objectUUID;
@end

