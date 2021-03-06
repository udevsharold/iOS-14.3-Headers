/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidFailToCreatePasscode : PBCodable <NSCopying> {

	int _error;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                  //@synthesize error=_error - In the implementation block
-(int)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasError;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setError:(int)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

