/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {

	BOOL _isLong;
	BOOL _success;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL success;                //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasIsLong; 
@property (assign,nonatomic) BOOL isLong;                 //@synthesize isLong=_isLong - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLong;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)success;
-(void)writeTo:(id)arg1 ;
-(void)setIsLong:(BOOL)arg1 ;
-(void)setHasIsLong:(BOOL)arg1 ;
-(BOOL)hasIsLong;
@end

