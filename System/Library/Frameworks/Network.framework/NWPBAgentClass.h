/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBAgentClass : PBCodable <NSCopying> {

	NSString* _domain;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(id)description;
-(NSString *)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(BOOL)hasType;
-(void)writeTo:(id)arg1 ;
@end
