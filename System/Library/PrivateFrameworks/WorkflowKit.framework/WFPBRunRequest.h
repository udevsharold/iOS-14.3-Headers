/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface WFPBRunRequest : PBRequest <NSCopying> {

	NSData* _payload;
	int _payloadType;

}

@property (assign,nonatomic) int payloadType;               //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,retain) NSData * payload;              //@synthesize payload=_payload - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(unsigned long long)hash;
-(NSData *)payload;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)payloadType;
-(void)setPayloadType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)payloadTypeAsString:(int)arg1 ;
-(int)StringAsPayloadType:(id)arg1 ;
@end

