/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBEndpoint, NWPBParameters;

@interface NWPBOpenConnection : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NWPBEndpoint* _endpoint;
	NWPBParameters* _parameters;

}

@property (nonatomic,readonly) BOOL hasEndpoint; 
@property (nonatomic,retain) NWPBEndpoint * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                    //@synthesize clientUUID=_clientUUID - In the implementation block
-(void)setEndpoint:(NWPBEndpoint *)arg1 ;
-(void)setParameters:(NWPBParameters *)arg1 ;
-(NWPBParameters *)parameters;
-(NWPBEndpoint *)endpoint;
-(BOOL)hasClientUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasParameters;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasEndpoint;
-(NSString *)clientUUID;
-(void)writeTo:(id)arg1 ;
@end

